// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MassCrowd/Source/MassCrowd/Public/MassCrowdVisualizationProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCrowdVisualizationProcessor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdVisualizationProcessor();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdVisualizationProcessor_NoRegister();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassDebugCrowdVisualizationProcessor();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassDebugCrowdVisualizationProcessor_NoRegister();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationProcessor();
	UPackage* Z_Construct_UPackage__Script_MassCrowd();
// End Cross Module References
	void UMassCrowdVisualizationProcessor::StaticRegisterNativesUMassCrowdVisualizationProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassCrowdVisualizationProcessor);
	UClass* Z_Construct_UClass_UMassCrowdVisualizationProcessor_NoRegister()
	{
		return UMassCrowdVisualizationProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassCrowdVisualizationProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassCrowdVisualizationProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassVisualizationProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdVisualizationProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Overridden visualization processor to make it tied to the crowd via the requirements\n */" },
		{ "DisplayName", "Mass Crowd Visualization" },
		{ "IncludePath", "MassCrowdVisualizationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassCrowdVisualizationProcessor.h" },
		{ "ToolTip", "Overridden visualization processor to make it tied to the crowd via the requirements" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassCrowdVisualizationProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassCrowdVisualizationProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassCrowdVisualizationProcessor_Statics::ClassParams = {
		&UMassCrowdVisualizationProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassCrowdVisualizationProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdVisualizationProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassCrowdVisualizationProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassCrowdVisualizationProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassCrowdVisualizationProcessor.OuterSingleton, Z_Construct_UClass_UMassCrowdVisualizationProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassCrowdVisualizationProcessor.OuterSingleton;
	}
	template<> MASSCROWD_API UClass* StaticClass<UMassCrowdVisualizationProcessor>()
	{
		return UMassCrowdVisualizationProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassCrowdVisualizationProcessor);
	UMassCrowdVisualizationProcessor::~UMassCrowdVisualizationProcessor() {}
	void UMassDebugCrowdVisualizationProcessor::StaticRegisterNativesUMassDebugCrowdVisualizationProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassDebugCrowdVisualizationProcessor);
	UClass* Z_Construct_UClass_UMassDebugCrowdVisualizationProcessor_NoRegister()
	{
		return UMassDebugCrowdVisualizationProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassDebugCrowdVisualizationProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassDebugCrowdVisualizationProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassDebugCrowdVisualizationProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A custom visualization processor for debugging mass crowd\n */" },
		{ "DisplayName", "Mass Crowd Visualization" },
		{ "IncludePath", "MassCrowdVisualizationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassCrowdVisualizationProcessor.h" },
		{ "ToolTip", "A custom visualization processor for debugging mass crowd" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassDebugCrowdVisualizationProcessor_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassCrowdVisualizationProcessor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassDebugCrowdVisualizationProcessor_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassDebugCrowdVisualizationProcessor, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMassDebugCrowdVisualizationProcessor_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassDebugCrowdVisualizationProcessor_Statics::NewProp_World_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassDebugCrowdVisualizationProcessor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassDebugCrowdVisualizationProcessor_Statics::NewProp_World,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassDebugCrowdVisualizationProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassDebugCrowdVisualizationProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassDebugCrowdVisualizationProcessor_Statics::ClassParams = {
		&UMassDebugCrowdVisualizationProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassDebugCrowdVisualizationProcessor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassDebugCrowdVisualizationProcessor_Statics::PropPointers),
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassDebugCrowdVisualizationProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassDebugCrowdVisualizationProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassDebugCrowdVisualizationProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassDebugCrowdVisualizationProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassDebugCrowdVisualizationProcessor.OuterSingleton, Z_Construct_UClass_UMassDebugCrowdVisualizationProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassDebugCrowdVisualizationProcessor.OuterSingleton;
	}
	template<> MASSCROWD_API UClass* StaticClass<UMassDebugCrowdVisualizationProcessor>()
	{
		return UMassDebugCrowdVisualizationProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassDebugCrowdVisualizationProcessor);
	UMassDebugCrowdVisualizationProcessor::~UMassDebugCrowdVisualizationProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdVisualizationProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdVisualizationProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassCrowdVisualizationProcessor, UMassCrowdVisualizationProcessor::StaticClass, TEXT("UMassCrowdVisualizationProcessor"), &Z_Registration_Info_UClass_UMassCrowdVisualizationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassCrowdVisualizationProcessor), 1687522722U) },
		{ Z_Construct_UClass_UMassDebugCrowdVisualizationProcessor, UMassDebugCrowdVisualizationProcessor::StaticClass, TEXT("UMassDebugCrowdVisualizationProcessor"), &Z_Registration_Info_UClass_UMassDebugCrowdVisualizationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassDebugCrowdVisualizationProcessor), 2197027351U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdVisualizationProcessor_h_1306245211(TEXT("/Script/MassCrowd"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdVisualizationProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdVisualizationProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
