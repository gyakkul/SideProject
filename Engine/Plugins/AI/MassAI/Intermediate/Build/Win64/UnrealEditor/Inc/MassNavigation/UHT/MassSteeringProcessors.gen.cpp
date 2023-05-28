// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steering/MassSteeringProcessors.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassSteeringProcessors() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSNAVIGATION_API UClass* Z_Construct_UClass_UMassSteerToMoveTargetProcessor();
	MASSNAVIGATION_API UClass* Z_Construct_UClass_UMassSteerToMoveTargetProcessor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassNavigation();
// End Cross Module References
	void UMassSteerToMoveTargetProcessor::StaticRegisterNativesUMassSteerToMoveTargetProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassSteerToMoveTargetProcessor);
	UClass* Z_Construct_UClass_UMassSteerToMoveTargetProcessor_NoRegister()
	{
		return UMassSteerToMoveTargetProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassSteerToMoveTargetProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassSteerToMoveTargetProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassNavigation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSteerToMoveTargetProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n* Processor for updating steering towards MoveTarget.\n*/" },
		{ "IncludePath", "Steering/MassSteeringProcessors.h" },
		{ "ModuleRelativePath", "Public/Steering/MassSteeringProcessors.h" },
		{ "ToolTip", "Processor for updating steering towards MoveTarget." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassSteerToMoveTargetProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassSteerToMoveTargetProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassSteerToMoveTargetProcessor_Statics::ClassParams = {
		&UMassSteerToMoveTargetProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassSteerToMoveTargetProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSteerToMoveTargetProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassSteerToMoveTargetProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassSteerToMoveTargetProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassSteerToMoveTargetProcessor.OuterSingleton, Z_Construct_UClass_UMassSteerToMoveTargetProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassSteerToMoveTargetProcessor.OuterSingleton;
	}
	template<> MASSNAVIGATION_API UClass* StaticClass<UMassSteerToMoveTargetProcessor>()
	{
		return UMassSteerToMoveTargetProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassSteerToMoveTargetProcessor);
	UMassSteerToMoveTargetProcessor::~UMassSteerToMoveTargetProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringProcessors_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringProcessors_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassSteerToMoveTargetProcessor, UMassSteerToMoveTargetProcessor::StaticClass, TEXT("UMassSteerToMoveTargetProcessor"), &Z_Registration_Info_UClass_UMassSteerToMoveTargetProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassSteerToMoveTargetProcessor), 2988451305U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringProcessors_h_1654936644(TEXT("/Script/MassNavigation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringProcessors_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringProcessors_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
