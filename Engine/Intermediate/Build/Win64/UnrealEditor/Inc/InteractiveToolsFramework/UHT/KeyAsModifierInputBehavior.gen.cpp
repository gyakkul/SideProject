// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseBehaviors/KeyAsModifierInputBehavior.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyAsModifierInputBehavior() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehavior();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UKeyAsModifierInputBehavior();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UKeyAsModifierInputBehavior_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UKeyAsModifierInputBehavior::StaticRegisterNativesUKeyAsModifierInputBehavior()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKeyAsModifierInputBehavior);
	UClass* Z_Construct_UClass_UKeyAsModifierInputBehavior_NoRegister()
	{
		return UKeyAsModifierInputBehavior::StaticClass();
	}
	struct Z_Construct_UClass_UKeyAsModifierInputBehavior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKeyAsModifierInputBehavior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputBehavior,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKeyAsModifierInputBehavior_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UKeyAsModifierInputBehavior converts a specific key press/release into\n * a \"Modifier\" toggle via the IModifierToggleBehaviorTarget interface. It does\n * not capture the key press; rather, it updates the modifier its WantsCapture call.\n * This means that the modifier won't be updated if another behavior captures the\n * keyboard.\n */" },
		{ "IncludePath", "BaseBehaviors/KeyAsModifierInputBehavior.h" },
		{ "ModuleRelativePath", "Public/BaseBehaviors/KeyAsModifierInputBehavior.h" },
		{ "ToolTip", "UKeyAsModifierInputBehavior converts a specific key press/release into\na \"Modifier\" toggle via the IModifierToggleBehaviorTarget interface. It does\nnot capture the key press; rather, it updates the modifier its WantsCapture call.\nThis means that the modifier won't be updated if another behavior captures the\nkeyboard." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKeyAsModifierInputBehavior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKeyAsModifierInputBehavior>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKeyAsModifierInputBehavior_Statics::ClassParams = {
		&UKeyAsModifierInputBehavior::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UKeyAsModifierInputBehavior_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKeyAsModifierInputBehavior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKeyAsModifierInputBehavior()
	{
		if (!Z_Registration_Info_UClass_UKeyAsModifierInputBehavior.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKeyAsModifierInputBehavior.OuterSingleton, Z_Construct_UClass_UKeyAsModifierInputBehavior_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKeyAsModifierInputBehavior.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UKeyAsModifierInputBehavior>()
	{
		return UKeyAsModifierInputBehavior::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKeyAsModifierInputBehavior);
	UKeyAsModifierInputBehavior::~UKeyAsModifierInputBehavior() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_KeyAsModifierInputBehavior_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_KeyAsModifierInputBehavior_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKeyAsModifierInputBehavior, UKeyAsModifierInputBehavior::StaticClass, TEXT("UKeyAsModifierInputBehavior"), &Z_Registration_Info_UClass_UKeyAsModifierInputBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKeyAsModifierInputBehavior), 4122006777U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_KeyAsModifierInputBehavior_h_1434153284(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_KeyAsModifierInputBehavior_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_KeyAsModifierInputBehavior_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
