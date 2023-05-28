// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimComposite.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimComposite() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimComposite();
	ENGINE_API UClass* Z_Construct_UClass_UAnimComposite_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompositeBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimTrack();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimComposite::StaticRegisterNativesUAnimComposite()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimComposite);
	UClass* Z_Construct_UClass_UAnimComposite_NoRegister()
	{
		return UAnimComposite::StaticClass();
	}
	struct Z_Construct_UClass_UAnimComposite_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationTrack_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationTrack;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewBasePose_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewBasePose;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimComposite_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimCompositeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimComposite_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Animation Composites serve as a way to combine multiple animations together and treat them as a single unit.\n*/" },
		{ "HideCategories", "UObject" },
		{ "IncludePath", "Animation/AnimComposite.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimComposite.h" },
		{ "ToolTip", "Animation Composites serve as a way to combine multiple animations together and treat them as a single unit." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimComposite_Statics::NewProp_AnimationTrack_MetaData[] = {
		{ "Comment", "/** Serializable data that stores section/anim pairing **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimComposite.h" },
		{ "ToolTip", "Serializable data that stores section/anim pairing *" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimComposite_Statics::NewProp_AnimationTrack = { "AnimationTrack", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimComposite, AnimationTrack), Z_Construct_UScriptStruct_FAnimTrack, METADATA_PARAMS(Z_Construct_UClass_UAnimComposite_Statics::NewProp_AnimationTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimComposite_Statics::NewProp_AnimationTrack_MetaData)) }; // 2065631623
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimComposite_Statics::NewProp_PreviewBasePose_MetaData[] = {
		{ "Category", "AdditiveSettings" },
		{ "Comment", "/** Preview Base pose for additive BlendSpace **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimComposite.h" },
		{ "ToolTip", "Preview Base pose for additive BlendSpace *" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimComposite_Statics::NewProp_PreviewBasePose = { "PreviewBasePose", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimComposite, PreviewBasePose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimComposite_Statics::NewProp_PreviewBasePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimComposite_Statics::NewProp_PreviewBasePose_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimComposite_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimComposite_Statics::NewProp_AnimationTrack,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimComposite_Statics::NewProp_PreviewBasePose,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimComposite_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimComposite>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimComposite_Statics::ClassParams = {
		&UAnimComposite::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimComposite_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimComposite_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimComposite_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimComposite_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimComposite()
	{
		if (!Z_Registration_Info_UClass_UAnimComposite.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimComposite.OuterSingleton, Z_Construct_UClass_UAnimComposite_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimComposite.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimComposite>()
	{
		return UAnimComposite::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimComposite);
	UAnimComposite::~UAnimComposite() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimComposite_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimComposite_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimComposite, UAnimComposite::StaticClass, TEXT("UAnimComposite"), &Z_Registration_Info_UClass_UAnimComposite, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimComposite), 3608284049U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimComposite_h_2909993038(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimComposite_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimComposite_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
