// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MassCrowd/Source/MassCrowd/Public/MassCrowdRepresentationActorManagement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCrowdRepresentationActorManagement() {}
// Cross Module References
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdRepresentationActorManagement();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdRepresentationActorManagement_NoRegister();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassRepresentationActorManagement();
	UPackage* Z_Construct_UPackage__Script_MassCrowd();
// End Cross Module References
	void UMassCrowdRepresentationActorManagement::StaticRegisterNativesUMassCrowdRepresentationActorManagement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassCrowdRepresentationActorManagement);
	UClass* Z_Construct_UClass_UMassCrowdRepresentationActorManagement_NoRegister()
	{
		return UMassCrowdRepresentationActorManagement::StaticClass();
	}
	struct Z_Construct_UClass_UMassCrowdRepresentationActorManagement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassCrowdRepresentationActorManagement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassRepresentationActorManagement,
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdRepresentationActorManagement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Overridden representation processor to make it tied to the crowd via the requirements.\n * It is also the base class for all the different type of crowd representation (Visualization & ServerSideRepresentation)\n */" },
		{ "IncludePath", "MassCrowdRepresentationActorManagement.h" },
		{ "ModuleRelativePath", "Public/MassCrowdRepresentationActorManagement.h" },
		{ "ToolTip", "Overridden representation processor to make it tied to the crowd via the requirements.\nIt is also the base class for all the different type of crowd representation (Visualization & ServerSideRepresentation)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassCrowdRepresentationActorManagement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassCrowdRepresentationActorManagement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassCrowdRepresentationActorManagement_Statics::ClassParams = {
		&UMassCrowdRepresentationActorManagement::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMassCrowdRepresentationActorManagement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdRepresentationActorManagement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassCrowdRepresentationActorManagement()
	{
		if (!Z_Registration_Info_UClass_UMassCrowdRepresentationActorManagement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassCrowdRepresentationActorManagement.OuterSingleton, Z_Construct_UClass_UMassCrowdRepresentationActorManagement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassCrowdRepresentationActorManagement.OuterSingleton;
	}
	template<> MASSCROWD_API UClass* StaticClass<UMassCrowdRepresentationActorManagement>()
	{
		return UMassCrowdRepresentationActorManagement::StaticClass();
	}
	UMassCrowdRepresentationActorManagement::UMassCrowdRepresentationActorManagement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassCrowdRepresentationActorManagement);
	UMassCrowdRepresentationActorManagement::~UMassCrowdRepresentationActorManagement() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdRepresentationActorManagement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdRepresentationActorManagement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassCrowdRepresentationActorManagement, UMassCrowdRepresentationActorManagement::StaticClass, TEXT("UMassCrowdRepresentationActorManagement"), &Z_Registration_Info_UClass_UMassCrowdRepresentationActorManagement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassCrowdRepresentationActorManagement), 3355111072U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdRepresentationActorManagement_h_3371985066(TEXT("/Script/MassCrowd"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdRepresentationActorManagement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdRepresentationActorManagement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
