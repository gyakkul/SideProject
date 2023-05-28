// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationToolMenuContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationToolMenuContext() {}
// Cross Module References
	ANIMATIONEDITOR_API UClass* Z_Construct_UClass_UAnimationToolMenuContext();
	ANIMATIONEDITOR_API UClass* Z_Construct_UClass_UAnimationToolMenuContext_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AnimationEditor();
// End Cross Module References
	void UAnimationToolMenuContext::StaticRegisterNativesUAnimationToolMenuContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationToolMenuContext);
	UClass* Z_Construct_UClass_UAnimationToolMenuContext_NoRegister()
	{
		return UAnimationToolMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationToolMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationToolMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationToolMenuContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimationToolMenuContext.h" },
		{ "ModuleRelativePath", "Public/AnimationToolMenuContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationToolMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationToolMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationToolMenuContext_Statics::ClassParams = {
		&UAnimationToolMenuContext::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationToolMenuContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationToolMenuContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationToolMenuContext()
	{
		if (!Z_Registration_Info_UClass_UAnimationToolMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationToolMenuContext.OuterSingleton, Z_Construct_UClass_UAnimationToolMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationToolMenuContext.OuterSingleton;
	}
	template<> ANIMATIONEDITOR_API UClass* StaticClass<UAnimationToolMenuContext>()
	{
		return UAnimationToolMenuContext::StaticClass();
	}
	UAnimationToolMenuContext::UAnimationToolMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationToolMenuContext);
	UAnimationToolMenuContext::~UAnimationToolMenuContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationEditor_Public_AnimationToolMenuContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationEditor_Public_AnimationToolMenuContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationToolMenuContext, UAnimationToolMenuContext::StaticClass, TEXT("UAnimationToolMenuContext"), &Z_Registration_Info_UClass_UAnimationToolMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationToolMenuContext), 2074767322U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationEditor_Public_AnimationToolMenuContext_h_4029778325(TEXT("/Script/AnimationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationEditor_Public_AnimationToolMenuContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationEditor_Public_AnimationToolMenuContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
