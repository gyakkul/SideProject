// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rigs/AdditiveControlRig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdditiveControlRig() {}
// Cross Module References
	CONTROLRIG_API UClass* Z_Construct_UClass_UAdditiveControlRig();
	CONTROLRIG_API UClass* Z_Construct_UClass_UAdditiveControlRig_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	void UAdditiveControlRig::StaticRegisterNativesUAdditiveControlRig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAdditiveControlRig);
	UClass* Z_Construct_UClass_UAdditiveControlRig_NoRegister()
	{
		return UAdditiveControlRig::StaticClass();
	}
	struct Z_Construct_UClass_UAdditiveControlRig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdditiveControlRig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UControlRig,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdditiveControlRig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Rig that allows additive layer editing per joint */" },
		{ "IncludePath", "Rigs/AdditiveControlRig.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Rigs/AdditiveControlRig.h" },
		{ "ToolTip", "Rig that allows additive layer editing per joint" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdditiveControlRig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdditiveControlRig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAdditiveControlRig_Statics::ClassParams = {
		&UAdditiveControlRig::StaticClass,
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
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAdditiveControlRig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdditiveControlRig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdditiveControlRig()
	{
		if (!Z_Registration_Info_UClass_UAdditiveControlRig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAdditiveControlRig.OuterSingleton, Z_Construct_UClass_UAdditiveControlRig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAdditiveControlRig.OuterSingleton;
	}
	template<> CONTROLRIG_API UClass* StaticClass<UAdditiveControlRig>()
	{
		return UAdditiveControlRig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdditiveControlRig);
	UAdditiveControlRig::~UAdditiveControlRig() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_AdditiveControlRig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_AdditiveControlRig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAdditiveControlRig, UAdditiveControlRig::StaticClass, TEXT("UAdditiveControlRig"), &Z_Registration_Info_UClass_UAdditiveControlRig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAdditiveControlRig), 2379895647U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_AdditiveControlRig_h_131823325(TEXT("/Script/ControlRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_AdditiveControlRig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_AdditiveControlRig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
