// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AnimBlueprintExtension_Attributes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBlueprintExtension_Attributes() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimBlueprintExtension();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimBlueprintExtension_Attributes();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimBlueprintExtension_Attributes_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimBlueprintExtension_Attributes::StaticRegisterNativesUAnimBlueprintExtension_Attributes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimBlueprintExtension_Attributes);
	UClass* Z_Construct_UClass_UAnimBlueprintExtension_Attributes_NoRegister()
	{
		return UAnimBlueprintExtension_Attributes::StaticClass();
	}
	struct Z_Construct_UClass_UAnimBlueprintExtension_Attributes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimBlueprintExtension_Attributes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimBlueprintExtension,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintExtension_Attributes_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Extension to propogate attributes from outputs to inputs and to build a static debug record of their path through the graph\n" },
		{ "IncludePath", "AnimBlueprintExtension_Attributes.h" },
		{ "ModuleRelativePath", "Private/AnimBlueprintExtension_Attributes.h" },
		{ "ToolTip", "Extension to propogate attributes from outputs to inputs and to build a static debug record of their path through the graph" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimBlueprintExtension_Attributes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBlueprintExtension_Attributes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimBlueprintExtension_Attributes_Statics::ClassParams = {
		&UAnimBlueprintExtension_Attributes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintExtension_Attributes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintExtension_Attributes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimBlueprintExtension_Attributes()
	{
		if (!Z_Registration_Info_UClass_UAnimBlueprintExtension_Attributes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimBlueprintExtension_Attributes.OuterSingleton, Z_Construct_UClass_UAnimBlueprintExtension_Attributes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimBlueprintExtension_Attributes.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimBlueprintExtension_Attributes>()
	{
		return UAnimBlueprintExtension_Attributes::StaticClass();
	}
	UAnimBlueprintExtension_Attributes::UAnimBlueprintExtension_Attributes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBlueprintExtension_Attributes);
	UAnimBlueprintExtension_Attributes::~UAnimBlueprintExtension_Attributes() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Private_AnimBlueprintExtension_Attributes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Private_AnimBlueprintExtension_Attributes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimBlueprintExtension_Attributes, UAnimBlueprintExtension_Attributes::StaticClass, TEXT("UAnimBlueprintExtension_Attributes"), &Z_Registration_Info_UClass_UAnimBlueprintExtension_Attributes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimBlueprintExtension_Attributes), 1752128279U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Private_AnimBlueprintExtension_Attributes_h_297741408(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Private_AnimBlueprintExtension_Attributes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Private_AnimBlueprintExtension_Attributes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
