// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseTools/SingleTargetWithSelectionTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingleTargetWithSelectionTool() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleSelectionTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleTargetWithSelectionTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleTargetWithSelectionTool_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleTargetWithSelectionToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleTargetWithSelectionToolBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	void USingleTargetWithSelectionToolBuilder::StaticRegisterNativesUSingleTargetWithSelectionToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USingleTargetWithSelectionToolBuilder);
	UClass* Z_Construct_UClass_USingleTargetWithSelectionToolBuilder_NoRegister()
	{
		return USingleTargetWithSelectionToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_USingleTargetWithSelectionToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USingleTargetWithSelectionToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingleTargetWithSelectionToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseTools/SingleTargetWithSelectionTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/SingleTargetWithSelectionTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USingleTargetWithSelectionToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USingleTargetWithSelectionToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USingleTargetWithSelectionToolBuilder_Statics::ClassParams = {
		&USingleTargetWithSelectionToolBuilder::StaticClass,
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
		0x001000A9u,
		METADATA_PARAMS(Z_Construct_UClass_USingleTargetWithSelectionToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USingleTargetWithSelectionToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USingleTargetWithSelectionToolBuilder()
	{
		if (!Z_Registration_Info_UClass_USingleTargetWithSelectionToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USingleTargetWithSelectionToolBuilder.OuterSingleton, Z_Construct_UClass_USingleTargetWithSelectionToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USingleTargetWithSelectionToolBuilder.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<USingleTargetWithSelectionToolBuilder>()
	{
		return USingleTargetWithSelectionToolBuilder::StaticClass();
	}
	USingleTargetWithSelectionToolBuilder::USingleTargetWithSelectionToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USingleTargetWithSelectionToolBuilder);
	USingleTargetWithSelectionToolBuilder::~USingleTargetWithSelectionToolBuilder() {}
	void USingleTargetWithSelectionTool::StaticRegisterNativesUSingleTargetWithSelectionTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USingleTargetWithSelectionTool);
	UClass* Z_Construct_UClass_USingleTargetWithSelectionTool_NoRegister()
	{
		return USingleTargetWithSelectionTool::StaticClass();
	}
	struct Z_Construct_UClass_USingleTargetWithSelectionTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetWorld_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TargetWorld;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USingleTargetWithSelectionTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionTool,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingleTargetWithSelectionTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseTools/SingleTargetWithSelectionTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/SingleTargetWithSelectionTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingleTargetWithSelectionTool_Statics::NewProp_TargetWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTools/SingleTargetWithSelectionTool.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USingleTargetWithSelectionTool_Statics::NewProp_TargetWorld = { "TargetWorld", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USingleTargetWithSelectionTool, TargetWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USingleTargetWithSelectionTool_Statics::NewProp_TargetWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USingleTargetWithSelectionTool_Statics::NewProp_TargetWorld_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USingleTargetWithSelectionTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USingleTargetWithSelectionTool_Statics::NewProp_TargetWorld,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USingleTargetWithSelectionTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USingleTargetWithSelectionTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USingleTargetWithSelectionTool_Statics::ClassParams = {
		&USingleTargetWithSelectionTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USingleTargetWithSelectionTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USingleTargetWithSelectionTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USingleTargetWithSelectionTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USingleTargetWithSelectionTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USingleTargetWithSelectionTool()
	{
		if (!Z_Registration_Info_UClass_USingleTargetWithSelectionTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USingleTargetWithSelectionTool.OuterSingleton, Z_Construct_UClass_USingleTargetWithSelectionTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USingleTargetWithSelectionTool.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<USingleTargetWithSelectionTool>()
	{
		return USingleTargetWithSelectionTool::StaticClass();
	}
	USingleTargetWithSelectionTool::USingleTargetWithSelectionTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USingleTargetWithSelectionTool);
	USingleTargetWithSelectionTool::~USingleTargetWithSelectionTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_SingleTargetWithSelectionTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_SingleTargetWithSelectionTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USingleTargetWithSelectionToolBuilder, USingleTargetWithSelectionToolBuilder::StaticClass, TEXT("USingleTargetWithSelectionToolBuilder"), &Z_Registration_Info_UClass_USingleTargetWithSelectionToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USingleTargetWithSelectionToolBuilder), 207540138U) },
		{ Z_Construct_UClass_USingleTargetWithSelectionTool, USingleTargetWithSelectionTool::StaticClass, TEXT("USingleTargetWithSelectionTool"), &Z_Registration_Info_UClass_USingleTargetWithSelectionTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USingleTargetWithSelectionTool), 738475062U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_SingleTargetWithSelectionTool_h_1684462251(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_SingleTargetWithSelectionTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_SingleTargetWithSelectionTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
