// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AnimBlueprintExtension_SharedLinkedAnimLayers.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimSubsystem_SharedLinkedAnimLayers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBlueprintExtension_SharedLinkedAnimLayers() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimBlueprintExtension();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimBlueprintExtension_SharedLinkedAnimLayers();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimBlueprintExtension_SharedLinkedAnimLayers_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimBlueprintExtension_SharedLinkedAnimLayers::StaticRegisterNativesUAnimBlueprintExtension_SharedLinkedAnimLayers()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimBlueprintExtension_SharedLinkedAnimLayers);
	UClass* Z_Construct_UClass_UAnimBlueprintExtension_SharedLinkedAnimLayers_NoRegister()
	{
		return UAnimBlueprintExtension_SharedLinkedAnimLayers::StaticClass();
	}
	struct Z_Construct_UClass_UAnimBlueprintExtension_SharedLinkedAnimLayers_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Subsystem_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Subsystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimBlueprintExtension_SharedLinkedAnimLayers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimBlueprintExtension,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintExtension_SharedLinkedAnimLayers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimBlueprintExtension_SharedLinkedAnimLayers.h" },
		{ "ModuleRelativePath", "Private/AnimBlueprintExtension_SharedLinkedAnimLayers.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintExtension_SharedLinkedAnimLayers_Statics::NewProp_Subsystem_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimBlueprintExtension_SharedLinkedAnimLayers.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBlueprintExtension_SharedLinkedAnimLayers_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimBlueprintExtension_SharedLinkedAnimLayers, Subsystem), Z_Construct_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintExtension_SharedLinkedAnimLayers_Statics::NewProp_Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintExtension_SharedLinkedAnimLayers_Statics::NewProp_Subsystem_MetaData)) }; // 4084065972
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimBlueprintExtension_SharedLinkedAnimLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintExtension_SharedLinkedAnimLayers_Statics::NewProp_Subsystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimBlueprintExtension_SharedLinkedAnimLayers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBlueprintExtension_SharedLinkedAnimLayers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimBlueprintExtension_SharedLinkedAnimLayers_Statics::ClassParams = {
		&UAnimBlueprintExtension_SharedLinkedAnimLayers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimBlueprintExtension_SharedLinkedAnimLayers_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintExtension_SharedLinkedAnimLayers_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintExtension_SharedLinkedAnimLayers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintExtension_SharedLinkedAnimLayers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimBlueprintExtension_SharedLinkedAnimLayers()
	{
		if (!Z_Registration_Info_UClass_UAnimBlueprintExtension_SharedLinkedAnimLayers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimBlueprintExtension_SharedLinkedAnimLayers.OuterSingleton, Z_Construct_UClass_UAnimBlueprintExtension_SharedLinkedAnimLayers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimBlueprintExtension_SharedLinkedAnimLayers.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimBlueprintExtension_SharedLinkedAnimLayers>()
	{
		return UAnimBlueprintExtension_SharedLinkedAnimLayers::StaticClass();
	}
	UAnimBlueprintExtension_SharedLinkedAnimLayers::UAnimBlueprintExtension_SharedLinkedAnimLayers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBlueprintExtension_SharedLinkedAnimLayers);
	UAnimBlueprintExtension_SharedLinkedAnimLayers::~UAnimBlueprintExtension_SharedLinkedAnimLayers() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Private_AnimBlueprintExtension_SharedLinkedAnimLayers_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Private_AnimBlueprintExtension_SharedLinkedAnimLayers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimBlueprintExtension_SharedLinkedAnimLayers, UAnimBlueprintExtension_SharedLinkedAnimLayers::StaticClass, TEXT("UAnimBlueprintExtension_SharedLinkedAnimLayers"), &Z_Registration_Info_UClass_UAnimBlueprintExtension_SharedLinkedAnimLayers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimBlueprintExtension_SharedLinkedAnimLayers), 1494803935U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Private_AnimBlueprintExtension_SharedLinkedAnimLayers_h_951630776(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Private_AnimBlueprintExtension_SharedLinkedAnimLayers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Private_AnimBlueprintExtension_SharedLinkedAnimLayers_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
