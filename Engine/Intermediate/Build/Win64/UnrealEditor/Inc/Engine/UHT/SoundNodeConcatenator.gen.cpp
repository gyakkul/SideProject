// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundNodeConcatenator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeConcatenator() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeConcatenator();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeConcatenator_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeConcatenator::StaticRegisterNativesUSoundNodeConcatenator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundNodeConcatenator);
	UClass* Z_Construct_UClass_USoundNodeConcatenator_NoRegister()
	{
		return USoundNodeConcatenator::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeConcatenator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputVolume_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputVolume_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeConcatenator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeConcatenator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n Plays child nodes sequentially\n*/" },
		{ "DisplayName", "Concatenator" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeConcatenator.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeConcatenator.h" },
		{ "ToolTip", "Plays child nodes sequentially" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeConcatenator_Statics::NewProp_InputVolume_Inner = { "InputVolume", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeConcatenator_Statics::NewProp_InputVolume_MetaData[] = {
		{ "Category", "Concatenator" },
		{ "Comment", "/** Volume multiplier for each input. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeConcatenator.h" },
		{ "ToolTip", "Volume multiplier for each input." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundNodeConcatenator_Statics::NewProp_InputVolume = { "InputVolume", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeConcatenator, InputVolume), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundNodeConcatenator_Statics::NewProp_InputVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeConcatenator_Statics::NewProp_InputVolume_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeConcatenator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeConcatenator_Statics::NewProp_InputVolume_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeConcatenator_Statics::NewProp_InputVolume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeConcatenator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeConcatenator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeConcatenator_Statics::ClassParams = {
		&USoundNodeConcatenator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeConcatenator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeConcatenator_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeConcatenator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeConcatenator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeConcatenator()
	{
		if (!Z_Registration_Info_UClass_USoundNodeConcatenator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundNodeConcatenator.OuterSingleton, Z_Construct_UClass_USoundNodeConcatenator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundNodeConcatenator.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundNodeConcatenator>()
	{
		return USoundNodeConcatenator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeConcatenator);
	USoundNodeConcatenator::~USoundNodeConcatenator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeConcatenator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeConcatenator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundNodeConcatenator, USoundNodeConcatenator::StaticClass, TEXT("USoundNodeConcatenator"), &Z_Registration_Info_UClass_USoundNodeConcatenator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundNodeConcatenator), 453797413U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeConcatenator_h_4234576446(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeConcatenator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeConcatenator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
