// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/Tasks/BTTask_MakeNoise.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_MakeNoise() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_MakeNoise();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_MakeNoise_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTTask_MakeNoise::StaticRegisterNativesUBTTask_MakeNoise()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_MakeNoise);
	UClass* Z_Construct_UClass_UBTTask_MakeNoise_NoRegister()
	{
		return UBTTask_MakeNoise::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_MakeNoise_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Loudnes_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Loudnes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_MakeNoise_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_MakeNoise_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Make Noise task node.\n * A task node that calls MakeNoise() on this Pawn when executed.\n */" },
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_MakeNoise.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MakeNoise.h" },
		{ "ToolTip", "Make Noise task node.\nA task node that calls MakeNoise() on this Pawn when executed." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_MakeNoise_Statics::NewProp_Loudnes_MetaData[] = {
		{ "Category", "Node" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Loudnes of generated noise */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MakeNoise.h" },
		{ "ToolTip", "Loudnes of generated noise" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_MakeNoise_Statics::NewProp_Loudnes = { "Loudnes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_MakeNoise, Loudnes), METADATA_PARAMS(Z_Construct_UClass_UBTTask_MakeNoise_Statics::NewProp_Loudnes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MakeNoise_Statics::NewProp_Loudnes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_MakeNoise_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MakeNoise_Statics::NewProp_Loudnes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_MakeNoise_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_MakeNoise>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_MakeNoise_Statics::ClassParams = {
		&UBTTask_MakeNoise::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_MakeNoise_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MakeNoise_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_MakeNoise_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MakeNoise_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_MakeNoise()
	{
		if (!Z_Registration_Info_UClass_UBTTask_MakeNoise.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_MakeNoise.OuterSingleton, Z_Construct_UClass_UBTTask_MakeNoise_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_MakeNoise.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBTTask_MakeNoise>()
	{
		return UBTTask_MakeNoise::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_MakeNoise);
	UBTTask_MakeNoise::~UBTTask_MakeNoise() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MakeNoise_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MakeNoise_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_MakeNoise, UBTTask_MakeNoise::StaticClass, TEXT("UBTTask_MakeNoise"), &Z_Registration_Info_UClass_UBTTask_MakeNoise, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_MakeNoise), 2854927150U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MakeNoise_h_800373697(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MakeNoise_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_MakeNoise_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
