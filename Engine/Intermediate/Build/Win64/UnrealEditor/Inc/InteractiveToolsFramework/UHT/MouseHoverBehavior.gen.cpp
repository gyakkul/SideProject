// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseBehaviors/MouseHoverBehavior.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMouseHoverBehavior() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehavior();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_ULocalMouseHoverBehavior();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_ULocalMouseHoverBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMouseHoverBehavior();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMouseHoverBehavior_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UMouseHoverBehavior::StaticRegisterNativesUMouseHoverBehavior()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMouseHoverBehavior);
	UClass* Z_Construct_UClass_UMouseHoverBehavior_NoRegister()
	{
		return UMouseHoverBehavior::StaticClass();
	}
	struct Z_Construct_UClass_UMouseHoverBehavior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMouseHoverBehavior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputBehavior,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMouseHoverBehavior_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Trivial InputBehavior that forwards InputBehavior hover events to a Target object via\n * the IHoverBehaviorTarget interface.\n */" },
		{ "IncludePath", "BaseBehaviors/MouseHoverBehavior.h" },
		{ "ModuleRelativePath", "Public/BaseBehaviors/MouseHoverBehavior.h" },
		{ "ToolTip", "Trivial InputBehavior that forwards InputBehavior hover events to a Target object via\nthe IHoverBehaviorTarget interface." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMouseHoverBehavior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMouseHoverBehavior>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMouseHoverBehavior_Statics::ClassParams = {
		&UMouseHoverBehavior::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMouseHoverBehavior_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMouseHoverBehavior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMouseHoverBehavior()
	{
		if (!Z_Registration_Info_UClass_UMouseHoverBehavior.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMouseHoverBehavior.OuterSingleton, Z_Construct_UClass_UMouseHoverBehavior_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMouseHoverBehavior.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UMouseHoverBehavior>()
	{
		return UMouseHoverBehavior::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMouseHoverBehavior);
	UMouseHoverBehavior::~UMouseHoverBehavior() {}
	void ULocalMouseHoverBehavior::StaticRegisterNativesULocalMouseHoverBehavior()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocalMouseHoverBehavior);
	UClass* Z_Construct_UClass_ULocalMouseHoverBehavior_NoRegister()
	{
		return ULocalMouseHoverBehavior::StaticClass();
	}
	struct Z_Construct_UClass_ULocalMouseHoverBehavior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalMouseHoverBehavior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMouseHoverBehavior,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalMouseHoverBehavior_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An implementation of UMouseHoverBehavior that also implements IHoverBehaviorTarget directly, via a set \n * of local lambda functions. To use/customize this class, the client replaces the lambda functions with their own.\n * This avoids having to create a separate IHoverBehaviorTarget implementation for trivial use-cases.\n */" },
		{ "IncludePath", "BaseBehaviors/MouseHoverBehavior.h" },
		{ "ModuleRelativePath", "Public/BaseBehaviors/MouseHoverBehavior.h" },
		{ "ToolTip", "An implementation of UMouseHoverBehavior that also implements IHoverBehaviorTarget directly, via a set\nof local lambda functions. To use/customize this class, the client replaces the lambda functions with their own.\nThis avoids having to create a separate IHoverBehaviorTarget implementation for trivial use-cases." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalMouseHoverBehavior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalMouseHoverBehavior>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocalMouseHoverBehavior_Statics::ClassParams = {
		&ULocalMouseHoverBehavior::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULocalMouseHoverBehavior_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULocalMouseHoverBehavior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalMouseHoverBehavior()
	{
		if (!Z_Registration_Info_UClass_ULocalMouseHoverBehavior.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocalMouseHoverBehavior.OuterSingleton, Z_Construct_UClass_ULocalMouseHoverBehavior_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULocalMouseHoverBehavior.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<ULocalMouseHoverBehavior>()
	{
		return ULocalMouseHoverBehavior::StaticClass();
	}
	ULocalMouseHoverBehavior::ULocalMouseHoverBehavior() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalMouseHoverBehavior);
	ULocalMouseHoverBehavior::~ULocalMouseHoverBehavior() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_MouseHoverBehavior_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_MouseHoverBehavior_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMouseHoverBehavior, UMouseHoverBehavior::StaticClass, TEXT("UMouseHoverBehavior"), &Z_Registration_Info_UClass_UMouseHoverBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMouseHoverBehavior), 3157435116U) },
		{ Z_Construct_UClass_ULocalMouseHoverBehavior, ULocalMouseHoverBehavior::StaticClass, TEXT("ULocalMouseHoverBehavior"), &Z_Registration_Info_UClass_ULocalMouseHoverBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocalMouseHoverBehavior), 2891892871U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_MouseHoverBehavior_h_1543718430(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_MouseHoverBehavior_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_MouseHoverBehavior_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
