// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAudioModulation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAudioModulation() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundModulatorBase();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundModulatorBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AudioExtensions();
// End Cross Module References
	void USoundModulatorBase::StaticRegisterNativesUSoundModulatorBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundModulatorBase);
	UClass* Z_Construct_UClass_USoundModulatorBase_NoRegister()
	{
		return USoundModulatorBase::StaticClass();
	}
	struct Z_Construct_UClass_USoundModulatorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundModulatorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModulatorBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for all modulators\n */" },
		{ "IncludePath", "IAudioModulation.h" },
		{ "ModuleRelativePath", "Public/IAudioModulation.h" },
		{ "ToolTip", "Base class for all modulators" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundModulatorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundModulatorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundModulatorBase_Statics::ClassParams = {
		&USoundModulatorBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundModulatorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulatorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundModulatorBase()
	{
		if (!Z_Registration_Info_UClass_USoundModulatorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundModulatorBase.OuterSingleton, Z_Construct_UClass_USoundModulatorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundModulatorBase.OuterSingleton;
	}
	template<> AUDIOEXTENSIONS_API UClass* StaticClass<USoundModulatorBase>()
	{
		return USoundModulatorBase::StaticClass();
	}
	USoundModulatorBase::USoundModulatorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundModulatorBase);
	USoundModulatorBase::~USoundModulatorBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundModulatorBase, USoundModulatorBase::StaticClass, TEXT("USoundModulatorBase"), &Z_Registration_Info_UClass_USoundModulatorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundModulatorBase), 2046298557U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_1318238301(TEXT("/Script/AudioExtensions"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
