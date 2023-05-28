// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/KillZVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillZVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AKillZVolume();
	ENGINE_API UClass* Z_Construct_UClass_AKillZVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APhysicsVolume();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void AKillZVolume::StaticRegisterNativesAKillZVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKillZVolume);
	UClass* Z_Construct_UClass_AKillZVolume_NoRegister()
	{
		return AKillZVolume::StaticClass();
	}
	struct Z_Construct_UClass_AKillZVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKillZVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APhysicsVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKillZVolume_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* KillZVolume is a volume used to determine when actors should be killed. Killing logic is overridden in FellOutOfWorld\n* \n* @see FellOutOfWorld\n*/" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "GameFramework/KillZVolume.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/KillZVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "KillZVolume is a volume used to determine when actors should be killed. Killing logic is overridden in FellOutOfWorld\n\n@see FellOutOfWorld" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKillZVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKillZVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AKillZVolume_Statics::ClassParams = {
		&AKillZVolume::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AKillZVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKillZVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKillZVolume()
	{
		if (!Z_Registration_Info_UClass_AKillZVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKillZVolume.OuterSingleton, Z_Construct_UClass_AKillZVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AKillZVolume.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<AKillZVolume>()
	{
		return AKillZVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKillZVolume);
	AKillZVolume::~AKillZVolume() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_KillZVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_KillZVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AKillZVolume, AKillZVolume::StaticClass, TEXT("AKillZVolume"), &Z_Registration_Info_UClass_AKillZVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKillZVolume), 2760058402U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_KillZVolume_h_2760008155(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_KillZVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_KillZVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
