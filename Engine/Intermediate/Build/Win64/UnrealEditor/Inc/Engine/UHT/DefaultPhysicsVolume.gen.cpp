// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultPhysicsVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ADefaultPhysicsVolume();
	ENGINE_API UClass* Z_Construct_UClass_ADefaultPhysicsVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APhysicsVolume();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ADefaultPhysicsVolume::StaticRegisterNativesADefaultPhysicsVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADefaultPhysicsVolume);
	UClass* Z_Construct_UClass_ADefaultPhysicsVolume_NoRegister()
	{
		return ADefaultPhysicsVolume::StaticClass();
	}
	struct Z_Construct_UClass_ADefaultPhysicsVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefaultPhysicsVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APhysicsVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultPhysicsVolume_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* DefaultPhysicsVolume determines the physical effects an actor will experience if they are not inside any user specified PhysicsVolume\n*\n* @see APhysicsVolume\n*/" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "GameFramework/DefaultPhysicsVolume.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/DefaultPhysicsVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "DefaultPhysicsVolume determines the physical effects an actor will experience if they are not inside any user specified PhysicsVolume\n\n@see APhysicsVolume" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefaultPhysicsVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultPhysicsVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADefaultPhysicsVolume_Statics::ClassParams = {
		&ADefaultPhysicsVolume::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADefaultPhysicsVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultPhysicsVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADefaultPhysicsVolume()
	{
		if (!Z_Registration_Info_UClass_ADefaultPhysicsVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADefaultPhysicsVolume.OuterSingleton, Z_Construct_UClass_ADefaultPhysicsVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADefaultPhysicsVolume.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ADefaultPhysicsVolume>()
	{
		return ADefaultPhysicsVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultPhysicsVolume);
	ADefaultPhysicsVolume::~ADefaultPhysicsVolume() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADefaultPhysicsVolume, ADefaultPhysicsVolume::StaticClass, TEXT("ADefaultPhysicsVolume"), &Z_Registration_Info_UClass_ADefaultPhysicsVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADefaultPhysicsVolume), 3005716964U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h_121633401(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
