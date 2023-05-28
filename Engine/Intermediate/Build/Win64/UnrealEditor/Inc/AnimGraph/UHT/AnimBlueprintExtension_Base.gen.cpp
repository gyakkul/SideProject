// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AnimBlueprintExtension_Base.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimSubsystem_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBlueprintExtension_Base() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimBlueprintExtension();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimBlueprintExtension_Base();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimBlueprintExtension_Base_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSubsystem_Base();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimBlueprintExtension_Base::StaticRegisterNativesUAnimBlueprintExtension_Base()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimBlueprintExtension_Base);
	UClass* Z_Construct_UClass_UAnimBlueprintExtension_Base_NoRegister()
	{
		return UAnimBlueprintExtension_Base::StaticClass();
	}
	struct Z_Construct_UClass_UAnimBlueprintExtension_Base_Statics
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
	UObject* (*const Z_Construct_UClass_UAnimBlueprintExtension_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimBlueprintExtension,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintExtension_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimBlueprintExtension_Base.h" },
		{ "ModuleRelativePath", "Private/AnimBlueprintExtension_Base.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintExtension_Base_Statics::NewProp_Subsystem_MetaData[] = {
		{ "Comment", "// Base subsystem data containing eval handlers\n" },
		{ "ModuleRelativePath", "Private/AnimBlueprintExtension_Base.h" },
		{ "ToolTip", "Base subsystem data containing eval handlers" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBlueprintExtension_Base_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimBlueprintExtension_Base, Subsystem), Z_Construct_UScriptStruct_FAnimSubsystem_Base, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintExtension_Base_Statics::NewProp_Subsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintExtension_Base_Statics::NewProp_Subsystem_MetaData)) }; // 3596925514
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimBlueprintExtension_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintExtension_Base_Statics::NewProp_Subsystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimBlueprintExtension_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBlueprintExtension_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimBlueprintExtension_Base_Statics::ClassParams = {
		&UAnimBlueprintExtension_Base::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimBlueprintExtension_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintExtension_Base_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintExtension_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintExtension_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimBlueprintExtension_Base()
	{
		if (!Z_Registration_Info_UClass_UAnimBlueprintExtension_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimBlueprintExtension_Base.OuterSingleton, Z_Construct_UClass_UAnimBlueprintExtension_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimBlueprintExtension_Base.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimBlueprintExtension_Base>()
	{
		return UAnimBlueprintExtension_Base::StaticClass();
	}
	UAnimBlueprintExtension_Base::UAnimBlueprintExtension_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBlueprintExtension_Base);
	UAnimBlueprintExtension_Base::~UAnimBlueprintExtension_Base() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Private_AnimBlueprintExtension_Base_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Private_AnimBlueprintExtension_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimBlueprintExtension_Base, UAnimBlueprintExtension_Base::StaticClass, TEXT("UAnimBlueprintExtension_Base"), &Z_Registration_Info_UClass_UAnimBlueprintExtension_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimBlueprintExtension_Base), 274482602U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Private_AnimBlueprintExtension_Base_h_2330052752(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Private_AnimBlueprintExtension_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Private_AnimBlueprintExtension_Base_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
