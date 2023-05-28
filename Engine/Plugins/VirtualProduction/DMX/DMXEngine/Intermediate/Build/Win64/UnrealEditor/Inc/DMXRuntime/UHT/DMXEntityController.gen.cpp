// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Library/DMXEntityController.h"
#include "DMXProtocolTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXEntityController() {}
// Cross Module References
	DMXPROTOCOL_API UEnum* Z_Construct_UEnum_DMXProtocol_EDMXCommunicationType();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXProtocolName();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntity();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntityController();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntityController_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntityUniverseManaged();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntityUniverseManaged_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	void UDMXEntityUniverseManaged::StaticRegisterNativesUDMXEntityUniverseManaged()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXEntityUniverseManaged);
	UClass* Z_Construct_UClass_UDMXEntityUniverseManaged_NoRegister()
	{
		return UDMXEntityUniverseManaged::StaticClass();
	}
	struct Z_Construct_UClass_UDMXEntityUniverseManaged_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceProtocol_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceProtocol;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXEntityUniverseManaged_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXEntity,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntityUniverseManaged_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// DEPRECATED 4.27, can't be flagged as such to retain upgrade path, some nodes could not be compiled anymore. All members are deprecated.\n" },
		{ "IncludePath", "Library/DMXEntityController.h" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityController.h" },
		{ "ToolTip", "DEPRECATED 4.27, can't be flagged as such to retain upgrade path, some nodes could not be compiled anymore. All members are deprecated." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntityUniverseManaged_Statics::NewProp_DeviceProtocol_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Controllers are no longer in use. Use Ports instead." },
		{ "ModuleRelativePath", "Public/Library/DMXEntityController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXEntityUniverseManaged_Statics::NewProp_DeviceProtocol = { "DeviceProtocol", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXEntityUniverseManaged, DeviceProtocol), Z_Construct_UScriptStruct_FDMXProtocolName, METADATA_PARAMS(Z_Construct_UClass_UDMXEntityUniverseManaged_Statics::NewProp_DeviceProtocol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityUniverseManaged_Statics::NewProp_DeviceProtocol_MetaData)) }; // 127357705
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXEntityUniverseManaged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntityUniverseManaged_Statics::NewProp_DeviceProtocol,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXEntityUniverseManaged_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXEntityUniverseManaged>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXEntityUniverseManaged_Statics::ClassParams = {
		&UDMXEntityUniverseManaged::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXEntityUniverseManaged_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityUniverseManaged_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXEntityUniverseManaged_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityUniverseManaged_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXEntityUniverseManaged()
	{
		if (!Z_Registration_Info_UClass_UDMXEntityUniverseManaged.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXEntityUniverseManaged.OuterSingleton, Z_Construct_UClass_UDMXEntityUniverseManaged_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXEntityUniverseManaged.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXEntityUniverseManaged>()
	{
		return UDMXEntityUniverseManaged::StaticClass();
	}
	UDMXEntityUniverseManaged::UDMXEntityUniverseManaged() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXEntityUniverseManaged);
	UDMXEntityUniverseManaged::~UDMXEntityUniverseManaged() {}
	void UDMXEntityController::StaticRegisterNativesUDMXEntityController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXEntityController);
	UClass* Z_Construct_UClass_UDMXEntityController_NoRegister()
	{
		return UDMXEntityController::StaticClass();
	}
	struct Z_Construct_UClass_UDMXEntityController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CommunicationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommunicationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CommunicationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniverseLocalStart_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UniverseLocalStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniverseLocalNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UniverseLocalNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniverseLocalEnd_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UniverseLocalEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RemoteOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniverseRemoteStart_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UniverseRemoteStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniverseRemoteEnd_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UniverseRemoteEnd;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AdditionalUnicastIPs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalUnicastIPs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalUnicastIPs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXEntityController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXEntityUniverseManaged,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntityController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// DEPRECATED 4.27, can't be flagged as such to retain upgrade path, some nodes could not be compiled anymore. All members are deprecated.\n" },
		{ "IncludePath", "Library/DMXEntityController.h" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityController.h" },
		{ "ToolTip", "DEPRECATED 4.27, can't be flagged as such to retain upgrade path, some nodes could not be compiled anymore. All members are deprecated." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDMXEntityController_Statics::NewProp_CommunicationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntityController_Statics::NewProp_CommunicationMode_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Controllers are no longer in use. Use Ports instead." },
		{ "ModuleRelativePath", "Public/Library/DMXEntityController.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDMXEntityController_Statics::NewProp_CommunicationMode = { "CommunicationMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXEntityController, CommunicationMode), Z_Construct_UEnum_DMXProtocol_EDMXCommunicationType, METADATA_PARAMS(Z_Construct_UClass_UDMXEntityController_Statics::NewProp_CommunicationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityController_Statics::NewProp_CommunicationMode_MetaData)) }; // 1471026857
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntityController_Statics::NewProp_UniverseLocalStart_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Controllers are no longer in use. Use Ports instead." },
		{ "ModuleRelativePath", "Public/Library/DMXEntityController.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXEntityController_Statics::NewProp_UniverseLocalStart = { "UniverseLocalStart", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXEntityController, UniverseLocalStart), METADATA_PARAMS(Z_Construct_UClass_UDMXEntityController_Statics::NewProp_UniverseLocalStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityController_Statics::NewProp_UniverseLocalStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntityController_Statics::NewProp_UniverseLocalNum_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Controllers are no longer in use. Use Ports instead." },
		{ "ModuleRelativePath", "Public/Library/DMXEntityController.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXEntityController_Statics::NewProp_UniverseLocalNum = { "UniverseLocalNum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXEntityController, UniverseLocalNum), METADATA_PARAMS(Z_Construct_UClass_UDMXEntityController_Statics::NewProp_UniverseLocalNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityController_Statics::NewProp_UniverseLocalNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntityController_Statics::NewProp_UniverseLocalEnd_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Controllers are no longer in use. Use Ports instead." },
		{ "ModuleRelativePath", "Public/Library/DMXEntityController.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXEntityController_Statics::NewProp_UniverseLocalEnd = { "UniverseLocalEnd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXEntityController, UniverseLocalEnd), METADATA_PARAMS(Z_Construct_UClass_UDMXEntityController_Statics::NewProp_UniverseLocalEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityController_Statics::NewProp_UniverseLocalEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntityController_Statics::NewProp_RemoteOffset_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Controllers are no longer in use. Use Ports instead." },
		{ "ModuleRelativePath", "Public/Library/DMXEntityController.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXEntityController_Statics::NewProp_RemoteOffset = { "RemoteOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXEntityController, RemoteOffset), METADATA_PARAMS(Z_Construct_UClass_UDMXEntityController_Statics::NewProp_RemoteOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityController_Statics::NewProp_RemoteOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntityController_Statics::NewProp_UniverseRemoteStart_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Controllers are no longer in use. Use Ports instead." },
		{ "ModuleRelativePath", "Public/Library/DMXEntityController.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXEntityController_Statics::NewProp_UniverseRemoteStart = { "UniverseRemoteStart", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXEntityController, UniverseRemoteStart), METADATA_PARAMS(Z_Construct_UClass_UDMXEntityController_Statics::NewProp_UniverseRemoteStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityController_Statics::NewProp_UniverseRemoteStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntityController_Statics::NewProp_UniverseRemoteEnd_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Controllers are no longer in use. Use Ports instead." },
		{ "ModuleRelativePath", "Public/Library/DMXEntityController.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXEntityController_Statics::NewProp_UniverseRemoteEnd = { "UniverseRemoteEnd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXEntityController, UniverseRemoteEnd), METADATA_PARAMS(Z_Construct_UClass_UDMXEntityController_Statics::NewProp_UniverseRemoteEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityController_Statics::NewProp_UniverseRemoteEnd_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDMXEntityController_Statics::NewProp_AdditionalUnicastIPs_Inner = { "AdditionalUnicastIPs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntityController_Statics::NewProp_AdditionalUnicastIPs_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Controllers are no longer in use. Use Ports instead." },
		{ "ModuleRelativePath", "Public/Library/DMXEntityController.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXEntityController_Statics::NewProp_AdditionalUnicastIPs = { "AdditionalUnicastIPs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXEntityController, AdditionalUnicastIPs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDMXEntityController_Statics::NewProp_AdditionalUnicastIPs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityController_Statics::NewProp_AdditionalUnicastIPs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXEntityController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntityController_Statics::NewProp_CommunicationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntityController_Statics::NewProp_CommunicationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntityController_Statics::NewProp_UniverseLocalStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntityController_Statics::NewProp_UniverseLocalNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntityController_Statics::NewProp_UniverseLocalEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntityController_Statics::NewProp_RemoteOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntityController_Statics::NewProp_UniverseRemoteStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntityController_Statics::NewProp_UniverseRemoteEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntityController_Statics::NewProp_AdditionalUnicastIPs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntityController_Statics::NewProp_AdditionalUnicastIPs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXEntityController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXEntityController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXEntityController_Statics::ClassParams = {
		&UDMXEntityController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXEntityController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityController_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXEntityController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXEntityController()
	{
		if (!Z_Registration_Info_UClass_UDMXEntityController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXEntityController.OuterSingleton, Z_Construct_UClass_UDMXEntityController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXEntityController.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXEntityController>()
	{
		return UDMXEntityController::StaticClass();
	}
	UDMXEntityController::UDMXEntityController() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXEntityController);
	UDMXEntityController::~UDMXEntityController() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXEntityUniverseManaged, UDMXEntityUniverseManaged::StaticClass, TEXT("UDMXEntityUniverseManaged"), &Z_Registration_Info_UClass_UDMXEntityUniverseManaged, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXEntityUniverseManaged), 2356014583U) },
		{ Z_Construct_UClass_UDMXEntityController, UDMXEntityController::StaticClass, TEXT("UDMXEntityController"), &Z_Registration_Info_UClass_UDMXEntityController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXEntityController), 1579813361U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityController_h_1503453806(TEXT("/Script/DMXRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
