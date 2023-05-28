// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify_ResetDynamics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_ResetDynamics() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_ResetDynamics();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_ResetDynamics_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimNotify_ResetDynamics::StaticRegisterNativesUAnimNotify_ResetDynamics()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_ResetDynamics);
	UClass* Z_Construct_UClass_UAnimNotify_ResetDynamics_NoRegister()
	{
		return UAnimNotify_ResetDynamics::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_ResetDynamics_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotify_ResetDynamics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_ResetDynamics_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Reset Dynamics" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/AnimNotifies/AnimNotify_ResetDynamics.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_ResetDynamics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_ResetDynamics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_ResetDynamics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_ResetDynamics_Statics::ClassParams = {
		&UAnimNotify_ResetDynamics::StaticClass,
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
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_ResetDynamics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ResetDynamics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotify_ResetDynamics()
	{
		if (!Z_Registration_Info_UClass_UAnimNotify_ResetDynamics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_ResetDynamics.OuterSingleton, Z_Construct_UClass_UAnimNotify_ResetDynamics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNotify_ResetDynamics.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimNotify_ResetDynamics>()
	{
		return UAnimNotify_ResetDynamics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_ResetDynamics);
	UAnimNotify_ResetDynamics::~UAnimNotify_ResetDynamics() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_ResetDynamics_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_ResetDynamics_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_ResetDynamics, UAnimNotify_ResetDynamics::StaticClass, TEXT("UAnimNotify_ResetDynamics"), &Z_Registration_Info_UClass_UAnimNotify_ResetDynamics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_ResetDynamics), 1703828293U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_ResetDynamics_h_1051923991(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_ResetDynamics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_ResetDynamics_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
