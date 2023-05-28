// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationModifiersAssetUserData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationModifiersAssetUserData() {}
// Cross Module References
	ANIMATIONMODIFIERS_API UClass* Z_Construct_UClass_UAnimationModifier_NoRegister();
	ANIMATIONMODIFIERS_API UClass* Z_Construct_UClass_UAnimationModifiersAssetUserData();
	ANIMATIONMODIFIERS_API UClass* Z_Construct_UClass_UAnimationModifiersAssetUserData_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
	UPackage* Z_Construct_UPackage__Script_AnimationModifiers();
// End Cross Module References
	void UAnimationModifiersAssetUserData::StaticRegisterNativesUAnimationModifiersAssetUserData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationModifiersAssetUserData);
	UClass* Z_Construct_UClass_UAnimationModifiersAssetUserData_NoRegister()
	{
		return UAnimationModifiersAssetUserData::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimationModifierInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationModifierInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimationModifierInstances;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AppliedModifiers_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AppliedModifiers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppliedModifiers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AppliedModifiers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationModifiers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Asset user data which can be added to a USkeleton or UAnimSequence to keep track of Animation Modifiers */" },
		{ "IncludePath", "AnimationModifiersAssetUserData.h" },
		{ "ModuleRelativePath", "Public/AnimationModifiersAssetUserData.h" },
		{ "ToolTip", "Asset user data which can be added to a USkeleton or UAnimSequence to keep track of Animation Modifiers" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::NewProp_AnimationModifierInstances_Inner = { "AnimationModifierInstances", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimationModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::NewProp_AnimationModifierInstances_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimationModifiersAssetUserData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::NewProp_AnimationModifierInstances = { "AnimationModifierInstances", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationModifiersAssetUserData, AnimationModifierInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::NewProp_AnimationModifierInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::NewProp_AnimationModifierInstances_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::NewProp_AppliedModifiers_ValueProp = { "AppliedModifiers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UAnimationModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::NewProp_AppliedModifiers_Key_KeyProp = { "AppliedModifiers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::NewProp_AppliedModifiers_MetaData[] = {
		{ "Comment", "// Animation modifiers APPLIED on the owning animation sequence\n// \n// - Key = Modifier in AnimationModifierInstances of owning animation sequence or skeleton\n// - Value = Modifier instance applied\n// \n// Applied modifier instances stores (Properties, RevisionGuid, ...) at Apply Time\n// Which are not visible or editable from user interface\n// \n// In contrast, modifiers in AnimationModifierInstances \n// are objects displayed at the Animation Data Modifier window\n// Where Properties are displayed for user editing anytime\n// \n// Note, Modifier on Skeleton (MoS) applied instances are stored on each \n// animation sequence's asset user data, instead of the skeleton's\n// this design is important to enable applied modifiers can be reverted for each sequence\n// also ensure applying MoS (when [re]importing animation) will not affect the skeleton asset\n//\n// The only time MoS stores an applied instance here is upgrading from previous version\n// The \"UAnimationModifier::PreviouslyAppliedModifier_DEPRECATED\" data will be migrated here\n// To support proper revert for them\n// For more compatibility handling, check UAnimationModifier::PostLoad() and GetAppliedModifier() \n" },
		{ "ModuleRelativePath", "Public/AnimationModifiersAssetUserData.h" },
		{ "ToolTip", "Animation modifiers APPLIED on the owning animation sequence\n\n- Key = Modifier in AnimationModifierInstances of owning animation sequence or skeleton\n- Value = Modifier instance applied\n\nApplied modifier instances stores (Properties, RevisionGuid, ...) at Apply Time\nWhich are not visible or editable from user interface\n\nIn contrast, modifiers in AnimationModifierInstances\nare objects displayed at the Animation Data Modifier window\nWhere Properties are displayed for user editing anytime\n\nNote, Modifier on Skeleton (MoS) applied instances are stored on each\nanimation sequence's asset user data, instead of the skeleton's\nthis design is important to enable applied modifiers can be reverted for each sequence\nalso ensure applying MoS (when [re]importing animation) will not affect the skeleton asset\n\nThe only time MoS stores an applied instance here is upgrading from previous version\nThe \"UAnimationModifier::PreviouslyAppliedModifier_DEPRECATED\" data will be migrated here\nTo support proper revert for them\nFor more compatibility handling, check UAnimationModifier::PostLoad() and GetAppliedModifier()" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::NewProp_AppliedModifiers = { "AppliedModifiers", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationModifiersAssetUserData, AppliedModifiers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::NewProp_AppliedModifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::NewProp_AppliedModifiers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::NewProp_AnimationModifierInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::NewProp_AnimationModifierInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::NewProp_AppliedModifiers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::NewProp_AppliedModifiers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::NewProp_AppliedModifiers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationModifiersAssetUserData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::ClassParams = {
		&UAnimationModifiersAssetUserData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationModifiersAssetUserData()
	{
		if (!Z_Registration_Info_UClass_UAnimationModifiersAssetUserData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationModifiersAssetUserData.OuterSingleton, Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationModifiersAssetUserData.OuterSingleton;
	}
	template<> ANIMATIONMODIFIERS_API UClass* StaticClass<UAnimationModifiersAssetUserData>()
	{
		return UAnimationModifiersAssetUserData::StaticClass();
	}
	UAnimationModifiersAssetUserData::UAnimationModifiersAssetUserData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationModifiersAssetUserData);
	UAnimationModifiersAssetUserData::~UAnimationModifiersAssetUserData() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimationModifiersAssetUserData)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifiersAssetUserData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifiersAssetUserData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationModifiersAssetUserData, UAnimationModifiersAssetUserData::StaticClass, TEXT("UAnimationModifiersAssetUserData"), &Z_Registration_Info_UClass_UAnimationModifiersAssetUserData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationModifiersAssetUserData), 2803234193U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifiersAssetUserData_h_1905994621(TEXT("/Script/AnimationModifiers"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifiersAssetUserData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifiersAssetUserData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
