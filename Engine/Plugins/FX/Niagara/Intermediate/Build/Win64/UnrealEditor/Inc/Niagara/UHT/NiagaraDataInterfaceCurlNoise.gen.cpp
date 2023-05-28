// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraDataInterfaceCurlNoise.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceCurlNoise() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceCurlNoise();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceCurlNoise_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceCurlNoise::StaticRegisterNativesUNiagaraDataInterfaceCurlNoise()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceCurlNoise);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceCurlNoise_NoRegister()
	{
		return UNiagaraDataInterfaceCurlNoise::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceCurlNoise_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Seed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceCurlNoise_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceCurlNoise_Statics::Class_MetaDataParams[] = {
		{ "Category", "Curl Noise LUT" },
		{ "Comment", "/** Data Interface allowing sampling of curl noise LUT. */" },
		{ "DisplayName", "Curl Noise" },
		{ "IncludePath", "NiagaraDataInterfaceCurlNoise.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCurlNoise.h" },
		{ "ToolTip", "Data Interface allowing sampling of curl noise LUT." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceCurlNoise_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "Curl Noise" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCurlNoise.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCurlNoise_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceCurlNoise, Seed), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceCurlNoise_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCurlNoise_Statics::NewProp_Seed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceCurlNoise_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCurlNoise_Statics::NewProp_Seed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceCurlNoise_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceCurlNoise>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceCurlNoise_Statics::ClassParams = {
		&UNiagaraDataInterfaceCurlNoise::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceCurlNoise_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCurlNoise_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceCurlNoise_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCurlNoise_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceCurlNoise()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceCurlNoise.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceCurlNoise.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceCurlNoise_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceCurlNoise.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceCurlNoise>()
	{
		return UNiagaraDataInterfaceCurlNoise::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceCurlNoise);
	UNiagaraDataInterfaceCurlNoise::~UNiagaraDataInterfaceCurlNoise() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCurlNoise_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCurlNoise_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceCurlNoise, UNiagaraDataInterfaceCurlNoise::StaticClass, TEXT("UNiagaraDataInterfaceCurlNoise"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceCurlNoise, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceCurlNoise), 799001243U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCurlNoise_h_111552469(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCurlNoise_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCurlNoise_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
