// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Private/Net/Experimental/Iris/DataStreamChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataStreamChannel() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UChannel();
	ENGINE_API UClass* Z_Construct_UClass_UDataStreamChannel();
	ENGINE_API UClass* Z_Construct_UClass_UDataStreamChannel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDataStreamChannel::StaticRegisterNativesUDataStreamChannel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataStreamChannel);
	UClass* Z_Construct_UClass_UDataStreamChannel_NoRegister()
	{
		return UDataStreamChannel::StaticClass();
	}
	struct Z_Construct_UClass_UDataStreamChannel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataStreamChannel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChannel,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataStreamChannel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Net/Experimental/Iris/DataStreamChannel.h" },
		{ "ModuleRelativePath", "Private/Net/Experimental/Iris/DataStreamChannel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataStreamChannel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataStreamChannel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataStreamChannel_Statics::ClassParams = {
		&UDataStreamChannel::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDataStreamChannel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataStreamChannel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataStreamChannel()
	{
		if (!Z_Registration_Info_UClass_UDataStreamChannel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataStreamChannel.OuterSingleton, Z_Construct_UClass_UDataStreamChannel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataStreamChannel.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDataStreamChannel>()
	{
		return UDataStreamChannel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataStreamChannel);
	UDataStreamChannel::~UDataStreamChannel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Net_Experimental_Iris_DataStreamChannel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Net_Experimental_Iris_DataStreamChannel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataStreamChannel, UDataStreamChannel::StaticClass, TEXT("UDataStreamChannel"), &Z_Registration_Info_UClass_UDataStreamChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataStreamChannel), 817718705U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Net_Experimental_Iris_DataStreamChannel_h_1632501308(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Net_Experimental_Iris_DataStreamChannel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Net_Experimental_Iris_DataStreamChannel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
