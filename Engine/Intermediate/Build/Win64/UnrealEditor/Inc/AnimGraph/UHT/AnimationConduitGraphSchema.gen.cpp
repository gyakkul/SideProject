// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationConduitGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationConduitGraphSchema() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationConduitGraphSchema();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationConduitGraphSchema_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UEdGraphSchema_K2();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimationConduitGraphSchema::StaticRegisterNativesUAnimationConduitGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationConduitGraphSchema);
	UClass* Z_Construct_UClass_UAnimationConduitGraphSchema_NoRegister()
	{
		return UAnimationConduitGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationConduitGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationConduitGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema_K2,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationConduitGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//@TODO: Should this derive from AnimationTransitionSchema (with appropriate suppression of state-based queries)\n" },
		{ "IncludePath", "AnimationConduitGraphSchema.h" },
		{ "ModuleRelativePath", "Public/AnimationConduitGraphSchema.h" },
		{ "ToolTip", "@TODO: Should this derive from AnimationTransitionSchema (with appropriate suppression of state-based queries)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationConduitGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationConduitGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationConduitGraphSchema_Statics::ClassParams = {
		&UAnimationConduitGraphSchema::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationConduitGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationConduitGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationConduitGraphSchema()
	{
		if (!Z_Registration_Info_UClass_UAnimationConduitGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationConduitGraphSchema.OuterSingleton, Z_Construct_UClass_UAnimationConduitGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationConduitGraphSchema.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimationConduitGraphSchema>()
	{
		return UAnimationConduitGraphSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationConduitGraphSchema);
	UAnimationConduitGraphSchema::~UAnimationConduitGraphSchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationConduitGraphSchema_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationConduitGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationConduitGraphSchema, UAnimationConduitGraphSchema::StaticClass, TEXT("UAnimationConduitGraphSchema"), &Z_Registration_Info_UClass_UAnimationConduitGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationConduitGraphSchema), 2082726741U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationConduitGraphSchema_h_736073587(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationConduitGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationConduitGraphSchema_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
