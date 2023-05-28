// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/ControlChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlChannel() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UChannel();
	ENGINE_API UClass* Z_Construct_UClass_UControlChannel();
	ENGINE_API UClass* Z_Construct_UClass_UControlChannel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UControlChannel::StaticRegisterNativesUControlChannel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlChannel);
	UClass* Z_Construct_UClass_UControlChannel_NoRegister()
	{
		return UControlChannel::StaticClass();
	}
	struct Z_Construct_UClass_UControlChannel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlChannel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChannel,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlChannel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A channel for exchanging connection control messages.\n */" },
		{ "IncludePath", "Engine/ControlChannel.h" },
		{ "ModuleRelativePath", "Classes/Engine/ControlChannel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A channel for exchanging connection control messages." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlChannel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlChannel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlChannel_Statics::ClassParams = {
		&UControlChannel::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UControlChannel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlChannel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlChannel()
	{
		if (!Z_Registration_Info_UClass_UControlChannel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlChannel.OuterSingleton, Z_Construct_UClass_UControlChannel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlChannel.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UControlChannel>()
	{
		return UControlChannel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlChannel);
	UControlChannel::~UControlChannel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlChannel, UControlChannel::StaticClass, TEXT("UControlChannel"), &Z_Registration_Info_UClass_UControlChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlChannel), 3991585425U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_2243990331(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
