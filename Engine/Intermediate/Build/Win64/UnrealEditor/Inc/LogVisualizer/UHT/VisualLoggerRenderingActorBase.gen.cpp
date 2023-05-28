// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Developer/LogVisualizer/Public/VisualLoggerRenderingActorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisualLoggerRenderingActorBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	LOGVISUALIZER_API UClass* Z_Construct_UClass_AVisualLoggerRenderingActorBase();
	LOGVISUALIZER_API UClass* Z_Construct_UClass_AVisualLoggerRenderingActorBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LogVisualizer();
// End Cross Module References
	void AVisualLoggerRenderingActorBase::StaticRegisterNativesAVisualLoggerRenderingActorBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVisualLoggerRenderingActorBase);
	UClass* Z_Construct_UClass_AVisualLoggerRenderingActorBase_NoRegister()
	{
		return AVisualLoggerRenderingActorBase::StaticClass();
	}
	struct Z_Construct_UClass_AVisualLoggerRenderingActorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVisualLoggerRenderingActorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LogVisualizer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVisualLoggerRenderingActorBase_Statics::Class_MetaDataParams[] = {
		{ "AdvancedClassDisplay", "true" },
		{ "Comment", "/**\n*\x09Transient actor used to draw visual logger data on level\n*\x09""Base class shared between RewindDebugger and Visual Logger implementations\n*/" },
		{ "IncludePath", "VisualLoggerRenderingActorBase.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/VisualLoggerRenderingActorBase.h" },
		{ "ToolTip", "Transient actor used to draw visual logger data on level\nBase class shared between RewindDebugger and Visual Logger implementations" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVisualLoggerRenderingActorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVisualLoggerRenderingActorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVisualLoggerRenderingActorBase_Statics::ClassParams = {
		&AVisualLoggerRenderingActorBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AVisualLoggerRenderingActorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVisualLoggerRenderingActorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVisualLoggerRenderingActorBase()
	{
		if (!Z_Registration_Info_UClass_AVisualLoggerRenderingActorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVisualLoggerRenderingActorBase.OuterSingleton, Z_Construct_UClass_AVisualLoggerRenderingActorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVisualLoggerRenderingActorBase.OuterSingleton;
	}
	template<> LOGVISUALIZER_API UClass* StaticClass<AVisualLoggerRenderingActorBase>()
	{
		return AVisualLoggerRenderingActorBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVisualLoggerRenderingActorBase);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Public_VisualLoggerRenderingActorBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Public_VisualLoggerRenderingActorBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVisualLoggerRenderingActorBase, AVisualLoggerRenderingActorBase::StaticClass, TEXT("AVisualLoggerRenderingActorBase"), &Z_Registration_Info_UClass_AVisualLoggerRenderingActorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVisualLoggerRenderingActorBase), 207539514U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Public_VisualLoggerRenderingActorBase_h_2057084853(TEXT("/Script/LogVisualizer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Public_VisualLoggerRenderingActorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Public_VisualLoggerRenderingActorBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
