// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MassCrowd/Source/MassCrowd/Public/MassCrowdRepresentationSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCrowdRepresentationSubsystem() {}
// Cross Module References
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdRepresentationSubsystem();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdRepresentationSubsystem_NoRegister();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassRepresentationSubsystem();
	UPackage* Z_Construct_UPackage__Script_MassCrowd();
// End Cross Module References
	void UMassCrowdRepresentationSubsystem::StaticRegisterNativesUMassCrowdRepresentationSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassCrowdRepresentationSubsystem);
	UClass* Z_Construct_UClass_UMassCrowdRepresentationSubsystem_NoRegister()
	{
		return UMassCrowdRepresentationSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMassCrowdRepresentationSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassCrowdRepresentationSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassRepresentationSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdRepresentationSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Subsystem responsible for all visual of mass crowd agents, will handle actors spawning and static mesh instances\n */" },
		{ "IncludePath", "MassCrowdRepresentationSubsystem.h" },
		{ "ModuleRelativePath", "Public/MassCrowdRepresentationSubsystem.h" },
		{ "ToolTip", "Subsystem responsible for all visual of mass crowd agents, will handle actors spawning and static mesh instances" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassCrowdRepresentationSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassCrowdRepresentationSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassCrowdRepresentationSubsystem_Statics::ClassParams = {
		&UMassCrowdRepresentationSubsystem::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassCrowdRepresentationSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdRepresentationSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassCrowdRepresentationSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMassCrowdRepresentationSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassCrowdRepresentationSubsystem.OuterSingleton, Z_Construct_UClass_UMassCrowdRepresentationSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassCrowdRepresentationSubsystem.OuterSingleton;
	}
	template<> MASSCROWD_API UClass* StaticClass<UMassCrowdRepresentationSubsystem>()
	{
		return UMassCrowdRepresentationSubsystem::StaticClass();
	}
	UMassCrowdRepresentationSubsystem::UMassCrowdRepresentationSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassCrowdRepresentationSubsystem);
	UMassCrowdRepresentationSubsystem::~UMassCrowdRepresentationSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdRepresentationSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdRepresentationSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassCrowdRepresentationSubsystem, UMassCrowdRepresentationSubsystem::StaticClass, TEXT("UMassCrowdRepresentationSubsystem"), &Z_Registration_Info_UClass_UMassCrowdRepresentationSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassCrowdRepresentationSubsystem), 1623526353U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdRepresentationSubsystem_h_3929286593(TEXT("/Script/MassCrowd"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdRepresentationSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdRepresentationSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
