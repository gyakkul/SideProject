// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAudioMotorSimOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAudioMotorSimOutput() {}
// Cross Module References
	AUDIOMOTORSIM_API UClass* Z_Construct_UClass_UAudioMotorSimOutput();
	AUDIOMOTORSIM_API UClass* Z_Construct_UClass_UAudioMotorSimOutput_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AudioMotorSim();
// End Cross Module References
	void UAudioMotorSimOutput::StaticRegisterNativesUAudioMotorSimOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioMotorSimOutput);
	UClass* Z_Construct_UClass_UAudioMotorSimOutput_NoRegister()
	{
		return UAudioMotorSimOutput::StaticClass();
	}
	struct Z_Construct_UClass_UAudioMotorSimOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioMotorSimOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMotorSim,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioMotorSimOutput_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IAudioMotorSimOutput.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioMotorSimOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAudioMotorSimOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioMotorSimOutput_Statics::ClassParams = {
		&UAudioMotorSimOutput::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioMotorSimOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMotorSimOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioMotorSimOutput()
	{
		if (!Z_Registration_Info_UClass_UAudioMotorSimOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioMotorSimOutput.OuterSingleton, Z_Construct_UClass_UAudioMotorSimOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioMotorSimOutput.OuterSingleton;
	}
	template<> AUDIOMOTORSIM_API UClass* StaticClass<UAudioMotorSimOutput>()
	{
		return UAudioMotorSimOutput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioMotorSimOutput);
	UAudioMotorSimOutput::~UAudioMotorSimOutput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSimOutput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSimOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioMotorSimOutput, UAudioMotorSimOutput::StaticClass, TEXT("UAudioMotorSimOutput"), &Z_Registration_Info_UClass_UAudioMotorSimOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioMotorSimOutput), 798049585U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSimOutput_h_7271796(TEXT("/Script/AudioMotorSim"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSimOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSimOutput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
