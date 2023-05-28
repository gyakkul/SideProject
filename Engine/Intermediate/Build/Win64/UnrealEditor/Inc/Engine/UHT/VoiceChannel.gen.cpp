// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/VoiceChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoiceChannel() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UChannel();
	ENGINE_API UClass* Z_Construct_UClass_UVoiceChannel();
	ENGINE_API UClass* Z_Construct_UClass_UVoiceChannel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UVoiceChannel::StaticRegisterNativesUVoiceChannel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoiceChannel);
	UClass* Z_Construct_UClass_UVoiceChannel_NoRegister()
	{
		return UVoiceChannel::StaticClass();
	}
	struct Z_Construct_UClass_UVoiceChannel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoiceChannel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChannel,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceChannel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/VoiceChannel.h" },
		{ "ModuleRelativePath", "Classes/Engine/VoiceChannel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoiceChannel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoiceChannel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoiceChannel_Statics::ClassParams = {
		&UVoiceChannel::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoiceChannel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceChannel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoiceChannel()
	{
		if (!Z_Registration_Info_UClass_UVoiceChannel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoiceChannel.OuterSingleton, Z_Construct_UClass_UVoiceChannel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoiceChannel.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UVoiceChannel>()
	{
		return UVoiceChannel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoiceChannel);
	UVoiceChannel::~UVoiceChannel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoiceChannel, UVoiceChannel::StaticClass, TEXT("UVoiceChannel"), &Z_Registration_Info_UClass_UVoiceChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoiceChannel), 1674024664U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_2685831856(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
