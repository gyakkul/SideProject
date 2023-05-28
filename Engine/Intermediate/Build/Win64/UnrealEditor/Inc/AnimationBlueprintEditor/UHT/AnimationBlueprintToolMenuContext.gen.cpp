// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AnimationBlueprintToolMenuContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationBlueprintToolMenuContext() {}
// Cross Module References
	ANIMATIONBLUEPRINTEDITOR_API UClass* Z_Construct_UClass_UAnimationBlueprintToolMenuContext();
	ANIMATIONBLUEPRINTEDITOR_API UClass* Z_Construct_UClass_UAnimationBlueprintToolMenuContext_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AnimationBlueprintEditor();
// End Cross Module References
	void UAnimationBlueprintToolMenuContext::StaticRegisterNativesUAnimationBlueprintToolMenuContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationBlueprintToolMenuContext);
	UClass* Z_Construct_UClass_UAnimationBlueprintToolMenuContext_NoRegister()
	{
		return UAnimationBlueprintToolMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationBlueprintToolMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationBlueprintToolMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationBlueprintEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationBlueprintToolMenuContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimationBlueprintToolMenuContext.h" },
		{ "ModuleRelativePath", "Private/AnimationBlueprintToolMenuContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationBlueprintToolMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationBlueprintToolMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationBlueprintToolMenuContext_Statics::ClassParams = {
		&UAnimationBlueprintToolMenuContext::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationBlueprintToolMenuContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationBlueprintToolMenuContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationBlueprintToolMenuContext()
	{
		if (!Z_Registration_Info_UClass_UAnimationBlueprintToolMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationBlueprintToolMenuContext.OuterSingleton, Z_Construct_UClass_UAnimationBlueprintToolMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationBlueprintToolMenuContext.OuterSingleton;
	}
	template<> ANIMATIONBLUEPRINTEDITOR_API UClass* StaticClass<UAnimationBlueprintToolMenuContext>()
	{
		return UAnimationBlueprintToolMenuContext::StaticClass();
	}
	UAnimationBlueprintToolMenuContext::UAnimationBlueprintToolMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationBlueprintToolMenuContext);
	UAnimationBlueprintToolMenuContext::~UAnimationBlueprintToolMenuContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintEditor_Private_AnimationBlueprintToolMenuContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintEditor_Private_AnimationBlueprintToolMenuContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationBlueprintToolMenuContext, UAnimationBlueprintToolMenuContext::StaticClass, TEXT("UAnimationBlueprintToolMenuContext"), &Z_Registration_Info_UClass_UAnimationBlueprintToolMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationBlueprintToolMenuContext), 3593182293U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintEditor_Private_AnimationBlueprintToolMenuContext_h_86583800(TEXT("/Script/AnimationBlueprintEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintEditor_Private_AnimationBlueprintToolMenuContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintEditor_Private_AnimationBlueprintToolMenuContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
