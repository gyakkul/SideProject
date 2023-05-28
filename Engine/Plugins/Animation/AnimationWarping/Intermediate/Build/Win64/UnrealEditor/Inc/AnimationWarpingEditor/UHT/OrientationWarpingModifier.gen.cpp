// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationModifiers/OrientationWarpingModifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrientationWarpingModifier() {}
// Cross Module References
	ANIMATIONMODIFIERS_API UClass* Z_Construct_UClass_UAnimationModifier();
	ANIMATIONWARPINGEDITOR_API UClass* Z_Construct_UClass_UOrientationWarpingModifier();
	ANIMATIONWARPINGEDITOR_API UClass* Z_Construct_UClass_UOrientationWarpingModifier_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnimationWarpingEditor();
// End Cross Module References
	void UOrientationWarpingModifier::StaticRegisterNativesUOrientationWarpingModifier()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOrientationWarpingModifier);
	UClass* Z_Construct_UClass_UOrientationWarpingModifier_NoRegister()
	{
		return UOrientationWarpingModifier::StaticClass();
	}
	struct Z_Construct_UClass_UOrientationWarpingModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableWarpingCurveName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EnableWarpingCurveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableOffsetCurveName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EnableOffsetCurveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendInTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendOutTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StopSpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StopSpeedThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOrientationWarpingModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimationModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationWarpingEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrientationWarpingModifier_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//@TODO: Add comments/tooltips.\n" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "AnimationModifiers/OrientationWarpingModifier.h" },
		{ "ModuleRelativePath", "Public/AnimationModifiers/OrientationWarpingModifier.h" },
		{ "ToolTip", "@TODO: Add comments/tooltips." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrientationWarpingModifier_Statics::NewProp_EnableWarpingCurveName_MetaData[] = {
		{ "Category", "Experimental" },
		{ "ModuleRelativePath", "Public/AnimationModifiers/OrientationWarpingModifier.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOrientationWarpingModifier_Statics::NewProp_EnableWarpingCurveName = { "EnableWarpingCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOrientationWarpingModifier, EnableWarpingCurveName), METADATA_PARAMS(Z_Construct_UClass_UOrientationWarpingModifier_Statics::NewProp_EnableWarpingCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOrientationWarpingModifier_Statics::NewProp_EnableWarpingCurveName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrientationWarpingModifier_Statics::NewProp_EnableOffsetCurveName_MetaData[] = {
		{ "Category", "Experimental" },
		{ "ModuleRelativePath", "Public/AnimationModifiers/OrientationWarpingModifier.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOrientationWarpingModifier_Statics::NewProp_EnableOffsetCurveName = { "EnableOffsetCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOrientationWarpingModifier, EnableOffsetCurveName), METADATA_PARAMS(Z_Construct_UClass_UOrientationWarpingModifier_Statics::NewProp_EnableOffsetCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOrientationWarpingModifier_Statics::NewProp_EnableOffsetCurveName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrientationWarpingModifier_Statics::NewProp_BlendInTime_MetaData[] = {
		{ "Category", "Experimental" },
		{ "ModuleRelativePath", "Public/AnimationModifiers/OrientationWarpingModifier.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOrientationWarpingModifier_Statics::NewProp_BlendInTime = { "BlendInTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOrientationWarpingModifier, BlendInTime), METADATA_PARAMS(Z_Construct_UClass_UOrientationWarpingModifier_Statics::NewProp_BlendInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOrientationWarpingModifier_Statics::NewProp_BlendInTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrientationWarpingModifier_Statics::NewProp_BlendOutTime_MetaData[] = {
		{ "Category", "Experimental" },
		{ "ModuleRelativePath", "Public/AnimationModifiers/OrientationWarpingModifier.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOrientationWarpingModifier_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOrientationWarpingModifier, BlendOutTime), METADATA_PARAMS(Z_Construct_UClass_UOrientationWarpingModifier_Statics::NewProp_BlendOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOrientationWarpingModifier_Statics::NewProp_BlendOutTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrientationWarpingModifier_Statics::NewProp_StopSpeedThreshold_MetaData[] = {
		{ "Category", "Experimental" },
		{ "ModuleRelativePath", "Public/AnimationModifiers/OrientationWarpingModifier.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOrientationWarpingModifier_Statics::NewProp_StopSpeedThreshold = { "StopSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOrientationWarpingModifier, StopSpeedThreshold), METADATA_PARAMS(Z_Construct_UClass_UOrientationWarpingModifier_Statics::NewProp_StopSpeedThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOrientationWarpingModifier_Statics::NewProp_StopSpeedThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrientationWarpingModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrientationWarpingModifier_Statics::NewProp_EnableWarpingCurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrientationWarpingModifier_Statics::NewProp_EnableOffsetCurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrientationWarpingModifier_Statics::NewProp_BlendInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrientationWarpingModifier_Statics::NewProp_BlendOutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrientationWarpingModifier_Statics::NewProp_StopSpeedThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOrientationWarpingModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrientationWarpingModifier>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrientationWarpingModifier_Statics::ClassParams = {
		&UOrientationWarpingModifier::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOrientationWarpingModifier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOrientationWarpingModifier_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UOrientationWarpingModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOrientationWarpingModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOrientationWarpingModifier()
	{
		if (!Z_Registration_Info_UClass_UOrientationWarpingModifier.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrientationWarpingModifier.OuterSingleton, Z_Construct_UClass_UOrientationWarpingModifier_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOrientationWarpingModifier.OuterSingleton;
	}
	template<> ANIMATIONWARPINGEDITOR_API UClass* StaticClass<UOrientationWarpingModifier>()
	{
		return UOrientationWarpingModifier::StaticClass();
	}
	UOrientationWarpingModifier::UOrientationWarpingModifier() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOrientationWarpingModifier);
	UOrientationWarpingModifier::~UOrientationWarpingModifier() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimationModifiers_OrientationWarpingModifier_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimationModifiers_OrientationWarpingModifier_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOrientationWarpingModifier, UOrientationWarpingModifier::StaticClass, TEXT("UOrientationWarpingModifier"), &Z_Registration_Info_UClass_UOrientationWarpingModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrientationWarpingModifier), 2541703111U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimationModifiers_OrientationWarpingModifier_h_1298842676(TEXT("/Script/AnimationWarpingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimationModifiers_OrientationWarpingModifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimationModifiers_OrientationWarpingModifier_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
