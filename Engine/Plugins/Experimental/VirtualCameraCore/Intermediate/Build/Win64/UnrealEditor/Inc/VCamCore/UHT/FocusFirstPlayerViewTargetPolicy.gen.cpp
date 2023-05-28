// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewTargetPolicy/FocusFirstPlayerViewTargetPolicy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFocusFirstPlayerViewTargetPolicy() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VCamCore();
	VCAMCORE_API UClass* Z_Construct_UClass_UFocusFirstPlayerViewTargetPolicy();
	VCAMCORE_API UClass* Z_Construct_UClass_UFocusFirstPlayerViewTargetPolicy_NoRegister();
	VCAMCORE_API UClass* Z_Construct_UClass_UGameplayViewTargetPolicy();
// End Cross Module References
	void UFocusFirstPlayerViewTargetPolicy::StaticRegisterNativesUFocusFirstPlayerViewTargetPolicy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFocusFirstPlayerViewTargetPolicy);
	UClass* Z_Construct_UClass_UFocusFirstPlayerViewTargetPolicy_NoRegister()
	{
		return UFocusFirstPlayerViewTargetPolicy::StaticClass();
	}
	struct Z_Construct_UClass_UFocusFirstPlayerViewTargetPolicy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFocusFirstPlayerViewTargetPolicy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayViewTargetPolicy,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFocusFirstPlayerViewTargetPolicy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Chooses the first local player controller.\n */" },
		{ "IncludePath", "ViewTargetPolicy/FocusFirstPlayerViewTargetPolicy.h" },
		{ "ModuleRelativePath", "Public/ViewTargetPolicy/FocusFirstPlayerViewTargetPolicy.h" },
		{ "ToolTip", "Chooses the first local player controller." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFocusFirstPlayerViewTargetPolicy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFocusFirstPlayerViewTargetPolicy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFocusFirstPlayerViewTargetPolicy_Statics::ClassParams = {
		&UFocusFirstPlayerViewTargetPolicy::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFocusFirstPlayerViewTargetPolicy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFocusFirstPlayerViewTargetPolicy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFocusFirstPlayerViewTargetPolicy()
	{
		if (!Z_Registration_Info_UClass_UFocusFirstPlayerViewTargetPolicy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFocusFirstPlayerViewTargetPolicy.OuterSingleton, Z_Construct_UClass_UFocusFirstPlayerViewTargetPolicy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFocusFirstPlayerViewTargetPolicy.OuterSingleton;
	}
	template<> VCAMCORE_API UClass* StaticClass<UFocusFirstPlayerViewTargetPolicy>()
	{
		return UFocusFirstPlayerViewTargetPolicy::StaticClass();
	}
	UFocusFirstPlayerViewTargetPolicy::UFocusFirstPlayerViewTargetPolicy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFocusFirstPlayerViewTargetPolicy);
	UFocusFirstPlayerViewTargetPolicy::~UFocusFirstPlayerViewTargetPolicy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_ViewTargetPolicy_FocusFirstPlayerViewTargetPolicy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_ViewTargetPolicy_FocusFirstPlayerViewTargetPolicy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFocusFirstPlayerViewTargetPolicy, UFocusFirstPlayerViewTargetPolicy::StaticClass, TEXT("UFocusFirstPlayerViewTargetPolicy"), &Z_Registration_Info_UClass_UFocusFirstPlayerViewTargetPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFocusFirstPlayerViewTargetPolicy), 3698110405U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_ViewTargetPolicy_FocusFirstPlayerViewTargetPolicy_h_3774459880(TEXT("/Script/VCamCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_ViewTargetPolicy_FocusFirstPlayerViewTargetPolicy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_ViewTargetPolicy_FocusFirstPlayerViewTargetPolicy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
