// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MassCrowd/Source/MassCrowd/Public/MassCrowdServerRepresentationProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCrowdServerRepresentationProcessor() {}
// Cross Module References
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdServerRepresentationProcessor();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdServerRepresentationProcessor_NoRegister();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassRepresentationProcessor();
	UPackage* Z_Construct_UPackage__Script_MassCrowd();
// End Cross Module References
	void UMassCrowdServerRepresentationProcessor::StaticRegisterNativesUMassCrowdServerRepresentationProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassCrowdServerRepresentationProcessor);
	UClass* Z_Construct_UClass_UMassCrowdServerRepresentationProcessor_NoRegister()
	{
		return UMassCrowdServerRepresentationProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassCrowdServerRepresentationProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassCrowdServerRepresentationProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassRepresentationProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdServerRepresentationProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Overridden representation processor to make it tied to the crowd on the server via the requirements\n * It is the counter part of the crowd visualization processor on the client.\n */" },
		{ "DisplayName", "Mass Crowd Server Representation" },
		{ "IncludePath", "MassCrowdServerRepresentationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassCrowdServerRepresentationProcessor.h" },
		{ "ToolTip", "Overridden representation processor to make it tied to the crowd on the server via the requirements\nIt is the counter part of the crowd visualization processor on the client." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassCrowdServerRepresentationProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassCrowdServerRepresentationProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassCrowdServerRepresentationProcessor_Statics::ClassParams = {
		&UMassCrowdServerRepresentationProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassCrowdServerRepresentationProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdServerRepresentationProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassCrowdServerRepresentationProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassCrowdServerRepresentationProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassCrowdServerRepresentationProcessor.OuterSingleton, Z_Construct_UClass_UMassCrowdServerRepresentationProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassCrowdServerRepresentationProcessor.OuterSingleton;
	}
	template<> MASSCROWD_API UClass* StaticClass<UMassCrowdServerRepresentationProcessor>()
	{
		return UMassCrowdServerRepresentationProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassCrowdServerRepresentationProcessor);
	UMassCrowdServerRepresentationProcessor::~UMassCrowdServerRepresentationProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdServerRepresentationProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdServerRepresentationProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassCrowdServerRepresentationProcessor, UMassCrowdServerRepresentationProcessor::StaticClass, TEXT("UMassCrowdServerRepresentationProcessor"), &Z_Registration_Info_UClass_UMassCrowdServerRepresentationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassCrowdServerRepresentationProcessor), 1112017656U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdServerRepresentationProcessor_h_554026256(TEXT("/Script/MassCrowd"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdServerRepresentationProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdServerRepresentationProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
