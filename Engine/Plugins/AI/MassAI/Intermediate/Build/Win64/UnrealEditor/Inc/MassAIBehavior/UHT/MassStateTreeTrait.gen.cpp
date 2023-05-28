// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassStateTreeTrait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassStateTreeTrait() {}
// Cross Module References
	MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassStateTreeTrait();
	MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassStateTreeTrait_NoRegister();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
	STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTree_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassAIBehavior();
// End Cross Module References
	void UMassStateTreeTrait::StaticRegisterNativesUMassStateTreeTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassStateTreeTrait);
	UClass* Z_Construct_UClass_UMassStateTreeTrait_NoRegister()
	{
		return UMassStateTreeTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassStateTreeTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StateTree;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassStateTreeTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassStateTreeTrait_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Feature that adds StateTree execution functionality to a mass agent.\n */" },
		{ "DisplayName", "StateTree" },
		{ "IncludePath", "MassStateTreeTrait.h" },
		{ "ModuleRelativePath", "Public/MassStateTreeTrait.h" },
		{ "ToolTip", "Feature that adds StateTree execution functionality to a mass agent." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassStateTreeTrait_Statics::NewProp_StateTree_MetaData[] = {
		{ "Category", "StateTree" },
		{ "ModuleRelativePath", "Public/MassStateTreeTrait.h" },
		{ "RequiredAssetDataTags", "Schema=/Script/MassAIBehavior.MassStateTreeSchema" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassStateTreeTrait_Statics::NewProp_StateTree = { "StateTree", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassStateTreeTrait, StateTree), Z_Construct_UClass_UStateTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMassStateTreeTrait_Statics::NewProp_StateTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassStateTreeTrait_Statics::NewProp_StateTree_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassStateTreeTrait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassStateTreeTrait_Statics::NewProp_StateTree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassStateTreeTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassStateTreeTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassStateTreeTrait_Statics::ClassParams = {
		&UMassStateTreeTrait::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassStateTreeTrait_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassStateTreeTrait_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassStateTreeTrait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassStateTreeTrait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassStateTreeTrait()
	{
		if (!Z_Registration_Info_UClass_UMassStateTreeTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassStateTreeTrait.OuterSingleton, Z_Construct_UClass_UMassStateTreeTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassStateTreeTrait.OuterSingleton;
	}
	template<> MASSAIBEHAVIOR_API UClass* StaticClass<UMassStateTreeTrait>()
	{
		return UMassStateTreeTrait::StaticClass();
	}
	UMassStateTreeTrait::UMassStateTreeTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassStateTreeTrait);
	UMassStateTreeTrait::~UMassStateTreeTrait() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeTrait_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeTrait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassStateTreeTrait, UMassStateTreeTrait::StaticClass, TEXT("UMassStateTreeTrait"), &Z_Registration_Info_UClass_UMassStateTreeTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassStateTreeTrait), 969685885U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeTrait_h_495813068(TEXT("/Script/MassAIBehavior"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeTrait_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
