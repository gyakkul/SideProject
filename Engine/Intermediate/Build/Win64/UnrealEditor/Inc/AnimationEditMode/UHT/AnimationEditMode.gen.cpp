// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationEditMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationEditMode() {}
// Cross Module References
	ANIMATIONEDITMODE_API UClass* Z_Construct_UClass_UAnimationEditContext_NoRegister();
	ANIMATIONEDITMODE_API UClass* Z_Construct_UClass_UAnimationEditModeContext();
	ANIMATIONEDITMODE_API UClass* Z_Construct_UClass_UAnimationEditModeContext_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AnimationEditMode();
// End Cross Module References
	void UAnimationEditModeContext::StaticRegisterNativesUAnimationEditModeContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationEditModeContext);
	UClass* Z_Construct_UClass_UAnimationEditModeContext_NoRegister()
	{
		return UAnimationEditModeContext::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationEditModeContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationEditModeContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationEditMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationEditModeContext_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""A compatibility context object to support IPersonaEditMode-based code. It simply calls into a different\n *\x09IAnimationEditContext in its implementations.\n */" },
		{ "IncludePath", "AnimationEditMode.h" },
		{ "ModuleRelativePath", "Public/AnimationEditMode.h" },
		{ "ToolTip", "A compatibility context object to support IPersonaEditMode-based code. It simply calls into a different\nIAnimationEditContext in its implementations." },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimationEditModeContext_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAnimationEditContext_NoRegister, (int32)VTABLE_OFFSET(UAnimationEditModeContext, IAnimationEditContext), false },  // 2333895950
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationEditModeContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationEditModeContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationEditModeContext_Statics::ClassParams = {
		&UAnimationEditModeContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationEditModeContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationEditModeContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationEditModeContext()
	{
		if (!Z_Registration_Info_UClass_UAnimationEditModeContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationEditModeContext.OuterSingleton, Z_Construct_UClass_UAnimationEditModeContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationEditModeContext.OuterSingleton;
	}
	template<> ANIMATIONEDITMODE_API UClass* StaticClass<UAnimationEditModeContext>()
	{
		return UAnimationEditModeContext::StaticClass();
	}
	UAnimationEditModeContext::UAnimationEditModeContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationEditModeContext);
	UAnimationEditModeContext::~UAnimationEditModeContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationEditModeContext, UAnimationEditModeContext::StaticClass, TEXT("UAnimationEditModeContext"), &Z_Registration_Info_UClass_UAnimationEditModeContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationEditModeContext), 1080714850U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditMode_h_2328073746(TEXT("/Script/AnimationEditMode"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
