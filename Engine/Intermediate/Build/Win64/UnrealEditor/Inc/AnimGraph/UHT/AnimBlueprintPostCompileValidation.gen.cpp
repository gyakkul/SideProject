// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimBlueprintPostCompileValidation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBlueprintPostCompileValidation() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimBlueprintPostCompileValidation();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimBlueprintPostCompileValidation_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimBlueprintPostCompileValidation::StaticRegisterNativesUAnimBlueprintPostCompileValidation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimBlueprintPostCompileValidation);
	UClass* Z_Construct_UClass_UAnimBlueprintPostCompileValidation_NoRegister()
	{
		return UAnimBlueprintPostCompileValidation::StaticClass();
	}
	struct Z_Construct_UClass_UAnimBlueprintPostCompileValidation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimBlueprintPostCompileValidation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintPostCompileValidation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// This class is a base class for performing AnimBlueprint Post Compilation Validation.\n" },
		{ "IncludePath", "AnimBlueprintPostCompileValidation.h" },
		{ "ModuleRelativePath", "Public/AnimBlueprintPostCompileValidation.h" },
		{ "ToolTip", "This class is a base class for performing AnimBlueprint Post Compilation Validation." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimBlueprintPostCompileValidation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBlueprintPostCompileValidation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimBlueprintPostCompileValidation_Statics::ClassParams = {
		&UAnimBlueprintPostCompileValidation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintPostCompileValidation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintPostCompileValidation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimBlueprintPostCompileValidation()
	{
		if (!Z_Registration_Info_UClass_UAnimBlueprintPostCompileValidation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimBlueprintPostCompileValidation.OuterSingleton, Z_Construct_UClass_UAnimBlueprintPostCompileValidation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimBlueprintPostCompileValidation.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimBlueprintPostCompileValidation>()
	{
		return UAnimBlueprintPostCompileValidation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBlueprintPostCompileValidation);
	UAnimBlueprintPostCompileValidation::~UAnimBlueprintPostCompileValidation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimBlueprintPostCompileValidation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimBlueprintPostCompileValidation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimBlueprintPostCompileValidation, UAnimBlueprintPostCompileValidation::StaticClass, TEXT("UAnimBlueprintPostCompileValidation"), &Z_Registration_Info_UClass_UAnimBlueprintPostCompileValidation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimBlueprintPostCompileValidation), 2652902144U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimBlueprintPostCompileValidation_h_1249922569(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimBlueprintPostCompileValidation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimBlueprintPostCompileValidation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
