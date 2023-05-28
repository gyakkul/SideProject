// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ISoundfieldEndpoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISoundfieldEndpoint() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEndpointSettingsBase();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEndpointSettingsBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AudioExtensions();
// End Cross Module References
	void USoundfieldEndpointSettingsBase::StaticRegisterNativesUSoundfieldEndpointSettingsBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundfieldEndpointSettingsBase);
	UClass* Z_Construct_UClass_USoundfieldEndpointSettingsBase_NoRegister()
	{
		return USoundfieldEndpointSettingsBase::StaticClass();
	}
	struct Z_Construct_UClass_USoundfieldEndpointSettingsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundfieldEndpointSettingsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldEndpointSettingsBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This opaque class should be used for specifying settings for how audio should be\n * send to an external endpoint.\n */" },
		{ "IncludePath", "ISoundfieldEndpoint.h" },
		{ "ModuleRelativePath", "Public/ISoundfieldEndpoint.h" },
		{ "ToolTip", "This opaque class should be used for specifying settings for how audio should be\nsend to an external endpoint." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundfieldEndpointSettingsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundfieldEndpointSettingsBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundfieldEndpointSettingsBase_Statics::ClassParams = {
		&USoundfieldEndpointSettingsBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USoundfieldEndpointSettingsBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEndpointSettingsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundfieldEndpointSettingsBase()
	{
		if (!Z_Registration_Info_UClass_USoundfieldEndpointSettingsBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundfieldEndpointSettingsBase.OuterSingleton, Z_Construct_UClass_USoundfieldEndpointSettingsBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundfieldEndpointSettingsBase.OuterSingleton;
	}
	template<> AUDIOEXTENSIONS_API UClass* StaticClass<USoundfieldEndpointSettingsBase>()
	{
		return USoundfieldEndpointSettingsBase::StaticClass();
	}
	USoundfieldEndpointSettingsBase::USoundfieldEndpointSettingsBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundfieldEndpointSettingsBase);
	USoundfieldEndpointSettingsBase::~USoundfieldEndpointSettingsBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldEndpoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldEndpoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundfieldEndpointSettingsBase, USoundfieldEndpointSettingsBase::StaticClass, TEXT("USoundfieldEndpointSettingsBase"), &Z_Registration_Info_UClass_USoundfieldEndpointSettingsBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundfieldEndpointSettingsBase), 2411951205U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldEndpoint_h_2556538270(TEXT("/Script/AudioExtensions"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldEndpoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldEndpoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
