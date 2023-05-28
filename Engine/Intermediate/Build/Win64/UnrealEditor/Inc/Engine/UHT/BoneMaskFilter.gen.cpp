// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimData/BoneMaskFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoneMaskFilter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UBoneMaskFilter();
	ENGINE_API UClass* Z_Construct_UClass_UBoneMaskFilter_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchFilter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputBlendPose();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BranchFilter;
class UScriptStruct* FBranchFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BranchFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BranchFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBranchFilter, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BranchFilter"));
	}
	return Z_Registration_Info_UScriptStruct_BranchFilter.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBranchFilter>()
{
	return FBranchFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBranchFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendDepth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BlendDepth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBranchFilter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimData/BoneMaskFilter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBranchFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBranchFilter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBranchFilter_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Branch" },
		{ "Comment", "/** Bone Name to filter **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/BoneMaskFilter.h" },
		{ "ToolTip", "Bone Name to filter *" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBranchFilter_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBranchFilter, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBranchFilter_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchFilter_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBranchFilter_Statics::NewProp_BlendDepth_MetaData[] = {
		{ "Category", "Branch" },
		{ "Comment", "/** Blend Depth **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/BoneMaskFilter.h" },
		{ "ToolTip", "Blend Depth *" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBranchFilter_Statics::NewProp_BlendDepth = { "BlendDepth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBranchFilter, BlendDepth), METADATA_PARAMS(Z_Construct_UScriptStruct_FBranchFilter_Statics::NewProp_BlendDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchFilter_Statics::NewProp_BlendDepth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBranchFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBranchFilter_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBranchFilter_Statics::NewProp_BlendDepth,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBranchFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BranchFilter",
		sizeof(FBranchFilter),
		alignof(FBranchFilter),
		Z_Construct_UScriptStruct_FBranchFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBranchFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBranchFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_BranchFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BranchFilter.InnerSingleton, Z_Construct_UScriptStruct_FBranchFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BranchFilter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputBlendPose;
class UScriptStruct* FInputBlendPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputBlendPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputBlendPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputBlendPose, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InputBlendPose"));
	}
	return Z_Registration_Info_UScriptStruct_InputBlendPose.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputBlendPose>()
{
	return FInputBlendPose::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputBlendPose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_BranchFilters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BranchFilters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BranchFilters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputBlendPose_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimData/BoneMaskFilter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputBlendPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputBlendPose>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputBlendPose_Statics::NewProp_BranchFilters_Inner = { "BranchFilters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBranchFilter, METADATA_PARAMS(nullptr, 0) }; // 2411100265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputBlendPose_Statics::NewProp_BranchFilters_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/** Bone Name to filter **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/BoneMaskFilter.h" },
		{ "ToolTip", "Bone Name to filter *" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputBlendPose_Statics::NewProp_BranchFilters = { "BranchFilters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputBlendPose, BranchFilters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputBlendPose_Statics::NewProp_BranchFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputBlendPose_Statics::NewProp_BranchFilters_MetaData)) }; // 2411100265
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputBlendPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputBlendPose_Statics::NewProp_BranchFilters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputBlendPose_Statics::NewProp_BranchFilters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputBlendPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InputBlendPose",
		sizeof(FInputBlendPose),
		alignof(FInputBlendPose),
		Z_Construct_UScriptStruct_FInputBlendPose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputBlendPose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputBlendPose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputBlendPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputBlendPose()
	{
		if (!Z_Registration_Info_UScriptStruct_InputBlendPose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputBlendPose.InnerSingleton, Z_Construct_UScriptStruct_FInputBlendPose_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputBlendPose.InnerSingleton;
	}
	void UBoneMaskFilter::StaticRegisterNativesUBoneMaskFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoneMaskFilter);
	UClass* Z_Construct_UClass_UBoneMaskFilter_NoRegister()
	{
		return UBoneMaskFilter::StaticClass();
	}
	struct Z_Construct_UClass_UBoneMaskFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendPoses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendPoses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendPoses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoneMaskFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoneMaskFilter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimData/BoneMaskFilter.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/BoneMaskFilter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoneMaskFilter_Statics::NewProp_BlendPoses_Inner = { "BlendPoses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInputBlendPose, METADATA_PARAMS(nullptr, 0) }; // 2398008488
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoneMaskFilter_Statics::NewProp_BlendPoses_MetaData[] = {
		{ "Category", "BoneMask" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/BoneMaskFilter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBoneMaskFilter_Statics::NewProp_BlendPoses = { "BlendPoses", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBoneMaskFilter, BlendPoses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBoneMaskFilter_Statics::NewProp_BlendPoses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoneMaskFilter_Statics::NewProp_BlendPoses_MetaData)) }; // 2398008488
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBoneMaskFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoneMaskFilter_Statics::NewProp_BlendPoses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoneMaskFilter_Statics::NewProp_BlendPoses,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoneMaskFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoneMaskFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoneMaskFilter_Statics::ClassParams = {
		&UBoneMaskFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBoneMaskFilter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBoneMaskFilter_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBoneMaskFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBoneMaskFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoneMaskFilter()
	{
		if (!Z_Registration_Info_UClass_UBoneMaskFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoneMaskFilter.OuterSingleton, Z_Construct_UClass_UBoneMaskFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBoneMaskFilter.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UBoneMaskFilter>()
	{
		return UBoneMaskFilter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoneMaskFilter);
	UBoneMaskFilter::~UBoneMaskFilter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_BoneMaskFilter_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_BoneMaskFilter_h_Statics::ScriptStructInfo[] = {
		{ FBranchFilter::StaticStruct, Z_Construct_UScriptStruct_FBranchFilter_Statics::NewStructOps, TEXT("BranchFilter"), &Z_Registration_Info_UScriptStruct_BranchFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBranchFilter), 2411100265U) },
		{ FInputBlendPose::StaticStruct, Z_Construct_UScriptStruct_FInputBlendPose_Statics::NewStructOps, TEXT("InputBlendPose"), &Z_Registration_Info_UScriptStruct_InputBlendPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputBlendPose), 2398008488U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_BoneMaskFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBoneMaskFilter, UBoneMaskFilter::StaticClass, TEXT("UBoneMaskFilter"), &Z_Registration_Info_UClass_UBoneMaskFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoneMaskFilter), 3715629052U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_BoneMaskFilter_h_2165050737(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_BoneMaskFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_BoneMaskFilter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_BoneMaskFilter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_BoneMaskFilter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
