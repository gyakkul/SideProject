// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoseCorrectivesProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseCorrectivesProcessor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	POSECORRECTIVES_API UClass* Z_Construct_UClass_UPoseCorrectivesProcessor();
	POSECORRECTIVES_API UClass* Z_Construct_UClass_UPoseCorrectivesProcessor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PoseCorrectives();
// End Cross Module References
	void UPoseCorrectivesProcessor::StaticRegisterNativesUPoseCorrectivesProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseCorrectivesProcessor);
	UClass* Z_Construct_UClass_UPoseCorrectivesProcessor_NoRegister()
	{
		return UPoseCorrectivesProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UPoseCorrectivesProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseCorrectivesProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseCorrectives,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseCorrectivesProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PoseCorrectivesProcessor.h" },
		{ "ModuleRelativePath", "Public/PoseCorrectivesProcessor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseCorrectivesProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseCorrectivesProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseCorrectivesProcessor_Statics::ClassParams = {
		&UPoseCorrectivesProcessor::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPoseCorrectivesProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseCorrectivesProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoseCorrectivesProcessor()
	{
		if (!Z_Registration_Info_UClass_UPoseCorrectivesProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseCorrectivesProcessor.OuterSingleton, Z_Construct_UClass_UPoseCorrectivesProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseCorrectivesProcessor.OuterSingleton;
	}
	template<> POSECORRECTIVES_API UClass* StaticClass<UPoseCorrectivesProcessor>()
	{
		return UPoseCorrectivesProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseCorrectivesProcessor);
	UPoseCorrectivesProcessor::~UPoseCorrectivesProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectives_Public_PoseCorrectivesProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectives_Public_PoseCorrectivesProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoseCorrectivesProcessor, UPoseCorrectivesProcessor::StaticClass, TEXT("UPoseCorrectivesProcessor"), &Z_Registration_Info_UClass_UPoseCorrectivesProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseCorrectivesProcessor), 770851416U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectives_Public_PoseCorrectivesProcessor_h_3199950250(TEXT("/Script/PoseCorrectives"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectives_Public_PoseCorrectivesProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectives_Public_PoseCorrectivesProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
