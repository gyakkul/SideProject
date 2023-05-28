// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CopyBonesModifier.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCopyBonesModifier() {}
// Cross Module References
	ANIMATIONBLUEPRINTLIBRARY_API UEnum* Z_Construct_UEnum_AnimationBlueprintLibrary_EAnimPoseSpaces();
	ANIMATIONMODIFIERLIBRARY_API UClass* Z_Construct_UClass_UCopyBonesModifier();
	ANIMATIONMODIFIERLIBRARY_API UClass* Z_Construct_UClass_UCopyBonesModifier_NoRegister();
	ANIMATIONMODIFIERLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReferencePair();
	ANIMATIONMODIFIERS_API UClass* Z_Construct_UClass_UAnimationModifier();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	UPackage* Z_Construct_UPackage__Script_AnimationModifierLibrary();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoneReferencePair;
class UScriptStruct* FBoneReferencePair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoneReferencePair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoneReferencePair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneReferencePair, (UObject*)Z_Construct_UPackage__Script_AnimationModifierLibrary(), TEXT("BoneReferencePair"));
	}
	return Z_Registration_Info_UScriptStruct_BoneReferencePair.OuterSingleton;
}
template<> ANIMATIONMODIFIERLIBRARY_API UScriptStruct* StaticStruct<FBoneReferencePair>()
{
	return FBoneReferencePair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBoneReferencePair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetBone;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneReferencePair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CopyBonesModifier.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoneReferencePair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneReferencePair>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneReferencePair_Statics::NewProp_SourceBone_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Bone to get transform from  */" },
		{ "ModuleRelativePath", "Public/CopyBonesModifier.h" },
		{ "ToolTip", "Bone to get transform from" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoneReferencePair_Statics::NewProp_SourceBone = { "SourceBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoneReferencePair, SourceBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneReferencePair_Statics::NewProp_SourceBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneReferencePair_Statics::NewProp_SourceBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneReferencePair_Statics::NewProp_TargetBone_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Bone to update with the transform copied from SourceBone */" },
		{ "ModuleRelativePath", "Public/CopyBonesModifier.h" },
		{ "ToolTip", "Bone to update with the transform copied from SourceBone" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoneReferencePair_Statics::NewProp_TargetBone = { "TargetBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoneReferencePair, TargetBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneReferencePair_Statics::NewProp_TargetBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneReferencePair_Statics::NewProp_TargetBone_MetaData)) }; // 2906976723
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneReferencePair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneReferencePair_Statics::NewProp_SourceBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneReferencePair_Statics::NewProp_TargetBone,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneReferencePair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationModifierLibrary,
		nullptr,
		&NewStructOps,
		"BoneReferencePair",
		sizeof(FBoneReferencePair),
		alignof(FBoneReferencePair),
		Z_Construct_UScriptStruct_FBoneReferencePair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneReferencePair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneReferencePair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneReferencePair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoneReferencePair()
	{
		if (!Z_Registration_Info_UScriptStruct_BoneReferencePair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoneReferencePair.InnerSingleton, Z_Construct_UScriptStruct_FBoneReferencePair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BoneReferencePair.InnerSingleton;
	}
	void UCopyBonesModifier::StaticRegisterNativesUCopyBonesModifier()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCopyBonesModifier);
	UClass* Z_Construct_UClass_UCopyBonesModifier_NoRegister()
	{
		return UCopyBonesModifier::StaticClass();
	}
	struct Z_Construct_UClass_UCopyBonesModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BonePairs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonePairs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BonePairs;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BonePoseSpace_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonePoseSpace_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BonePoseSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCopyBonesModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimationModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationModifierLibrary,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCopyBonesModifier_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Animation Modifier to copy the transform of 'SourceBone(s)' to 'TargetBone(s)' */" },
		{ "IncludePath", "CopyBonesModifier.h" },
		{ "ModuleRelativePath", "Public/CopyBonesModifier.h" },
		{ "ToolTip", "Animation Modifier to copy the transform of 'SourceBone(s)' to 'TargetBone(s)'" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCopyBonesModifier_Statics::NewProp_BonePairs_Inner = { "BonePairs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBoneReferencePair, METADATA_PARAMS(nullptr, 0) }; // 3003971715
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCopyBonesModifier_Statics::NewProp_BonePairs_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Source and Target bone pairs */" },
		{ "ModuleRelativePath", "Public/CopyBonesModifier.h" },
		{ "ToolTip", "Source and Target bone pairs" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCopyBonesModifier_Statics::NewProp_BonePairs = { "BonePairs", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCopyBonesModifier, BonePairs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCopyBonesModifier_Statics::NewProp_BonePairs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCopyBonesModifier_Statics::NewProp_BonePairs_MetaData)) }; // 3003971715
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCopyBonesModifier_Statics::NewProp_BonePoseSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCopyBonesModifier_Statics::NewProp_BonePoseSpace_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Space to convert SourceBone transforms into before copying them to TargetBone */" },
		{ "ModuleRelativePath", "Public/CopyBonesModifier.h" },
		{ "ToolTip", "Space to convert SourceBone transforms into before copying them to TargetBone" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCopyBonesModifier_Statics::NewProp_BonePoseSpace = { "BonePoseSpace", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCopyBonesModifier, BonePoseSpace), Z_Construct_UEnum_AnimationBlueprintLibrary_EAnimPoseSpaces, METADATA_PARAMS(Z_Construct_UClass_UCopyBonesModifier_Statics::NewProp_BonePoseSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCopyBonesModifier_Statics::NewProp_BonePoseSpace_MetaData)) }; // 3063113257
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCopyBonesModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCopyBonesModifier_Statics::NewProp_BonePairs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCopyBonesModifier_Statics::NewProp_BonePairs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCopyBonesModifier_Statics::NewProp_BonePoseSpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCopyBonesModifier_Statics::NewProp_BonePoseSpace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCopyBonesModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCopyBonesModifier>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCopyBonesModifier_Statics::ClassParams = {
		&UCopyBonesModifier::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCopyBonesModifier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCopyBonesModifier_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UCopyBonesModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCopyBonesModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCopyBonesModifier()
	{
		if (!Z_Registration_Info_UClass_UCopyBonesModifier.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCopyBonesModifier.OuterSingleton, Z_Construct_UClass_UCopyBonesModifier_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCopyBonesModifier.OuterSingleton;
	}
	template<> ANIMATIONMODIFIERLIBRARY_API UClass* StaticClass<UCopyBonesModifier>()
	{
		return UCopyBonesModifier::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCopyBonesModifier);
	UCopyBonesModifier::~UCopyBonesModifier() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_CopyBonesModifier_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_CopyBonesModifier_h_Statics::ScriptStructInfo[] = {
		{ FBoneReferencePair::StaticStruct, Z_Construct_UScriptStruct_FBoneReferencePair_Statics::NewStructOps, TEXT("BoneReferencePair"), &Z_Registration_Info_UScriptStruct_BoneReferencePair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoneReferencePair), 3003971715U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_CopyBonesModifier_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCopyBonesModifier, UCopyBonesModifier::StaticClass, TEXT("UCopyBonesModifier"), &Z_Registration_Info_UClass_UCopyBonesModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCopyBonesModifier), 3197331048U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_CopyBonesModifier_h_975604335(TEXT("/Script/AnimationModifierLibrary"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_CopyBonesModifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_CopyBonesModifier_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_CopyBonesModifier_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_CopyBonesModifier_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
