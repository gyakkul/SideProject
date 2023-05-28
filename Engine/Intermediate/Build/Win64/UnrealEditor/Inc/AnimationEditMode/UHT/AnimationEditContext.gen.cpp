// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationEditContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationEditContext() {}
// Cross Module References
	ANIMATIONEDITMODE_API UClass* Z_Construct_UClass_UAnimationEditContext();
	ANIMATIONEDITMODE_API UClass* Z_Construct_UClass_UAnimationEditContext_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AnimationEditMode();
// End Cross Module References
	void UAnimationEditContext::StaticRegisterNativesUAnimationEditContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationEditContext);
	UClass* Z_Construct_UClass_UAnimationEditContext_NoRegister()
	{
		return UAnimationEditContext::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationEditContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationEditContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationEditMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationEditContext_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimationEditContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationEditContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAnimationEditContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationEditContext_Statics::ClassParams = {
		&UAnimationEditContext::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationEditContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationEditContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationEditContext()
	{
		if (!Z_Registration_Info_UClass_UAnimationEditContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationEditContext.OuterSingleton, Z_Construct_UClass_UAnimationEditContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationEditContext.OuterSingleton;
	}
	template<> ANIMATIONEDITMODE_API UClass* StaticClass<UAnimationEditContext>()
	{
		return UAnimationEditContext::StaticClass();
	}
	UAnimationEditContext::UAnimationEditContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationEditContext);
	UAnimationEditContext::~UAnimationEditContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationEditContext, UAnimationEditContext::StaticClass, TEXT("UAnimationEditContext"), &Z_Registration_Info_UClass_UAnimationEditContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationEditContext), 2333895950U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_2051036874(TEXT("/Script/AnimationEditMode"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
