// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequencerAnimationSupport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerAnimationSupport() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_USequencerAnimationSupport();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_USequencerAnimationSupport_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References
	void USequencerAnimationSupport::StaticRegisterNativesUSequencerAnimationSupport()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequencerAnimationSupport);
	UClass* Z_Construct_UClass_USequencerAnimationSupport_NoRegister()
	{
		return USequencerAnimationSupport::StaticClass();
	}
	struct Z_Construct_UClass_USequencerAnimationSupport_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequencerAnimationSupport_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerAnimationSupport_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/SequencerAnimationSupport.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequencerAnimationSupport_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISequencerAnimationSupport>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USequencerAnimationSupport_Statics::ClassParams = {
		&USequencerAnimationSupport::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_USequencerAnimationSupport_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerAnimationSupport_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequencerAnimationSupport()
	{
		if (!Z_Registration_Info_UClass_USequencerAnimationSupport.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequencerAnimationSupport.OuterSingleton, Z_Construct_UClass_USequencerAnimationSupport_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USequencerAnimationSupport.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<USequencerAnimationSupport>()
	{
		return USequencerAnimationSupport::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequencerAnimationSupport);
	USequencerAnimationSupport::~USequencerAnimationSupport() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USequencerAnimationSupport, USequencerAnimationSupport::StaticClass, TEXT("USequencerAnimationSupport"), &Z_Registration_Info_UClass_USequencerAnimationSupport, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequencerAnimationSupport), 3061716723U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_2991378021(TEXT("/Script/AnimGraphRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
