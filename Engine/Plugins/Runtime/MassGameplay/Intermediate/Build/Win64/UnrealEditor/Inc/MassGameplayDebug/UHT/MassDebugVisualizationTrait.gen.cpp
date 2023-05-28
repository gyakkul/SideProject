// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassGameplayDebug/Public/MassDebugVisualizationTrait.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassGameplayDebug/Public/MassGameplayDebugTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassDebugVisualizationTrait() {}
// Cross Module References
	MASSGAMEPLAYDEBUG_API UClass* Z_Construct_UClass_UMassDebugVisualizationTrait();
	MASSGAMEPLAYDEBUG_API UClass* Z_Construct_UClass_UMassDebugVisualizationTrait_NoRegister();
	MASSGAMEPLAYDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FAgentDebugVisualization();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
	UPackage* Z_Construct_UPackage__Script_MassGameplayDebug();
// End Cross Module References
	void UMassDebugVisualizationTrait::StaticRegisterNativesUMassDebugVisualizationTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassDebugVisualizationTrait);
	UClass* Z_Construct_UClass_UMassDebugVisualizationTrait_NoRegister()
	{
		return UMassDebugVisualizationTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassDebugVisualizationTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugShape_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugShape;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassDebugVisualizationTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassGameplayDebug,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassDebugVisualizationTrait_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Debug Visualization" },
		{ "IncludePath", "MassDebugVisualizationTrait.h" },
		{ "ModuleRelativePath", "Public/MassDebugVisualizationTrait.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassDebugVisualizationTrait_Statics::NewProp_DebugShape_MetaData[] = {
		{ "Category", "Mass|Spawn" },
		{ "ModuleRelativePath", "Public/MassDebugVisualizationTrait.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassDebugVisualizationTrait_Statics::NewProp_DebugShape = { "DebugShape", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassDebugVisualizationTrait, DebugShape), Z_Construct_UScriptStruct_FAgentDebugVisualization, METADATA_PARAMS(Z_Construct_UClass_UMassDebugVisualizationTrait_Statics::NewProp_DebugShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassDebugVisualizationTrait_Statics::NewProp_DebugShape_MetaData)) }; // 2813970967
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassDebugVisualizationTrait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassDebugVisualizationTrait_Statics::NewProp_DebugShape,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassDebugVisualizationTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassDebugVisualizationTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassDebugVisualizationTrait_Statics::ClassParams = {
		&UMassDebugVisualizationTrait::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UMassDebugVisualizationTrait_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UMassDebugVisualizationTrait_Statics::PropPointers), 0),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassDebugVisualizationTrait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassDebugVisualizationTrait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassDebugVisualizationTrait()
	{
		if (!Z_Registration_Info_UClass_UMassDebugVisualizationTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassDebugVisualizationTrait.OuterSingleton, Z_Construct_UClass_UMassDebugVisualizationTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassDebugVisualizationTrait.OuterSingleton;
	}
	template<> MASSGAMEPLAYDEBUG_API UClass* StaticClass<UMassDebugVisualizationTrait>()
	{
		return UMassDebugVisualizationTrait::StaticClass();
	}
	UMassDebugVisualizationTrait::UMassDebugVisualizationTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassDebugVisualizationTrait);
	UMassDebugVisualizationTrait::~UMassDebugVisualizationTrait() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizationTrait_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizationTrait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassDebugVisualizationTrait, UMassDebugVisualizationTrait::StaticClass, TEXT("UMassDebugVisualizationTrait"), &Z_Registration_Info_UClass_UMassDebugVisualizationTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassDebugVisualizationTrait), 1921552260U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizationTrait_h_3512268013(TEXT("/Script/MassGameplayDebug"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizationTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizationTrait_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
