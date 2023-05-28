// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Net/UnitTestChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnitTestChannel() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UChannel();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UMinimalClient_NoRegister();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UUnitTestChannel();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UUnitTestChannel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NetcodeUnitTest();
// End Cross Module References
	void UUnitTestChannel::StaticRegisterNativesUUnitTestChannel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnitTestChannel);
	UClass* Z_Construct_UClass_UUnitTestChannel_NoRegister()
	{
		return UUnitTestChannel::StaticClass();
	}
	struct Z_Construct_UClass_UUnitTestChannel_Statics
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
	UObject* (*const Z_Construct_UClass_UUnitTestChannel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChannel,
		(UObject* (*)())Z_Construct_UPackage__Script_NetcodeUnitTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitTestChannel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A net channel for overriding the implementation of traditional net channels,\n * for e.g. blocking control channel messages, to enable minimal clients\n */" },
		{ "IncludePath", "Net/UnitTestChannel.h" },
		{ "ModuleRelativePath", "Classes/Net/UnitTestChannel.h" },
		{ "ToolTip", "A net channel for overriding the implementation of traditional net channels,\nfor e.g. blocking control channel messages, to enable minimal clients" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitTestChannel_Statics::NewProp_MinClient_MetaData[] = {
		{ "Comment", "/** The minimal client which may require received bunch notifications */" },
		{ "ModuleRelativePath", "Classes/Net/UnitTestChannel.h" },
		{ "ToolTip", "The minimal client which may require received bunch notifications" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUnitTestChannel_Statics::NewProp_MinClient = { "MinClient", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnitTestChannel, MinClient), Z_Construct_UClass_UMinimalClient_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUnitTestChannel_Statics::NewProp_MinClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnitTestChannel_Statics::NewProp_MinClient_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnitTestChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitTestChannel_Statics::NewProp_MinClient,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnitTestChannel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnitTestChannel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnitTestChannel_Statics::ClassParams = {
		&UUnitTestChannel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUnitTestChannel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUnitTestChannel_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUnitTestChannel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnitTestChannel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnitTestChannel()
	{
		if (!Z_Registration_Info_UClass_UUnitTestChannel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnitTestChannel.OuterSingleton, Z_Construct_UClass_UUnitTestChannel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUnitTestChannel.OuterSingleton;
	}
	template<> NETCODEUNITTEST_API UClass* StaticClass<UUnitTestChannel>()
	{
		return UUnitTestChannel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnitTestChannel);
	UUnitTestChannel::~UUnitTestChannel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestChannel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestChannel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUnitTestChannel, UUnitTestChannel::StaticClass, TEXT("UUnitTestChannel"), &Z_Registration_Info_UClass_UUnitTestChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnitTestChannel), 4176590522U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestChannel_h_3787873713(TEXT("/Script/NetcodeUnitTest"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestChannel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestChannel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
