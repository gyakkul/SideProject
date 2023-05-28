// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseBehaviors/SingleClickBehavior.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingleClickBehavior() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAnyButtonInputBehavior();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_ULocalSingleClickInputBehavior();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_ULocalSingleClickInputBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickInputBehavior();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickInputBehavior_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void USingleClickInputBehavior::StaticRegisterNativesUSingleClickInputBehavior()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USingleClickInputBehavior);
	UClass* Z_Construct_UClass_USingleClickInputBehavior_NoRegister()
	{
		return USingleClickInputBehavior::StaticClass();
	}
	struct Z_Construct_UClass_USingleClickInputBehavior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitTestOnRelease_MetaData[];
#endif
		static void NewProp_HitTestOnRelease_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HitTestOnRelease;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USingleClickInputBehavior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnyButtonInputBehavior,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingleClickInputBehavior_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * USingleClickInputBehavior implements a standard \"button-click\"-style input behavior.\n * The state machine works as follows:\n *    1) on input-device-button-press, hit-test the target. If hit, begin capture\n *    2) on input-device-button-release, hit-test the target. If hit, call Target::OnClicked(). If not hit, ignore click.\n *    \n * The second hit-test is required to allow the click to be \"cancelled\" by moving away\n * from the target. This is standard GUI behavior. You can disable this second hit test\n * using the .HitTestOnRelease property. This is strongly discouraged.\n *    \n * The hit-test and on-clicked functions are provided by a IClickBehaviorTarget instance.\n */" },
		{ "IncludePath", "BaseBehaviors/SingleClickBehavior.h" },
		{ "ModuleRelativePath", "Public/BaseBehaviors/SingleClickBehavior.h" },
		{ "ToolTip", "USingleClickInputBehavior implements a standard \"button-click\"-style input behavior.\nThe state machine works as follows:\n   1) on input-device-button-press, hit-test the target. If hit, begin capture\n   2) on input-device-button-release, hit-test the target. If hit, call Target::OnClicked(). If not hit, ignore click.\n\nThe second hit-test is required to allow the click to be \"cancelled\" by moving away\nfrom the target. This is standard GUI behavior. You can disable this second hit test\nusing the .HitTestOnRelease property. This is strongly discouraged.\n\nThe hit-test and on-clicked functions are provided by a IClickBehaviorTarget instance." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingleClickInputBehavior_Statics::NewProp_HitTestOnRelease_MetaData[] = {
		{ "Comment", "/** Hit-test is repeated on release (standard behavior). If false, */" },
		{ "ModuleRelativePath", "Public/BaseBehaviors/SingleClickBehavior.h" },
		{ "ToolTip", "Hit-test is repeated on release (standard behavior). If false," },
	};
#endif
	void Z_Construct_UClass_USingleClickInputBehavior_Statics::NewProp_HitTestOnRelease_SetBit(void* Obj)
	{
		((USingleClickInputBehavior*)Obj)->HitTestOnRelease = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USingleClickInputBehavior_Statics::NewProp_HitTestOnRelease = { "HitTestOnRelease", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USingleClickInputBehavior), &Z_Construct_UClass_USingleClickInputBehavior_Statics::NewProp_HitTestOnRelease_SetBit, METADATA_PARAMS(Z_Construct_UClass_USingleClickInputBehavior_Statics::NewProp_HitTestOnRelease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USingleClickInputBehavior_Statics::NewProp_HitTestOnRelease_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USingleClickInputBehavior_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USingleClickInputBehavior_Statics::NewProp_HitTestOnRelease,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USingleClickInputBehavior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USingleClickInputBehavior>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USingleClickInputBehavior_Statics::ClassParams = {
		&USingleClickInputBehavior::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USingleClickInputBehavior_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USingleClickInputBehavior_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USingleClickInputBehavior_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USingleClickInputBehavior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USingleClickInputBehavior()
	{
		if (!Z_Registration_Info_UClass_USingleClickInputBehavior.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USingleClickInputBehavior.OuterSingleton, Z_Construct_UClass_USingleClickInputBehavior_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USingleClickInputBehavior.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<USingleClickInputBehavior>()
	{
		return USingleClickInputBehavior::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USingleClickInputBehavior);
	USingleClickInputBehavior::~USingleClickInputBehavior() {}
	void ULocalSingleClickInputBehavior::StaticRegisterNativesULocalSingleClickInputBehavior()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocalSingleClickInputBehavior);
	UClass* Z_Construct_UClass_ULocalSingleClickInputBehavior_NoRegister()
	{
		return ULocalSingleClickInputBehavior::StaticClass();
	}
	struct Z_Construct_UClass_ULocalSingleClickInputBehavior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalSingleClickInputBehavior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleClickInputBehavior,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalSingleClickInputBehavior_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An implementation of USingleClickInputBehavior that also implements IClickBehaviorTarget directly, via a set \n * of local lambda functions. To use/customize this class, the client replaces the lambda functions with their own.\n * This avoids having to create a separate IClickBehaviorTarget implementation for trivial use-cases.\n */" },
		{ "IncludePath", "BaseBehaviors/SingleClickBehavior.h" },
		{ "ModuleRelativePath", "Public/BaseBehaviors/SingleClickBehavior.h" },
		{ "ToolTip", "An implementation of USingleClickInputBehavior that also implements IClickBehaviorTarget directly, via a set\nof local lambda functions. To use/customize this class, the client replaces the lambda functions with their own.\nThis avoids having to create a separate IClickBehaviorTarget implementation for trivial use-cases." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalSingleClickInputBehavior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalSingleClickInputBehavior>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocalSingleClickInputBehavior_Statics::ClassParams = {
		&ULocalSingleClickInputBehavior::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULocalSingleClickInputBehavior_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULocalSingleClickInputBehavior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalSingleClickInputBehavior()
	{
		if (!Z_Registration_Info_UClass_ULocalSingleClickInputBehavior.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocalSingleClickInputBehavior.OuterSingleton, Z_Construct_UClass_ULocalSingleClickInputBehavior_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULocalSingleClickInputBehavior.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<ULocalSingleClickInputBehavior>()
	{
		return ULocalSingleClickInputBehavior::StaticClass();
	}
	ULocalSingleClickInputBehavior::ULocalSingleClickInputBehavior() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalSingleClickInputBehavior);
	ULocalSingleClickInputBehavior::~ULocalSingleClickInputBehavior() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleClickBehavior_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleClickBehavior_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USingleClickInputBehavior, USingleClickInputBehavior::StaticClass, TEXT("USingleClickInputBehavior"), &Z_Registration_Info_UClass_USingleClickInputBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USingleClickInputBehavior), 1152769422U) },
		{ Z_Construct_UClass_ULocalSingleClickInputBehavior, ULocalSingleClickInputBehavior::StaticClass, TEXT("ULocalSingleClickInputBehavior"), &Z_Registration_Info_UClass_ULocalSingleClickInputBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocalSingleClickInputBehavior), 123439448U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleClickBehavior_h_507851790(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleClickBehavior_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleClickBehavior_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
