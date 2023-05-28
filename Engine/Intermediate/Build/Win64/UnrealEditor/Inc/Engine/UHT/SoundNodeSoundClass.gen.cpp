// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundNodeSoundClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeSoundClass() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeSoundClass();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeSoundClass_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeSoundClass::StaticRegisterNativesUSoundNodeSoundClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundNodeSoundClass);
	UClass* Z_Construct_UClass_USoundNodeSoundClass_NoRegister()
	{
		return USoundNodeSoundClass::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeSoundClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundClassOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundClassOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeSoundClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeSoundClass_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Remaps the SoundClass of SoundWaves underneath this\n */" },
		{ "DisplayName", "SoundClass" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeSoundClass.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeSoundClass.h" },
		{ "ToolTip", "Remaps the SoundClass of SoundWaves underneath this" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeSoundClass_Statics::NewProp_SoundClassOverride_MetaData[] = {
		{ "Category", "SoundClass" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeSoundClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundNodeSoundClass_Statics::NewProp_SoundClassOverride = { "SoundClassOverride", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeSoundClass, SoundClassOverride), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundNodeSoundClass_Statics::NewProp_SoundClassOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeSoundClass_Statics::NewProp_SoundClassOverride_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeSoundClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeSoundClass_Statics::NewProp_SoundClassOverride,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeSoundClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeSoundClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeSoundClass_Statics::ClassParams = {
		&USoundNodeSoundClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeSoundClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeSoundClass_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeSoundClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeSoundClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeSoundClass()
	{
		if (!Z_Registration_Info_UClass_USoundNodeSoundClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundNodeSoundClass.OuterSingleton, Z_Construct_UClass_USoundNodeSoundClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundNodeSoundClass.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundNodeSoundClass>()
	{
		return USoundNodeSoundClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeSoundClass);
	USoundNodeSoundClass::~USoundNodeSoundClass() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeSoundClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeSoundClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundNodeSoundClass, USoundNodeSoundClass::StaticClass, TEXT("USoundNodeSoundClass"), &Z_Registration_Info_UClass_USoundNodeSoundClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundNodeSoundClass), 1165453304U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeSoundClass_h_2819508523(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeSoundClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeSoundClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
