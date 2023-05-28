// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MassCrowd/Source/MassCrowd/Public/MassCrowdReplicator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCrowdReplicator() {}
// Cross Module References
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdReplicator();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdReplicator_NoRegister();
	MASSREPLICATION_API UClass* Z_Construct_UClass_UMassReplicatorBase();
	UPackage* Z_Construct_UPackage__Script_MassCrowd();
// End Cross Module References
	void UMassCrowdReplicator::StaticRegisterNativesUMassCrowdReplicator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassCrowdReplicator);
	UClass* Z_Construct_UClass_UMassCrowdReplicator_NoRegister()
	{
		return UMassCrowdReplicator::StaticClass();
	}
	struct Z_Construct_UClass_UMassCrowdReplicator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassCrowdReplicator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassReplicatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdReplicator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Class that handles replication and only runs on the server. It queries Mass entity fragments and sets those values when appropriate using the MassClientBubbleHandler. */" },
		{ "IncludePath", "MassCrowdReplicator.h" },
		{ "ModuleRelativePath", "Public/MassCrowdReplicator.h" },
		{ "ToolTip", "Class that handles replication and only runs on the server. It queries Mass entity fragments and sets those values when appropriate using the MassClientBubbleHandler." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassCrowdReplicator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassCrowdReplicator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassCrowdReplicator_Statics::ClassParams = {
		&UMassCrowdReplicator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassCrowdReplicator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdReplicator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassCrowdReplicator()
	{
		if (!Z_Registration_Info_UClass_UMassCrowdReplicator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassCrowdReplicator.OuterSingleton, Z_Construct_UClass_UMassCrowdReplicator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassCrowdReplicator.OuterSingleton;
	}
	template<> MASSCROWD_API UClass* StaticClass<UMassCrowdReplicator>()
	{
		return UMassCrowdReplicator::StaticClass();
	}
	UMassCrowdReplicator::UMassCrowdReplicator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassCrowdReplicator);
	UMassCrowdReplicator::~UMassCrowdReplicator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdReplicator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdReplicator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassCrowdReplicator, UMassCrowdReplicator::StaticClass, TEXT("UMassCrowdReplicator"), &Z_Registration_Info_UClass_UMassCrowdReplicator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassCrowdReplicator), 1206932793U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdReplicator_h_1237200061(TEXT("/Script/MassCrowd"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdReplicator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdReplicator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
