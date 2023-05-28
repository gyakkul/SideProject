// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/ActorPartition/PartitionActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartitionActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_APartitionActor();
	ENGINE_API UClass* Z_Construct_UClass_APartitionActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void APartitionActor::StaticRegisterNativesAPartitionActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APartitionActor);
	UClass* Z_Construct_UClass_APartitionActor_NoRegister()
	{
		return APartitionActor::StaticClass();
	}
	struct Z_Construct_UClass_APartitionActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_GridSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APartitionActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartitionActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Actor base class for instance containers placed on a grid.\n// See UActorPartitionSubsystem.\n" },
		{ "IncludePath", "ActorPartition/PartitionActor.h" },
		{ "ModuleRelativePath", "Public/ActorPartition/PartitionActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Actor base class for instance containers placed on a grid.\nSee UActorPartitionSubsystem." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartitionActor_Statics::NewProp_GridSize_MetaData[] = {
		{ "Comment", "/** The grid size this actors was generated for */" },
		{ "ModuleRelativePath", "Public/ActorPartition/PartitionActor.h" },
		{ "ToolTip", "The grid size this actors was generated for" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_APartitionActor_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APartitionActor, GridSize), METADATA_PARAMS(Z_Construct_UClass_APartitionActor_Statics::NewProp_GridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartitionActor_Statics::NewProp_GridSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APartitionActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartitionActor_Statics::NewProp_GridSize,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_APartitionActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APartitionActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APartitionActor_Statics::ClassParams = {
		&APartitionActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_APartitionActor_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_APartitionActor_Statics::PropPointers), 0),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_APartitionActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APartitionActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APartitionActor()
	{
		if (!Z_Registration_Info_UClass_APartitionActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APartitionActor.OuterSingleton, Z_Construct_UClass_APartitionActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APartitionActor.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<APartitionActor>()
	{
		return APartitionActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APartitionActor);
	APartitionActor::~APartitionActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ActorPartition_PartitionActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ActorPartition_PartitionActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APartitionActor, APartitionActor::StaticClass, TEXT("APartitionActor"), &Z_Registration_Info_UClass_APartitionActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APartitionActor), 1924409315U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ActorPartition_PartitionActor_h_4122373288(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ActorPartition_PartitionActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ActorPartition_PartitionActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
