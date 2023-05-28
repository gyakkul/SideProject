// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Graph/NodeSpawners/ControlRigTemplateNodeSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigTemplateNodeSpawner() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintNodeSpawner();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigTemplateNodeSpawner();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigTemplateNodeSpawner_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ControlRigEditor();
// End Cross Module References
	void UControlRigTemplateNodeSpawner::StaticRegisterNativesUControlRigTemplateNodeSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigTemplateNodeSpawner);
	UClass* Z_Construct_UClass_UControlRigTemplateNodeSpawner_NoRegister()
	{
		return UControlRigTemplateNodeSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigTemplateNodeSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateNotation_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TemplateNotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigTemplateNodeSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintNodeSpawner,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigTemplateNodeSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/NodeSpawners/ControlRigTemplateNodeSpawner.h" },
		{ "ModuleRelativePath", "Private/Graph/NodeSpawners/ControlRigTemplateNodeSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigTemplateNodeSpawner_Statics::NewProp_TemplateNotation_MetaData[] = {
		{ "Comment", "/** The unit type we will spawn */" },
		{ "ModuleRelativePath", "Private/Graph/NodeSpawners/ControlRigTemplateNodeSpawner.h" },
		{ "ToolTip", "The unit type we will spawn" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UControlRigTemplateNodeSpawner_Statics::NewProp_TemplateNotation = { "TemplateNotation", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigTemplateNodeSpawner, TemplateNotation), METADATA_PARAMS(Z_Construct_UClass_UControlRigTemplateNodeSpawner_Statics::NewProp_TemplateNotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigTemplateNodeSpawner_Statics::NewProp_TemplateNotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigTemplateNodeSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigTemplateNodeSpawner_Statics::NewProp_TemplateNotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigTemplateNodeSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigTemplateNodeSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigTemplateNodeSpawner_Statics::ClassParams = {
		&UControlRigTemplateNodeSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UControlRigTemplateNodeSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigTemplateNodeSpawner_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigTemplateNodeSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigTemplateNodeSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigTemplateNodeSpawner()
	{
		if (!Z_Registration_Info_UClass_UControlRigTemplateNodeSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigTemplateNodeSpawner.OuterSingleton, Z_Construct_UClass_UControlRigTemplateNodeSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigTemplateNodeSpawner.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UClass* StaticClass<UControlRigTemplateNodeSpawner>()
	{
		return UControlRigTemplateNodeSpawner::StaticClass();
	}
	UControlRigTemplateNodeSpawner::UControlRigTemplateNodeSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigTemplateNodeSpawner);
	UControlRigTemplateNodeSpawner::~UControlRigTemplateNodeSpawner() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Graph_NodeSpawners_ControlRigTemplateNodeSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Graph_NodeSpawners_ControlRigTemplateNodeSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigTemplateNodeSpawner, UControlRigTemplateNodeSpawner::StaticClass, TEXT("UControlRigTemplateNodeSpawner"), &Z_Registration_Info_UClass_UControlRigTemplateNodeSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigTemplateNodeSpawner), 715364169U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Graph_NodeSpawners_ControlRigTemplateNodeSpawner_h_2568039078(TEXT("/Script/ControlRigEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Graph_NodeSpawners_ControlRigTemplateNodeSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Graph_NodeSpawners_ControlRigTemplateNodeSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
