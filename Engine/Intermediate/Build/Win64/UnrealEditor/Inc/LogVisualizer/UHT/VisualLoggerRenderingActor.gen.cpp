// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Developer/LogVisualizer/Private/VisualLoggerRenderingActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisualLoggerRenderingActor() {}
// Cross Module References
	LOGVISUALIZER_API UClass* Z_Construct_UClass_AVisualLoggerRenderingActor();
	LOGVISUALIZER_API UClass* Z_Construct_UClass_AVisualLoggerRenderingActor_NoRegister();
	LOGVISUALIZER_API UClass* Z_Construct_UClass_AVisualLoggerRenderingActorBase();
	UPackage* Z_Construct_UPackage__Script_LogVisualizer();
// End Cross Module References
	void AVisualLoggerRenderingActor::StaticRegisterNativesAVisualLoggerRenderingActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVisualLoggerRenderingActor);
	UClass* Z_Construct_UClass_AVisualLoggerRenderingActor_NoRegister()
	{
		return AVisualLoggerRenderingActor::StaticClass();
	}
	struct Z_Construct_UClass_AVisualLoggerRenderingActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVisualLoggerRenderingActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVisualLoggerRenderingActorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LogVisualizer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVisualLoggerRenderingActor_Statics::Class_MetaDataParams[] = {
		{ "AdvancedClassDisplay", "true" },
		{ "IncludePath", "VisualLoggerRenderingActor.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/VisualLoggerRenderingActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVisualLoggerRenderingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVisualLoggerRenderingActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVisualLoggerRenderingActor_Statics::ClassParams = {
		&AVisualLoggerRenderingActor::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AVisualLoggerRenderingActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVisualLoggerRenderingActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVisualLoggerRenderingActor()
	{
		if (!Z_Registration_Info_UClass_AVisualLoggerRenderingActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVisualLoggerRenderingActor.OuterSingleton, Z_Construct_UClass_AVisualLoggerRenderingActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVisualLoggerRenderingActor.OuterSingleton;
	}
	template<> LOGVISUALIZER_API UClass* StaticClass<AVisualLoggerRenderingActor>()
	{
		return AVisualLoggerRenderingActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVisualLoggerRenderingActor);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerRenderingActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerRenderingActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVisualLoggerRenderingActor, AVisualLoggerRenderingActor::StaticClass, TEXT("AVisualLoggerRenderingActor"), &Z_Registration_Info_UClass_AVisualLoggerRenderingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVisualLoggerRenderingActor), 490283384U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerRenderingActor_h_335224153(TEXT("/Script/LogVisualizer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerRenderingActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerRenderingActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
