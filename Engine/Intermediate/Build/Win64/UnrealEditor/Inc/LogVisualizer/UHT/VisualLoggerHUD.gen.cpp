// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Developer/LogVisualizer/Private/VisualLoggerHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisualLoggerHUD() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ADebugCameraHUD();
	LOGVISUALIZER_API UClass* Z_Construct_UClass_AVisualLoggerHUD();
	LOGVISUALIZER_API UClass* Z_Construct_UClass_AVisualLoggerHUD_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LogVisualizer();
// End Cross Module References
	void AVisualLoggerHUD::StaticRegisterNativesAVisualLoggerHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVisualLoggerHUD);
	UClass* Z_Construct_UClass_AVisualLoggerHUD_NoRegister()
	{
		return AVisualLoggerHUD::StaticClass();
	}
	struct Z_Construct_UClass_AVisualLoggerHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVisualLoggerHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADebugCameraHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_LogVisualizer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVisualLoggerHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "VisualLoggerHUD.h" },
		{ "ModuleRelativePath", "Private/VisualLoggerHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVisualLoggerHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVisualLoggerHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVisualLoggerHUD_Statics::ClassParams = {
		&AVisualLoggerHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x048002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AVisualLoggerHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVisualLoggerHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVisualLoggerHUD()
	{
		if (!Z_Registration_Info_UClass_AVisualLoggerHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVisualLoggerHUD.OuterSingleton, Z_Construct_UClass_AVisualLoggerHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVisualLoggerHUD.OuterSingleton;
	}
	template<> LOGVISUALIZER_API UClass* StaticClass<AVisualLoggerHUD>()
	{
		return AVisualLoggerHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVisualLoggerHUD);
	AVisualLoggerHUD::~AVisualLoggerHUD() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVisualLoggerHUD, AVisualLoggerHUD::StaticClass, TEXT("AVisualLoggerHUD"), &Z_Registration_Info_UClass_AVisualLoggerHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVisualLoggerHUD), 2789160174U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerHUD_h_887724103(TEXT("/Script/LogVisualizer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
