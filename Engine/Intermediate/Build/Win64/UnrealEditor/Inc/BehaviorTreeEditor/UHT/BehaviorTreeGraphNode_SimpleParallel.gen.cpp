// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviorTreeGraphNode_SimpleParallel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTreeGraphNode_SimpleParallel() {}
// Cross Module References
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeGraphNode_Composite();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeGraphNode_SimpleParallel();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeGraphNode_SimpleParallel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BehaviorTreeEditor();
// End Cross Module References
	void UBehaviorTreeGraphNode_SimpleParallel::StaticRegisterNativesUBehaviorTreeGraphNode_SimpleParallel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviorTreeGraphNode_SimpleParallel);
	UClass* Z_Construct_UClass_UBehaviorTreeGraphNode_SimpleParallel_NoRegister()
	{
		return UBehaviorTreeGraphNode_SimpleParallel::StaticClass();
	}
	struct Z_Construct_UClass_UBehaviorTreeGraphNode_SimpleParallel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBehaviorTreeGraphNode_SimpleParallel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBehaviorTreeGraphNode_Composite,
		(UObject* (*)())Z_Construct_UPackage__Script_BehaviorTreeEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeGraphNode_SimpleParallel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTreeGraphNode_SimpleParallel.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTreeGraphNode_SimpleParallel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBehaviorTreeGraphNode_SimpleParallel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorTreeGraphNode_SimpleParallel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorTreeGraphNode_SimpleParallel_Statics::ClassParams = {
		&UBehaviorTreeGraphNode_SimpleParallel::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeGraphNode_SimpleParallel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraphNode_SimpleParallel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBehaviorTreeGraphNode_SimpleParallel()
	{
		if (!Z_Registration_Info_UClass_UBehaviorTreeGraphNode_SimpleParallel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviorTreeGraphNode_SimpleParallel.OuterSingleton, Z_Construct_UClass_UBehaviorTreeGraphNode_SimpleParallel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBehaviorTreeGraphNode_SimpleParallel.OuterSingleton;
	}
	template<> BEHAVIORTREEEDITOR_API UClass* StaticClass<UBehaviorTreeGraphNode_SimpleParallel>()
	{
		return UBehaviorTreeGraphNode_SimpleParallel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviorTreeGraphNode_SimpleParallel);
	UBehaviorTreeGraphNode_SimpleParallel::~UBehaviorTreeGraphNode_SimpleParallel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_SimpleParallel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_SimpleParallel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBehaviorTreeGraphNode_SimpleParallel, UBehaviorTreeGraphNode_SimpleParallel::StaticClass, TEXT("UBehaviorTreeGraphNode_SimpleParallel"), &Z_Registration_Info_UClass_UBehaviorTreeGraphNode_SimpleParallel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviorTreeGraphNode_SimpleParallel), 734612034U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_SimpleParallel_h_3466550256(TEXT("/Script/BehaviorTreeEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_SimpleParallel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_SimpleParallel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
