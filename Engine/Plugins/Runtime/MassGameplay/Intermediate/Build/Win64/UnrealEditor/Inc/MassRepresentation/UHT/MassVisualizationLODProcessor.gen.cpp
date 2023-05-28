// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassRepresentation/Public/MassVisualizationLODProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassVisualizationLODProcessor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationLODProcessor();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationLODProcessor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassRepresentation();
// End Cross Module References
	void UMassVisualizationLODProcessor::StaticRegisterNativesUMassVisualizationLODProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassVisualizationLODProcessor);
	UClass* Z_Construct_UClass_UMassVisualizationLODProcessor_NoRegister()
	{
		return UMassVisualizationLODProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassVisualizationLODProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterTag_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FilterTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassVisualizationLODProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassRepresentation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassVisualizationLODProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassVisualizationLODProcessor.h" },
		{ "ModuleRelativePath", "Public/MassVisualizationLODProcessor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassVisualizationLODProcessor_Statics::NewProp_FilterTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassVisualizationLODProcessor.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassVisualizationLODProcessor_Statics::NewProp_FilterTag = { "FilterTag", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassVisualizationLODProcessor, FilterTag), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UClass_UMassVisualizationLODProcessor_Statics::NewProp_FilterTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassVisualizationLODProcessor_Statics::NewProp_FilterTag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassVisualizationLODProcessor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassVisualizationLODProcessor_Statics::NewProp_FilterTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassVisualizationLODProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassVisualizationLODProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassVisualizationLODProcessor_Statics::ClassParams = {
		&UMassVisualizationLODProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassVisualizationLODProcessor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassVisualizationLODProcessor_Statics::PropPointers),
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassVisualizationLODProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassVisualizationLODProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassVisualizationLODProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassVisualizationLODProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassVisualizationLODProcessor.OuterSingleton, Z_Construct_UClass_UMassVisualizationLODProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassVisualizationLODProcessor.OuterSingleton;
	}
	template<> MASSREPRESENTATION_API UClass* StaticClass<UMassVisualizationLODProcessor>()
	{
		return UMassVisualizationLODProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassVisualizationLODProcessor);
	UMassVisualizationLODProcessor::~UMassVisualizationLODProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationLODProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationLODProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassVisualizationLODProcessor, UMassVisualizationLODProcessor::StaticClass, TEXT("UMassVisualizationLODProcessor"), &Z_Registration_Info_UClass_UMassVisualizationLODProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassVisualizationLODProcessor), 2260716764U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationLODProcessor_h_3019405095(TEXT("/Script/MassRepresentation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationLODProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationLODProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
