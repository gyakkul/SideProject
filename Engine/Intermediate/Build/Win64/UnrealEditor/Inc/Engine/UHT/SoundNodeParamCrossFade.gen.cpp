// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundNodeParamCrossFade.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeParamCrossFade() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeDistanceCrossFade();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeParamCrossFade();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeParamCrossFade_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeParamCrossFade::StaticRegisterNativesUSoundNodeParamCrossFade()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundNodeParamCrossFade);
	UClass* Z_Construct_UClass_USoundNodeParamCrossFade_NoRegister()
	{
		return USoundNodeParamCrossFade::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeParamCrossFade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeParamCrossFade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNodeDistanceCrossFade,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeParamCrossFade_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Crossfades between different sounds based on a parameter\n */" },
		{ "DisplayName", "Crossfade by Param" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeParamCrossFade.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeParamCrossFade.h" },
		{ "ToolTip", "Crossfades between different sounds based on a parameter" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeParamCrossFade_Statics::NewProp_ParamName_MetaData[] = {
		{ "Category", "CrossFade" },
		{ "Comment", "/* Parameter controlling cross fades. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeParamCrossFade.h" },
		{ "ToolTip", "Parameter controlling cross fades." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USoundNodeParamCrossFade_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeParamCrossFade, ParamName), METADATA_PARAMS(Z_Construct_UClass_USoundNodeParamCrossFade_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeParamCrossFade_Statics::NewProp_ParamName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeParamCrossFade_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeParamCrossFade_Statics::NewProp_ParamName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeParamCrossFade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeParamCrossFade>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeParamCrossFade_Statics::ClassParams = {
		&USoundNodeParamCrossFade::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeParamCrossFade_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeParamCrossFade_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeParamCrossFade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeParamCrossFade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeParamCrossFade()
	{
		if (!Z_Registration_Info_UClass_USoundNodeParamCrossFade.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundNodeParamCrossFade.OuterSingleton, Z_Construct_UClass_USoundNodeParamCrossFade_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundNodeParamCrossFade.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundNodeParamCrossFade>()
	{
		return USoundNodeParamCrossFade::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeParamCrossFade);
	USoundNodeParamCrossFade::~USoundNodeParamCrossFade() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeParamCrossFade_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeParamCrossFade_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundNodeParamCrossFade, USoundNodeParamCrossFade::StaticClass, TEXT("USoundNodeParamCrossFade"), &Z_Registration_Info_UClass_USoundNodeParamCrossFade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundNodeParamCrossFade), 3217835523U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeParamCrossFade_h_4246702088(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeParamCrossFade_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeParamCrossFade_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
