// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Instances/InstancedPlacementPartitionActor.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInstancedPlacementPartitionActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_AInstancedPlacementPartitionActor();
	ENGINE_API UClass* Z_Construct_UClass_AInstancedPlacementPartitionActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AISMPartitionActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void AInstancedPlacementPartitionActor::StaticRegisterNativesAInstancedPlacementPartitionActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInstancedPlacementPartitionActor);
	UClass* Z_Construct_UClass_AInstancedPlacementPartitionActor_NoRegister()
	{
		return AInstancedPlacementPartitionActor::StaticClass();
	}
	struct Z_Construct_UClass_AInstancedPlacementPartitionActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlacementGridGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlacementGridGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInstancedPlacementPartitionActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AISMPartitionActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInstancedPlacementPartitionActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The base class used by any editor placement of instanced objects, which holds any relevant runtime data for the placed instances.\n */" },
		{ "IncludePath", "Instances/InstancedPlacementPartitionActor.h" },
		{ "ModuleRelativePath", "Public/Instances/InstancedPlacementPartitionActor.h" },
		{ "ToolTip", "The base class used by any editor placement of instanced objects, which holds any relevant runtime data for the placed instances." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInstancedPlacementPartitionActor_Statics::NewProp_PlacementGridGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/Instances/InstancedPlacementPartitionActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInstancedPlacementPartitionActor_Statics::NewProp_PlacementGridGuid = { "PlacementGridGuid", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInstancedPlacementPartitionActor, PlacementGridGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_AInstancedPlacementPartitionActor_Statics::NewProp_PlacementGridGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInstancedPlacementPartitionActor_Statics::NewProp_PlacementGridGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInstancedPlacementPartitionActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInstancedPlacementPartitionActor_Statics::NewProp_PlacementGridGuid,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInstancedPlacementPartitionActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInstancedPlacementPartitionActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInstancedPlacementPartitionActor_Statics::ClassParams = {
		&AInstancedPlacementPartitionActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_AInstancedPlacementPartitionActor_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_AInstancedPlacementPartitionActor_Statics::PropPointers), 0),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInstancedPlacementPartitionActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInstancedPlacementPartitionActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInstancedPlacementPartitionActor()
	{
		if (!Z_Registration_Info_UClass_AInstancedPlacementPartitionActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInstancedPlacementPartitionActor.OuterSingleton, Z_Construct_UClass_AInstancedPlacementPartitionActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInstancedPlacementPartitionActor.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<AInstancedPlacementPartitionActor>()
	{
		return AInstancedPlacementPartitionActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInstancedPlacementPartitionActor);
	AInstancedPlacementPartitionActor::~AInstancedPlacementPartitionActor() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AInstancedPlacementPartitionActor)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Instances_InstancedPlacementPartitionActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Instances_InstancedPlacementPartitionActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInstancedPlacementPartitionActor, AInstancedPlacementPartitionActor::StaticClass, TEXT("AInstancedPlacementPartitionActor"), &Z_Registration_Info_UClass_AInstancedPlacementPartitionActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInstancedPlacementPartitionActor), 1558312434U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Instances_InstancedPlacementPartitionActor_h_2865028525(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Instances_InstancedPlacementPartitionActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Instances_InstancedPlacementPartitionActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
