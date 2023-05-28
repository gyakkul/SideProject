// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/BlendSpace1D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlendSpace1D() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace1D();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace1D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UBlendSpace1D::StaticRegisterNativesUBlendSpace1D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlendSpace1D);
	UClass* Z_Construct_UClass_UBlendSpace1D_NoRegister()
	{
		return UBlendSpace1D::StaticClass();
	}
	struct Z_Construct_UClass_UBlendSpace1D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayEditorVertically_MetaData[];
#endif
		static void NewProp_bDisplayEditorVertically_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayEditorVertically;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScaleAnimation_MetaData[];
#endif
		static void NewProp_bScaleAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleAnimation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlendSpace1D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlendSpace,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpace1D_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n  * Allows multiple animations to be blended between based on input parameters\n  */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/BlendSpace1D.h" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace1D.h" },
		{ "ToolTip", "Allows multiple animations to be blended between based on input parameters" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bDisplayEditorVertically_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace1D.h" },
	};
#endif
	void Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bDisplayEditorVertically_SetBit(void* Obj)
	{
		((UBlendSpace1D*)Obj)->bDisplayEditorVertically_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bDisplayEditorVertically = { "bDisplayEditorVertically", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlendSpace1D), &Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bDisplayEditorVertically_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bDisplayEditorVertically_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bDisplayEditorVertically_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bScaleAnimation_MetaData[] = {
		{ "Category", "InputInterpolation" },
		{ "Comment", "/**\n\x09 * If you have input smoothing, whether to scale the animation speed. E.g. for locomotion animation, \n\x09 * the speed axis will scale the animation speed in order to make up the difference between the target \n\x09 * and the result of blending the samples.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace1D.h" },
		{ "ToolTip", "If you have input smoothing, whether to scale the animation speed. E.g. for locomotion animation,\nthe speed axis will scale the animation speed in order to make up the difference between the target\nand the result of blending the samples." },
	};
#endif
	void Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bScaleAnimation_SetBit(void* Obj)
	{
		((UBlendSpace1D*)Obj)->bScaleAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bScaleAnimation = { "bScaleAnimation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlendSpace1D), &Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bScaleAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bScaleAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bScaleAnimation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlendSpace1D_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bDisplayEditorVertically,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bScaleAnimation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlendSpace1D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlendSpace1D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlendSpace1D_Statics::ClassParams = {
		&UBlendSpace1D::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlendSpace1D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpace1D_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlendSpace1D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpace1D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlendSpace1D()
	{
		if (!Z_Registration_Info_UClass_UBlendSpace1D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlendSpace1D.OuterSingleton, Z_Construct_UClass_UBlendSpace1D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlendSpace1D.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UBlendSpace1D>()
	{
		return UBlendSpace1D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlendSpace1D);
	UBlendSpace1D::~UBlendSpace1D() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlendSpace1D, UBlendSpace1D::StaticClass, TEXT("UBlendSpace1D"), &Z_Registration_Info_UClass_UBlendSpace1D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlendSpace1D), 279466651U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h_4125082298(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace1D_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
