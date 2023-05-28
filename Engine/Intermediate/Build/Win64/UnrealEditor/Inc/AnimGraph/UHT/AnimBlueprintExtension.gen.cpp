// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimBlueprintExtension.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBlueprintExtension() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimBlueprintExtension();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimBlueprintExtension_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintExtension();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimBlueprintExtension::StaticRegisterNativesUAnimBlueprintExtension()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimBlueprintExtension);
	UClass* Z_Construct_UClass_UAnimBlueprintExtension_NoRegister()
	{
		return UAnimBlueprintExtension::StaticClass();
	}
	struct Z_Construct_UClass_UAnimBlueprintExtension_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimBlueprintExtension_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintExtension,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintExtension_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Extension that allows per-system data to be held on the anim blueprint, and per-system logic to be executed during compilation */" },
		{ "IncludePath", "AnimBlueprintExtension.h" },
		{ "ModuleRelativePath", "Public/AnimBlueprintExtension.h" },
		{ "ToolTip", "Extension that allows per-system data to be held on the anim blueprint, and per-system logic to be executed during compilation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimBlueprintExtension_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBlueprintExtension>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimBlueprintExtension_Statics::ClassParams = {
		&UAnimBlueprintExtension::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintExtension_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintExtension_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimBlueprintExtension()
	{
		if (!Z_Registration_Info_UClass_UAnimBlueprintExtension.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimBlueprintExtension.OuterSingleton, Z_Construct_UClass_UAnimBlueprintExtension_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimBlueprintExtension.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimBlueprintExtension>()
	{
		return UAnimBlueprintExtension::StaticClass();
	}
	UAnimBlueprintExtension::UAnimBlueprintExtension(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBlueprintExtension);
	UAnimBlueprintExtension::~UAnimBlueprintExtension() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimBlueprintExtension_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimBlueprintExtension_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimBlueprintExtension, UAnimBlueprintExtension::StaticClass, TEXT("UAnimBlueprintExtension"), &Z_Registration_Info_UClass_UAnimBlueprintExtension, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimBlueprintExtension), 1974808590U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimBlueprintExtension_h_1961952100(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimBlueprintExtension_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimBlueprintExtension_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
