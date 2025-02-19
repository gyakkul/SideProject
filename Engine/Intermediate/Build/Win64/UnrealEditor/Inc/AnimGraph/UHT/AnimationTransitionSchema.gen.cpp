// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationTransitionSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationTransitionSchema() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationTransitionSchema();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationTransitionSchema_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UEdGraphSchema_K2();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimationTransitionSchema::StaticRegisterNativesUAnimationTransitionSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationTransitionSchema);
	UClass* Z_Construct_UClass_UAnimationTransitionSchema_NoRegister()
	{
		return UAnimationTransitionSchema::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationTransitionSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationTransitionSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema_K2,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationTransitionSchema_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// This class is the schema for transition rule graphs in animation state machines\n" },
		{ "IncludePath", "AnimationTransitionSchema.h" },
		{ "ModuleRelativePath", "Public/AnimationTransitionSchema.h" },
		{ "ToolTip", "This class is the schema for transition rule graphs in animation state machines" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationTransitionSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationTransitionSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationTransitionSchema_Statics::ClassParams = {
		&UAnimationTransitionSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimationTransitionSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationTransitionSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationTransitionSchema()
	{
		if (!Z_Registration_Info_UClass_UAnimationTransitionSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationTransitionSchema.OuterSingleton, Z_Construct_UClass_UAnimationTransitionSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationTransitionSchema.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimationTransitionSchema>()
	{
		return UAnimationTransitionSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationTransitionSchema);
	UAnimationTransitionSchema::~UAnimationTransitionSchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationTransitionSchema_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationTransitionSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationTransitionSchema, UAnimationTransitionSchema::StaticClass, TEXT("UAnimationTransitionSchema"), &Z_Registration_Info_UClass_UAnimationTransitionSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationTransitionSchema), 169266856U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationTransitionSchema_h_1571299188(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationTransitionSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationTransitionSchema_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
