// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TriggerVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ATriggerVolume::StaticRegisterNativesATriggerVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATriggerVolume);
	UClass* Z_Construct_UClass_ATriggerVolume_NoRegister()
	{
		return ATriggerVolume::StaticClass();
	}
	struct Z_Construct_UClass_ATriggerVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATriggerVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Engine/TriggerVolume.h" },
		{ "ModuleRelativePath", "Classes/Engine/TriggerVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATriggerVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATriggerVolume_Statics::ClassParams = {
		&ATriggerVolume::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATriggerVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATriggerVolume()
	{
		if (!Z_Registration_Info_UClass_ATriggerVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATriggerVolume.OuterSingleton, Z_Construct_UClass_ATriggerVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATriggerVolume.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ATriggerVolume>()
	{
		return ATriggerVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerVolume);
	ATriggerVolume::~ATriggerVolume() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATriggerVolume, ATriggerVolume::StaticClass, TEXT("ATriggerVolume"), &Z_Registration_Info_UClass_ATriggerVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATriggerVolume), 808742631U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h_3660409654(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
