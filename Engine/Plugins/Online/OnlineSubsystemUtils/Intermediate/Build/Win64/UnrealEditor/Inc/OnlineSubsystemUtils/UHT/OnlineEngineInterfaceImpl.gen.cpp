// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/OnlineEngineInterfaceImpl.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineEngineInterfaceImpl() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UOnlineEngineInterface();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineEngineInterfaceImpl();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineEngineInterfaceImpl_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	void UOnlineEngineInterfaceImpl::StaticRegisterNativesUOnlineEngineInterfaceImpl()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineEngineInterfaceImpl);
	UClass* Z_Construct_UClass_UOnlineEngineInterfaceImpl_NoRegister()
	{
		return UOnlineEngineInterfaceImpl::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MappedUniqueNetIdTypes_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_MappedUniqueNetIdTypes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappedUniqueNetIdTypes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MappedUniqueNetIdTypes;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CompatibleUniqueNetIdTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompatibleUniqueNetIdTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CompatibleUniqueNetIdTypes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoiceSubsystemNameOverride_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_VoiceSubsystemNameOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineEngineInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OnlineEngineInterfaceImpl.h" },
		{ "ModuleRelativePath", "Private/OnlineEngineInterfaceImpl.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_MappedUniqueNetIdTypes_ValueProp = { "MappedUniqueNetIdTypes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_MappedUniqueNetIdTypes_Key_KeyProp = { "MappedUniqueNetIdTypes_Key", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_MappedUniqueNetIdTypes_MetaData[] = {
		{ "Comment", "/** Mapping of unique net ids that should not be treated as foreign ids to the local subsystem. */" },
		{ "ModuleRelativePath", "Private/OnlineEngineInterfaceImpl.h" },
		{ "ToolTip", "Mapping of unique net ids that should not be treated as foreign ids to the local subsystem." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_MappedUniqueNetIdTypes = { "MappedUniqueNetIdTypes", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineEngineInterfaceImpl, MappedUniqueNetIdTypes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_MappedUniqueNetIdTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_MappedUniqueNetIdTypes_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_CompatibleUniqueNetIdTypes_Inner = { "CompatibleUniqueNetIdTypes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_CompatibleUniqueNetIdTypes_MetaData[] = {
		{ "Comment", "/** Array of unique net ids that are deemed valid when tested against gameplay login checks. */" },
		{ "ModuleRelativePath", "Private/OnlineEngineInterfaceImpl.h" },
		{ "ToolTip", "Array of unique net ids that are deemed valid when tested against gameplay login checks." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_CompatibleUniqueNetIdTypes = { "CompatibleUniqueNetIdTypes", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineEngineInterfaceImpl, CompatibleUniqueNetIdTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_CompatibleUniqueNetIdTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_CompatibleUniqueNetIdTypes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_VoiceSubsystemNameOverride_MetaData[] = {
		{ "Comment", "/** Allow the subsystem used for voice functions to be overridden, in case it needs to be different than the default subsystem. May be useful on console platforms. */" },
		{ "ModuleRelativePath", "Private/OnlineEngineInterfaceImpl.h" },
		{ "ToolTip", "Allow the subsystem used for voice functions to be overridden, in case it needs to be different than the default subsystem. May be useful on console platforms." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_VoiceSubsystemNameOverride = { "VoiceSubsystemNameOverride", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineEngineInterfaceImpl, VoiceSubsystemNameOverride), METADATA_PARAMS(Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_VoiceSubsystemNameOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_VoiceSubsystemNameOverride_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_MappedUniqueNetIdTypes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_MappedUniqueNetIdTypes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_MappedUniqueNetIdTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_CompatibleUniqueNetIdTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_CompatibleUniqueNetIdTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_VoiceSubsystemNameOverride,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineEngineInterfaceImpl>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::ClassParams = {
		&UOnlineEngineInterfaceImpl::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineEngineInterfaceImpl()
	{
		if (!Z_Registration_Info_UClass_UOnlineEngineInterfaceImpl.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineEngineInterfaceImpl.OuterSingleton, Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineEngineInterfaceImpl.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UOnlineEngineInterfaceImpl>()
	{
		return UOnlineEngineInterfaceImpl::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineEngineInterfaceImpl);
	UOnlineEngineInterfaceImpl::~UOnlineEngineInterfaceImpl() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineEngineInterfaceImpl_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineEngineInterfaceImpl_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineEngineInterfaceImpl, UOnlineEngineInterfaceImpl::StaticClass, TEXT("UOnlineEngineInterfaceImpl"), &Z_Registration_Info_UClass_UOnlineEngineInterfaceImpl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineEngineInterfaceImpl), 2292743337U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineEngineInterfaceImpl_h_3545737516(TEXT("/Script/OnlineSubsystemUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineEngineInterfaceImpl_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineEngineInterfaceImpl_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
