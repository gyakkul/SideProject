// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Net/UnitTestActorChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnitTestActorChannel() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorChannel();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UMinimalClient_NoRegister();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UUnitTestActorChannel();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UUnitTestActorChannel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NetcodeUnitTest();
// End Cross Module References
	void UUnitTestActorChannel::StaticRegisterNativesUUnitTestActorChannel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnitTestActorChannel);
	UClass* Z_Construct_UClass_UUnitTestActorChannel_NoRegister()
	{
		return UUnitTestActorChannel::StaticClass();
	}
	struct Z_Construct_UClass_UUnitTestActorChannel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinClient_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MinClient;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnitTestActorChannel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorChannel,
		(UObject* (*)())Z_Construct_UPackage__Script_NetcodeUnitTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitTestActorChannel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An actor net channel override, for hooking ReceivedBunch, to aid in detecting/blocking of remote actors, of a specific class\n */" },
		{ "IncludePath", "Net/UnitTestActorChannel.h" },
		{ "ModuleRelativePath", "Classes/Net/UnitTestActorChannel.h" },
		{ "ToolTip", "An actor net channel override, for hooking ReceivedBunch, to aid in detecting/blocking of remote actors, of a specific class" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitTestActorChannel_Statics::NewProp_MinClient_MetaData[] = {
		{ "Comment", "/** Cached referenced to the minimal client that owns this actor channel */" },
		{ "ModuleRelativePath", "Classes/Net/UnitTestActorChannel.h" },
		{ "ToolTip", "Cached referenced to the minimal client that owns this actor channel" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUnitTestActorChannel_Statics::NewProp_MinClient = { "MinClient", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnitTestActorChannel, MinClient), Z_Construct_UClass_UMinimalClient_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUnitTestActorChannel_Statics::NewProp_MinClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnitTestActorChannel_Statics::NewProp_MinClient_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnitTestActorChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitTestActorChannel_Statics::NewProp_MinClient,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnitTestActorChannel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnitTestActorChannel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnitTestActorChannel_Statics::ClassParams = {
		&UUnitTestActorChannel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUnitTestActorChannel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUnitTestActorChannel_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUnitTestActorChannel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnitTestActorChannel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnitTestActorChannel()
	{
		if (!Z_Registration_Info_UClass_UUnitTestActorChannel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnitTestActorChannel.OuterSingleton, Z_Construct_UClass_UUnitTestActorChannel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUnitTestActorChannel.OuterSingleton;
	}
	template<> NETCODEUNITTEST_API UClass* StaticClass<UUnitTestActorChannel>()
	{
		return UUnitTestActorChannel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnitTestActorChannel);
	UUnitTestActorChannel::~UUnitTestActorChannel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestActorChannel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestActorChannel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUnitTestActorChannel, UUnitTestActorChannel::StaticClass, TEXT("UUnitTestActorChannel"), &Z_Registration_Info_UClass_UUnitTestActorChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnitTestActorChannel), 2738206871U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestActorChannel_h_2880979747(TEXT("/Script/NetcodeUnitTest"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestActorChannel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestActorChannel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
