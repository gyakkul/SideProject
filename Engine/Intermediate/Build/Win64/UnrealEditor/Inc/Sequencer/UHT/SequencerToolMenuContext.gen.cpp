// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SequencerToolMenuContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerToolMenuContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SEQUENCER_API UClass* Z_Construct_UClass_USequencerToolMenuContext();
	SEQUENCER_API UClass* Z_Construct_UClass_USequencerToolMenuContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Sequencer();
// End Cross Module References
	void USequencerToolMenuContext::StaticRegisterNativesUSequencerToolMenuContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequencerToolMenuContext);
	UClass* Z_Construct_UClass_USequencerToolMenuContext_NoRegister()
	{
		return USequencerToolMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_USequencerToolMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequencerToolMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Sequencer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerToolMenuContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SequencerToolMenuContext.h" },
		{ "ModuleRelativePath", "Private/SequencerToolMenuContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequencerToolMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequencerToolMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USequencerToolMenuContext_Statics::ClassParams = {
		&USequencerToolMenuContext::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USequencerToolMenuContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerToolMenuContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequencerToolMenuContext()
	{
		if (!Z_Registration_Info_UClass_USequencerToolMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequencerToolMenuContext.OuterSingleton, Z_Construct_UClass_USequencerToolMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USequencerToolMenuContext.OuterSingleton;
	}
	template<> SEQUENCER_API UClass* StaticClass<USequencerToolMenuContext>()
	{
		return USequencerToolMenuContext::StaticClass();
	}
	USequencerToolMenuContext::USequencerToolMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequencerToolMenuContext);
	USequencerToolMenuContext::~USequencerToolMenuContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Private_SequencerToolMenuContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Private_SequencerToolMenuContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USequencerToolMenuContext, USequencerToolMenuContext::StaticClass, TEXT("USequencerToolMenuContext"), &Z_Registration_Info_UClass_USequencerToolMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequencerToolMenuContext), 106468141U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Private_SequencerToolMenuContext_h_1926000830(TEXT("/Script/Sequencer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Private_SequencerToolMenuContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Private_SequencerToolMenuContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
