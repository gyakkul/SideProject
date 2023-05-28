// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Filters/CurveEditorBakeFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveEditorBakeFilter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorBakeFilter();
	CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorBakeFilter_NoRegister();
	CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorFilterBase();
	UPackage* Z_Construct_UPackage__Script_CurveEditor();
// End Cross Module References
	void UCurveEditorBakeFilter::StaticRegisterNativesUCurveEditorBakeFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveEditorBakeFilter);
	UClass* Z_Construct_UClass_UCurveEditorBakeFilter_NoRegister()
	{
		return UCurveEditorBakeFilter::StaticClass();
	}
	struct Z_Construct_UClass_UCurveEditorBakeFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFrameBake_MetaData[];
#endif
		static void NewProp_bUseFrameBake_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFrameBake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakeIntervalInFrames_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BakeIntervalInFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakeIntervalInSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BakeIntervalInSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveEditorBakeFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCurveEditorFilterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CurveEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorBakeFilter_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Bake" },
		{ "IncludePath", "Filters/CurveEditorBakeFilter.h" },
		{ "ModuleRelativePath", "Public/Filters/CurveEditorBakeFilter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorBakeFilter_Statics::NewProp_bUseFrameBake_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If true we will use frame interval to bake, else will use seconds interval  */" },
		{ "ModuleRelativePath", "Public/Filters/CurveEditorBakeFilter.h" },
		{ "ToolTip", "If true we will use frame interval to bake, else will use seconds interval" },
	};
#endif
	void Z_Construct_UClass_UCurveEditorBakeFilter_Statics::NewProp_bUseFrameBake_SetBit(void* Obj)
	{
		((UCurveEditorBakeFilter*)Obj)->bUseFrameBake = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCurveEditorBakeFilter_Statics::NewProp_bUseFrameBake = { "bUseFrameBake", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCurveEditorBakeFilter), &Z_Construct_UClass_UCurveEditorBakeFilter_Statics::NewProp_bUseFrameBake_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCurveEditorBakeFilter_Statics::NewProp_bUseFrameBake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorBakeFilter_Statics::NewProp_bUseFrameBake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorBakeFilter_Statics::NewProp_BakeIntervalInFrames_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The interval (in display rate frames) between baked keys. Only used if bUseFrameBake is true. */" },
		{ "EditCondition", "bUseFrameBake" },
		{ "ModuleRelativePath", "Public/Filters/CurveEditorBakeFilter.h" },
		{ "ToolTip", "The interval (in display rate frames) between baked keys. Only used if bUseFrameBake is true." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurveEditorBakeFilter_Statics::NewProp_BakeIntervalInFrames = { "BakeIntervalInFrames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEditorBakeFilter, BakeIntervalInFrames), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UClass_UCurveEditorBakeFilter_Statics::NewProp_BakeIntervalInFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorBakeFilter_Statics::NewProp_BakeIntervalInFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorBakeFilter_Statics::NewProp_BakeIntervalInSeconds_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The interval (in seconds) between baked keys. Only used if bUseSnapRateForInterval is false. */" },
		{ "EditCondition", "!bUseFrameBake" },
		{ "ModuleRelativePath", "Public/Filters/CurveEditorBakeFilter.h" },
		{ "ToolTip", "The interval (in seconds) between baked keys. Only used if bUseSnapRateForInterval is false." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCurveEditorBakeFilter_Statics::NewProp_BakeIntervalInSeconds = { "BakeIntervalInSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEditorBakeFilter, BakeIntervalInSeconds), METADATA_PARAMS(Z_Construct_UClass_UCurveEditorBakeFilter_Statics::NewProp_BakeIntervalInSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorBakeFilter_Statics::NewProp_BakeIntervalInSeconds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveEditorBakeFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorBakeFilter_Statics::NewProp_bUseFrameBake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorBakeFilter_Statics::NewProp_BakeIntervalInFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorBakeFilter_Statics::NewProp_BakeIntervalInSeconds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveEditorBakeFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveEditorBakeFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveEditorBakeFilter_Statics::ClassParams = {
		&UCurveEditorBakeFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCurveEditorBakeFilter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorBakeFilter_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveEditorBakeFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorBakeFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveEditorBakeFilter()
	{
		if (!Z_Registration_Info_UClass_UCurveEditorBakeFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveEditorBakeFilter.OuterSingleton, Z_Construct_UClass_UCurveEditorBakeFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCurveEditorBakeFilter.OuterSingleton;
	}
	template<> CURVEEDITOR_API UClass* StaticClass<UCurveEditorBakeFilter>()
	{
		return UCurveEditorBakeFilter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveEditorBakeFilter);
	UCurveEditorBakeFilter::~UCurveEditorBakeFilter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorBakeFilter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorBakeFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCurveEditorBakeFilter, UCurveEditorBakeFilter::StaticClass, TEXT("UCurveEditorBakeFilter"), &Z_Registration_Info_UClass_UCurveEditorBakeFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveEditorBakeFilter), 2546961991U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorBakeFilter_h_2162386383(TEXT("/Script/CurveEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorBakeFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorBakeFilter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
