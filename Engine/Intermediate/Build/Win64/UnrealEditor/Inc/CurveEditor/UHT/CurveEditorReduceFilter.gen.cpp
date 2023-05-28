// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Filters/CurveEditorReduceFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveEditorReduceFilter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorFilterBase();
	CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorReduceFilter();
	CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorReduceFilter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CurveEditor();
// End Cross Module References
	void UCurveEditorReduceFilter::StaticRegisterNativesUCurveEditorReduceFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveEditorReduceFilter);
	UClass* Z_Construct_UClass_UCurveEditorReduceFilter_NoRegister()
	{
		return UCurveEditorReduceFilter::StaticClass();
	}
	struct Z_Construct_UClass_UCurveEditorReduceFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTryRemoveUserSetTangentKeys_MetaData[];
#endif
		static void NewProp_bTryRemoveUserSetTangentKeys_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTryRemoveUserSetTangentKeys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SampleRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveEditorReduceFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCurveEditorFilterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CurveEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorReduceFilter_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Simplify" },
		{ "IncludePath", "Filters/CurveEditorReduceFilter.h" },
		{ "ModuleRelativePath", "Public/Filters/CurveEditorReduceFilter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorReduceFilter_Statics::NewProp_Tolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Minimum change in values required for a key to be considered distinct enough to keep. */" },
		{ "ModuleRelativePath", "Public/Filters/CurveEditorReduceFilter.h" },
		{ "ToolTip", "Minimum change in values required for a key to be considered distinct enough to keep." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCurveEditorReduceFilter_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEditorReduceFilter, Tolerance), METADATA_PARAMS(Z_Construct_UClass_UCurveEditorReduceFilter_Statics::NewProp_Tolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorReduceFilter_Statics::NewProp_Tolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorReduceFilter_Statics::NewProp_bTryRemoveUserSetTangentKeys_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Flag whether or not to use SampleRate for sampling between evaluated keys, which allows for removing user-tangent keys. */" },
		{ "ModuleRelativePath", "Public/Filters/CurveEditorReduceFilter.h" },
		{ "ToolTip", "Flag whether or not to use SampleRate for sampling between evaluated keys, which allows for removing user-tangent keys." },
	};
#endif
	void Z_Construct_UClass_UCurveEditorReduceFilter_Statics::NewProp_bTryRemoveUserSetTangentKeys_SetBit(void* Obj)
	{
		((UCurveEditorReduceFilter*)Obj)->bTryRemoveUserSetTangentKeys = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCurveEditorReduceFilter_Statics::NewProp_bTryRemoveUserSetTangentKeys = { "bTryRemoveUserSetTangentKeys", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCurveEditorReduceFilter), &Z_Construct_UClass_UCurveEditorReduceFilter_Statics::NewProp_bTryRemoveUserSetTangentKeys_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCurveEditorReduceFilter_Statics::NewProp_bTryRemoveUserSetTangentKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorReduceFilter_Statics::NewProp_bTryRemoveUserSetTangentKeys_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorReduceFilter_Statics::NewProp_SampleRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Rate at which the curve should be sampled to compare against value tolerance. */" },
		{ "EditCondition", "bTryRemoveUserSetTangentKeys" },
		{ "ModuleRelativePath", "Public/Filters/CurveEditorReduceFilter.h" },
		{ "ToolTip", "Rate at which the curve should be sampled to compare against value tolerance." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurveEditorReduceFilter_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEditorReduceFilter, SampleRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_UCurveEditorReduceFilter_Statics::NewProp_SampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorReduceFilter_Statics::NewProp_SampleRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveEditorReduceFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorReduceFilter_Statics::NewProp_Tolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorReduceFilter_Statics::NewProp_bTryRemoveUserSetTangentKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorReduceFilter_Statics::NewProp_SampleRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveEditorReduceFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveEditorReduceFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveEditorReduceFilter_Statics::ClassParams = {
		&UCurveEditorReduceFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCurveEditorReduceFilter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorReduceFilter_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveEditorReduceFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorReduceFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveEditorReduceFilter()
	{
		if (!Z_Registration_Info_UClass_UCurveEditorReduceFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveEditorReduceFilter.OuterSingleton, Z_Construct_UClass_UCurveEditorReduceFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCurveEditorReduceFilter.OuterSingleton;
	}
	template<> CURVEEDITOR_API UClass* StaticClass<UCurveEditorReduceFilter>()
	{
		return UCurveEditorReduceFilter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveEditorReduceFilter);
	UCurveEditorReduceFilter::~UCurveEditorReduceFilter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorReduceFilter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorReduceFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCurveEditorReduceFilter, UCurveEditorReduceFilter::StaticClass, TEXT("UCurveEditorReduceFilter"), &Z_Registration_Info_UClass_UCurveEditorReduceFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveEditorReduceFilter), 3458508627U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorReduceFilter_h_2350934704(TEXT("/Script/CurveEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorReduceFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorReduceFilter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
