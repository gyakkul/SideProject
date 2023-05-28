// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteControlLogicConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlLogicConfig() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URemoteControlLogicConfig();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URemoteControlLogicConfig_NoRegister();
	STRUCTUTILS_API UEnum* Z_Construct_UEnum_StructUtils_EPropertyBagPropertyType();
	UPackage* Z_Construct_UPackage__Script_RemoteControlLogic();
// End Cross Module References
	void URemoteControlLogicConfig::StaticRegisterNativesURemoteControlLogicConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoteControlLogicConfig);
	UClass* Z_Construct_UClass_URemoteControlLogicConfig_NoRegister()
	{
		return URemoteControlLogicConfig::StaticClass();
	}
	struct Z_Construct_UClass_URemoteControlLogicConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SupportedControllerTypes_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SupportedControllerTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportedControllerTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SupportedControllerTypes;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SupportedControllerStructTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportedControllerStructTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SupportedControllerStructTypes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteControlLogicConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlLogic,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlLogicConfig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Config class for Remote Control Logic related settings.\n* Supports configuration of a valid list of Controller types.\n*/" },
		{ "IncludePath", "RemoteControlLogicConfig.h" },
		{ "ModuleRelativePath", "Public/RemoteControlLogicConfig.h" },
		{ "ToolTip", "Config class for Remote Control Logic related settings.\nSupports configuration of a valid list of Controller types." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URemoteControlLogicConfig_Statics::NewProp_SupportedControllerTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URemoteControlLogicConfig_Statics::NewProp_SupportedControllerTypes_Inner = { "SupportedControllerTypes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_StructUtils_EPropertyBagPropertyType, METADATA_PARAMS(nullptr, 0) }; // 1540223021
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlLogicConfig_Statics::NewProp_SupportedControllerTypes_MetaData[] = {
		{ "Comment", "/** PropertyBag types that are supported for use as Controllers */" },
		{ "ModuleRelativePath", "Public/RemoteControlLogicConfig.h" },
		{ "ToolTip", "PropertyBag types that are supported for use as Controllers" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URemoteControlLogicConfig_Statics::NewProp_SupportedControllerTypes = { "SupportedControllerTypes", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlLogicConfig, SupportedControllerTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URemoteControlLogicConfig_Statics::NewProp_SupportedControllerTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlLogicConfig_Statics::NewProp_SupportedControllerTypes_MetaData)) }; // 1540223021
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URemoteControlLogicConfig_Statics::NewProp_SupportedControllerStructTypes_Inner = { "SupportedControllerStructTypes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlLogicConfig_Statics::NewProp_SupportedControllerStructTypes_MetaData[] = {
		{ "Comment", "/** Certain types such as FVector / FRotator / FColor are specializations of UStructProperty\n\x09* This config represents the list of such types that may be used as Controllers*/" },
		{ "ModuleRelativePath", "Public/RemoteControlLogicConfig.h" },
		{ "ToolTip", "Certain types such as FVector / FRotator / FColor are specializations of UStructProperty\nThis config represents the list of such types that may be used as Controllers" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URemoteControlLogicConfig_Statics::NewProp_SupportedControllerStructTypes = { "SupportedControllerStructTypes", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlLogicConfig, SupportedControllerStructTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URemoteControlLogicConfig_Statics::NewProp_SupportedControllerStructTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlLogicConfig_Statics::NewProp_SupportedControllerStructTypes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemoteControlLogicConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlLogicConfig_Statics::NewProp_SupportedControllerTypes_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlLogicConfig_Statics::NewProp_SupportedControllerTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlLogicConfig_Statics::NewProp_SupportedControllerTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlLogicConfig_Statics::NewProp_SupportedControllerStructTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlLogicConfig_Statics::NewProp_SupportedControllerStructTypes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteControlLogicConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoteControlLogicConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoteControlLogicConfig_Statics::ClassParams = {
		&URemoteControlLogicConfig::StaticClass,
		"RemoteControl",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URemoteControlLogicConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlLogicConfig_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URemoteControlLogicConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlLogicConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteControlLogicConfig()
	{
		if (!Z_Registration_Info_UClass_URemoteControlLogicConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoteControlLogicConfig.OuterSingleton, Z_Construct_UClass_URemoteControlLogicConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemoteControlLogicConfig.OuterSingleton;
	}
	template<> REMOTECONTROLLOGIC_API UClass* StaticClass<URemoteControlLogicConfig>()
	{
		return URemoteControlLogicConfig::StaticClass();
	}
	URemoteControlLogicConfig::URemoteControlLogicConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteControlLogicConfig);
	URemoteControlLogicConfig::~URemoteControlLogicConfig() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_RemoteControlLogicConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_RemoteControlLogicConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URemoteControlLogicConfig, URemoteControlLogicConfig::StaticClass, TEXT("URemoteControlLogicConfig"), &Z_Registration_Info_UClass_URemoteControlLogicConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoteControlLogicConfig), 92976689U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_RemoteControlLogicConfig_h_352195872(TEXT("/Script/RemoteControlLogic"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_RemoteControlLogicConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_RemoteControlLogicConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
