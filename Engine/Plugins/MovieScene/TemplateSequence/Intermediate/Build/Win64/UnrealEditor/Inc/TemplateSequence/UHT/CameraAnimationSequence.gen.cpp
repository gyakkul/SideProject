// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CameraAnimationSequence.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraAnimationSequence() {}
// Cross Module References
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationSequence();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationSequence_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequence();
	UPackage* Z_Construct_UPackage__Script_TemplateSequence();
// End Cross Module References
	void UCameraAnimationSequence::StaticRegisterNativesUCameraAnimationSequence()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraAnimationSequence);
	UClass* Z_Construct_UClass_UCameraAnimationSequence_NoRegister()
	{
		return UCameraAnimationSequence::StaticClass();
	}
	struct Z_Construct_UClass_UCameraAnimationSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraAnimationSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTemplateSequence,
		(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimationSequence_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * A template sequence specifically designed for playing on cameras.\n */" },
		{ "IncludePath", "CameraAnimationSequence.h" },
		{ "ModuleRelativePath", "Public/CameraAnimationSequence.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* A template sequence specifically designed for playing on cameras." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraAnimationSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraAnimationSequence>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraAnimationSequence_Statics::ClassParams = {
		&UCameraAnimationSequence::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraAnimationSequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraAnimationSequence()
	{
		if (!Z_Registration_Info_UClass_UCameraAnimationSequence.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraAnimationSequence.OuterSingleton, Z_Construct_UClass_UCameraAnimationSequence_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraAnimationSequence.OuterSingleton;
	}
	template<> TEMPLATESEQUENCE_API UClass* StaticClass<UCameraAnimationSequence>()
	{
		return UCameraAnimationSequence::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraAnimationSequence);
	UCameraAnimationSequence::~UCameraAnimationSequence() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_CameraAnimationSequence_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_CameraAnimationSequence_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraAnimationSequence, UCameraAnimationSequence::StaticClass, TEXT("UCameraAnimationSequence"), &Z_Registration_Info_UClass_UCameraAnimationSequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraAnimationSequence), 2559237725U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_CameraAnimationSequence_h_2938766061(TEXT("/Script/TemplateSequence"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_CameraAnimationSequence_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_CameraAnimationSequence_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
