// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReOrientRootBoneModifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReOrientRootBoneModifier() {}
// Cross Module References
	ANIMATIONMODIFIERLIBRARY_API UClass* Z_Construct_UClass_UReOrientRootBoneModifier();
	ANIMATIONMODIFIERLIBRARY_API UClass* Z_Construct_UClass_UReOrientRootBoneModifier_NoRegister();
	ANIMATIONMODIFIERS_API UClass* Z_Construct_UClass_UAnimationModifier();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	UPackage* Z_Construct_UPackage__Script_AnimationModifierLibrary();
// End Cross Module References
	void UReOrientRootBoneModifier::StaticRegisterNativesUReOrientRootBoneModifier()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReOrientRootBoneModifier);
	UClass* Z_Construct_UClass_UReOrientRootBoneModifier_NoRegister()
	{
		return UReOrientRootBoneModifier::StaticClass();
	}
	struct Z_Construct_UClass_UReOrientRootBoneModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReOrientRootBoneModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimationModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationModifierLibrary,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReOrientRootBoneModifier_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Reorient root bone in the animation while maintaining mesh position and rotation */" },
		{ "IncludePath", "ReOrientRootBoneModifier.h" },
		{ "ModuleRelativePath", "Public/ReOrientRootBoneModifier.h" },
		{ "ToolTip", "Reorient root bone in the animation while maintaining mesh position and rotation" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReOrientRootBoneModifier_Statics::NewProp_Rotator_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Rotation to apply to the root */" },
		{ "ModuleRelativePath", "Public/ReOrientRootBoneModifier.h" },
		{ "ToolTip", "Rotation to apply to the root" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReOrientRootBoneModifier_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReOrientRootBoneModifier, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UReOrientRootBoneModifier_Statics::NewProp_Rotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReOrientRootBoneModifier_Statics::NewProp_Rotator_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReOrientRootBoneModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReOrientRootBoneModifier_Statics::NewProp_Rotator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReOrientRootBoneModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReOrientRootBoneModifier>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReOrientRootBoneModifier_Statics::ClassParams = {
		&UReOrientRootBoneModifier::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReOrientRootBoneModifier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReOrientRootBoneModifier_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UReOrientRootBoneModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReOrientRootBoneModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReOrientRootBoneModifier()
	{
		if (!Z_Registration_Info_UClass_UReOrientRootBoneModifier.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReOrientRootBoneModifier.OuterSingleton, Z_Construct_UClass_UReOrientRootBoneModifier_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReOrientRootBoneModifier.OuterSingleton;
	}
	template<> ANIMATIONMODIFIERLIBRARY_API UClass* StaticClass<UReOrientRootBoneModifier>()
	{
		return UReOrientRootBoneModifier::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReOrientRootBoneModifier);
	UReOrientRootBoneModifier::~UReOrientRootBoneModifier() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_ReOrientRootBoneModifier_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_ReOrientRootBoneModifier_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReOrientRootBoneModifier, UReOrientRootBoneModifier::StaticClass, TEXT("UReOrientRootBoneModifier"), &Z_Registration_Info_UClass_UReOrientRootBoneModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReOrientRootBoneModifier), 3773688528U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_ReOrientRootBoneModifier_h_4063244489(TEXT("/Script/AnimationModifierLibrary"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_ReOrientRootBoneModifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_ReOrientRootBoneModifier_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
