// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseBehaviors/SingleKeyCaptureBehavior.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingleKeyCaptureBehavior() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehavior();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleKeyCaptureBehavior();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleKeyCaptureBehavior_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void USingleKeyCaptureBehavior::StaticRegisterNativesUSingleKeyCaptureBehavior()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USingleKeyCaptureBehavior);
	UClass* Z_Construct_UClass_USingleKeyCaptureBehavior_NoRegister()
	{
		return USingleKeyCaptureBehavior::StaticClass();
	}
	struct Z_Construct_UClass_USingleKeyCaptureBehavior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USingleKeyCaptureBehavior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputBehavior,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingleKeyCaptureBehavior_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * USingleKeyCaptureBehavior captures a key press and routes it to target via\n * the IModifierToggleBehaviorTarget interface. If you want similar behavior\n * without actually capturing the key, you should use UKeyAsModifierInputBehavior.\n */" },
		{ "IncludePath", "BaseBehaviors/SingleKeyCaptureBehavior.h" },
		{ "ModuleRelativePath", "Public/BaseBehaviors/SingleKeyCaptureBehavior.h" },
		{ "ToolTip", "USingleKeyCaptureBehavior captures a key press and routes it to target via\nthe IModifierToggleBehaviorTarget interface. If you want similar behavior\nwithout actually capturing the key, you should use UKeyAsModifierInputBehavior." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USingleKeyCaptureBehavior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USingleKeyCaptureBehavior>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USingleKeyCaptureBehavior_Statics::ClassParams = {
		&USingleKeyCaptureBehavior::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USingleKeyCaptureBehavior_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USingleKeyCaptureBehavior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USingleKeyCaptureBehavior()
	{
		if (!Z_Registration_Info_UClass_USingleKeyCaptureBehavior.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USingleKeyCaptureBehavior.OuterSingleton, Z_Construct_UClass_USingleKeyCaptureBehavior_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USingleKeyCaptureBehavior.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<USingleKeyCaptureBehavior>()
	{
		return USingleKeyCaptureBehavior::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USingleKeyCaptureBehavior);
	USingleKeyCaptureBehavior::~USingleKeyCaptureBehavior() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleKeyCaptureBehavior_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleKeyCaptureBehavior_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USingleKeyCaptureBehavior, USingleKeyCaptureBehavior::StaticClass, TEXT("USingleKeyCaptureBehavior"), &Z_Registration_Info_UClass_USingleKeyCaptureBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USingleKeyCaptureBehavior), 1857301795U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleKeyCaptureBehavior_h_1971442482(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleKeyCaptureBehavior_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleKeyCaptureBehavior_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
