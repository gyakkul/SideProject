// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/VLogRenderingActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVLogRenderingActor() {}
// Cross Module References
	LOGVISUALIZER_API UClass* Z_Construct_UClass_AVisualLoggerRenderingActorBase();
	REWINDDEBUGGERVLOG_API UClass* Z_Construct_UClass_AVLogRenderingActor();
	REWINDDEBUGGERVLOG_API UClass* Z_Construct_UClass_AVLogRenderingActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RewindDebuggerVLog();
// End Cross Module References
	void AVLogRenderingActor::StaticRegisterNativesAVLogRenderingActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVLogRenderingActor);
	UClass* Z_Construct_UClass_AVLogRenderingActor_NoRegister()
	{
		return AVLogRenderingActor::StaticClass();
	}
	struct Z_Construct_UClass_AVLogRenderingActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVLogRenderingActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVisualLoggerRenderingActorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RewindDebuggerVLog,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVLogRenderingActor_Statics::Class_MetaDataParams[] = {
		{ "AdvancedClassDisplay", "true" },
		{ "Comment", "/**\n*\x09Transient actor used to draw visual logger data on level\n*/" },
		{ "IncludePath", "VLogRenderingActor.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/VLogRenderingActor.h" },
		{ "ToolTip", "Transient actor used to draw visual logger data on level" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVLogRenderingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVLogRenderingActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVLogRenderingActor_Statics::ClassParams = {
		&AVLogRenderingActor::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AVLogRenderingActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVLogRenderingActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVLogRenderingActor()
	{
		if (!Z_Registration_Info_UClass_AVLogRenderingActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVLogRenderingActor.OuterSingleton, Z_Construct_UClass_AVLogRenderingActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVLogRenderingActor.OuterSingleton;
	}
	template<> REWINDDEBUGGERVLOG_API UClass* StaticClass<AVLogRenderingActor>()
	{
		return AVLogRenderingActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVLogRenderingActor);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebuggerVLog_Private_VLogRenderingActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebuggerVLog_Private_VLogRenderingActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVLogRenderingActor, AVLogRenderingActor::StaticClass, TEXT("AVLogRenderingActor"), &Z_Registration_Info_UClass_AVLogRenderingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVLogRenderingActor), 1752242850U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebuggerVLog_Private_VLogRenderingActor_h_3574496469(TEXT("/Script/RewindDebuggerVLog"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebuggerVLog_Private_VLogRenderingActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebuggerVLog_Private_VLogRenderingActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
