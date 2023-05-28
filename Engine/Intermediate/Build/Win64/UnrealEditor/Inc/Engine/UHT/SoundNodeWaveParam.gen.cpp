// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundNodeWaveParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeWaveParam() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeWaveParam();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeWaveParam_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeWaveParam::StaticRegisterNativesUSoundNodeWaveParam()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundNodeWaveParam);
	UClass* Z_Construct_UClass_USoundNodeWaveParam_NoRegister()
	{
		return USoundNodeWaveParam::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeWaveParam_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WaveParameterName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeWaveParam_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeWaveParam_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Sound node that takes a runtime parameter for the wave to play\n */" },
		{ "DisplayName", "Wave Param" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeWaveParam.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeWaveParam.h" },
		{ "ToolTip", "Sound node that takes a runtime parameter for the wave to play" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeWaveParam_Statics::NewProp_WaveParameterName_MetaData[] = {
		{ "Category", "WaveParam" },
		{ "Comment", "/** The name of the wave parameter to use to look up the SoundWave we should play */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeWaveParam.h" },
		{ "ToolTip", "The name of the wave parameter to use to look up the SoundWave we should play" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USoundNodeWaveParam_Statics::NewProp_WaveParameterName = { "WaveParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeWaveParam, WaveParameterName), METADATA_PARAMS(Z_Construct_UClass_USoundNodeWaveParam_Statics::NewProp_WaveParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeWaveParam_Statics::NewProp_WaveParameterName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeWaveParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeWaveParam_Statics::NewProp_WaveParameterName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeWaveParam_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeWaveParam>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeWaveParam_Statics::ClassParams = {
		&USoundNodeWaveParam::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeWaveParam_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeWaveParam_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeWaveParam_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeWaveParam_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeWaveParam()
	{
		if (!Z_Registration_Info_UClass_USoundNodeWaveParam.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundNodeWaveParam.OuterSingleton, Z_Construct_UClass_USoundNodeWaveParam_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundNodeWaveParam.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundNodeWaveParam>()
	{
		return USoundNodeWaveParam::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeWaveParam);
	USoundNodeWaveParam::~USoundNodeWaveParam() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundNodeWaveParam, USoundNodeWaveParam::StaticClass, TEXT("USoundNodeWaveParam"), &Z_Registration_Info_UClass_USoundNodeWaveParam, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundNodeWaveParam), 1627927378U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h_4073330216(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWaveParam_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
