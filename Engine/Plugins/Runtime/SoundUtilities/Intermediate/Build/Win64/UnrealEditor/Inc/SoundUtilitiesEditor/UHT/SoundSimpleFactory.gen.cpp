// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SoundSimpleFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundSimpleFactory() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	SOUNDUTILITIESEDITOR_API UClass* Z_Construct_UClass_USoundSimpleFactory();
	SOUNDUTILITIESEDITOR_API UClass* Z_Construct_UClass_USoundSimpleFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_SoundUtilitiesEditor();
// End Cross Module References
	void USoundSimpleFactory::StaticRegisterNativesUSoundSimpleFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundSimpleFactory);
	UClass* Z_Construct_UClass_USoundSimpleFactory_NoRegister()
	{
		return USoundSimpleFactory::StaticClass();
	}
	struct Z_Construct_UClass_USoundSimpleFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundWaves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundWaves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SoundWaves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundSimpleFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SoundUtilitiesEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSimpleFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "SoundSimpleFactory.h" },
		{ "ModuleRelativePath", "Private/SoundSimpleFactory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundSimpleFactory_Statics::NewProp_SoundWaves_Inner = { "SoundWaves", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSimpleFactory_Statics::NewProp_SoundWaves_MetaData[] = {
		{ "Comment", "/** Sound waves to create the simple sound with */" },
		{ "ModuleRelativePath", "Private/SoundSimpleFactory.h" },
		{ "ToolTip", "Sound waves to create the simple sound with" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundSimpleFactory_Statics::NewProp_SoundWaves = { "SoundWaves", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundSimpleFactory, SoundWaves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundSimpleFactory_Statics::NewProp_SoundWaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSimpleFactory_Statics::NewProp_SoundWaves_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundSimpleFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSimpleFactory_Statics::NewProp_SoundWaves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSimpleFactory_Statics::NewProp_SoundWaves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundSimpleFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundSimpleFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundSimpleFactory_Statics::ClassParams = {
		&USoundSimpleFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundSimpleFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundSimpleFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundSimpleFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSimpleFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundSimpleFactory()
	{
		if (!Z_Registration_Info_UClass_USoundSimpleFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundSimpleFactory.OuterSingleton, Z_Construct_UClass_USoundSimpleFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundSimpleFactory.OuterSingleton;
	}
	template<> SOUNDUTILITIESEDITOR_API UClass* StaticClass<USoundSimpleFactory>()
	{
		return USoundSimpleFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundSimpleFactory);
	USoundSimpleFactory::~USoundSimpleFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilitiesEditor_Private_SoundSimpleFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilitiesEditor_Private_SoundSimpleFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundSimpleFactory, USoundSimpleFactory::StaticClass, TEXT("USoundSimpleFactory"), &Z_Registration_Info_UClass_USoundSimpleFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundSimpleFactory), 1912763703U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilitiesEditor_Private_SoundSimpleFactory_h_4279449520(TEXT("/Script/SoundUtilitiesEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilitiesEditor_Private_SoundSimpleFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilitiesEditor_Private_SoundSimpleFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
