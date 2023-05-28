// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveformEditorToolMenuContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveformEditorToolMenuContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_WaveformEditor();
	WAVEFORMEDITOR_API UClass* Z_Construct_UClass_UWaveformEditorToolMenuContext();
	WAVEFORMEDITOR_API UClass* Z_Construct_UClass_UWaveformEditorToolMenuContext_NoRegister();
// End Cross Module References
	void UWaveformEditorToolMenuContext::StaticRegisterNativesUWaveformEditorToolMenuContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveformEditorToolMenuContext);
	UClass* Z_Construct_UClass_UWaveformEditorToolMenuContext_NoRegister()
	{
		return UWaveformEditorToolMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_UWaveformEditorToolMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaveformEditorToolMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WaveformEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveformEditorToolMenuContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WaveformEditorToolMenuContext.h" },
		{ "ModuleRelativePath", "Public/WaveformEditorToolMenuContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaveformEditorToolMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveformEditorToolMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveformEditorToolMenuContext_Statics::ClassParams = {
		&UWaveformEditorToolMenuContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWaveformEditorToolMenuContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveformEditorToolMenuContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaveformEditorToolMenuContext()
	{
		if (!Z_Registration_Info_UClass_UWaveformEditorToolMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveformEditorToolMenuContext.OuterSingleton, Z_Construct_UClass_UWaveformEditorToolMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaveformEditorToolMenuContext.OuterSingleton;
	}
	template<> WAVEFORMEDITOR_API UClass* StaticClass<UWaveformEditorToolMenuContext>()
	{
		return UWaveformEditorToolMenuContext::StaticClass();
	}
	UWaveformEditorToolMenuContext::UWaveformEditorToolMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveformEditorToolMenuContext);
	UWaveformEditorToolMenuContext::~UWaveformEditorToolMenuContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditor_Public_WaveformEditorToolMenuContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditor_Public_WaveformEditorToolMenuContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaveformEditorToolMenuContext, UWaveformEditorToolMenuContext::StaticClass, TEXT("UWaveformEditorToolMenuContext"), &Z_Registration_Info_UClass_UWaveformEditorToolMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveformEditorToolMenuContext), 2351832942U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditor_Public_WaveformEditorToolMenuContext_h_919895685(TEXT("/Script/WaveformEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditor_Public_WaveformEditorToolMenuContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditor_Public_WaveformEditorToolMenuContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
