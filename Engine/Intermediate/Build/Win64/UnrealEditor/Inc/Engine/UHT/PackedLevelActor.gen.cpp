// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/PackedLevelActor/PackedLevelActor.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePackedLevelActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_ALevelInstance();
	ENGINE_API UClass* Z_Construct_UClass_APackedLevelActor();
	ENGINE_API UClass* Z_Construct_UClass_APackedLevelActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void APackedLevelActor::StaticRegisterNativesAPackedLevelActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APackedLevelActor);
	UClass* Z_Construct_UClass_APackedLevelActor_NoRegister()
	{
		return APackedLevelActor::StaticClass();
	}
	struct Z_Construct_UClass_APackedLevelActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PackedBPDependencies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackedBPDependencies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PackedBPDependencies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackedVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PackedVersion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APackedLevelActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALevelInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APackedLevelActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * APackedLevelActor is the result of packing the source level (WorldAsset base class property) into a single actor. See FPackedLevelActorBuilder.\n * \n * \n * Other components are unsupported and will result in an incomplete APackedLevelActor. In this case using a regular ALevelInstance is recommended.\n */" },
		{ "IncludePath", "PackedLevelActor/PackedLevelActor.h" },
		{ "ModuleRelativePath", "Public/PackedLevelActor/PackedLevelActor.h" },
		{ "ToolTip", "APackedLevelActor is the result of packing the source level (WorldAsset base class property) into a single actor. See FPackedLevelActorBuilder.\n\n\nOther components are unsupported and will result in an incomplete APackedLevelActor. In this case using a regular ALevelInstance is recommended." },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_APackedLevelActor_Statics::NewProp_PackedBPDependencies_Inner = { "PackedBPDependencies", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APackedLevelActor_Statics::NewProp_PackedBPDependencies_MetaData[] = {
		{ "ModuleRelativePath", "Public/PackedLevelActor/PackedLevelActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APackedLevelActor_Statics::NewProp_PackedBPDependencies = { "PackedBPDependencies", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APackedLevelActor, PackedBPDependencies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APackedLevelActor_Statics::NewProp_PackedBPDependencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APackedLevelActor_Statics::NewProp_PackedBPDependencies_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APackedLevelActor_Statics::NewProp_PackedVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/PackedLevelActor/PackedLevelActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APackedLevelActor_Statics::NewProp_PackedVersion = { "PackedVersion", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APackedLevelActor, PackedVersion), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_APackedLevelActor_Statics::NewProp_PackedVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APackedLevelActor_Statics::NewProp_PackedVersion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APackedLevelActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APackedLevelActor_Statics::NewProp_PackedBPDependencies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APackedLevelActor_Statics::NewProp_PackedBPDependencies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APackedLevelActor_Statics::NewProp_PackedVersion,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_APackedLevelActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APackedLevelActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APackedLevelActor_Statics::ClassParams = {
		&APackedLevelActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_APackedLevelActor_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_APackedLevelActor_Statics::PropPointers), 0),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APackedLevelActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APackedLevelActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APackedLevelActor()
	{
		if (!Z_Registration_Info_UClass_APackedLevelActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APackedLevelActor.OuterSingleton, Z_Construct_UClass_APackedLevelActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APackedLevelActor.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<APackedLevelActor>()
	{
		return APackedLevelActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APackedLevelActor);
	APackedLevelActor::~APackedLevelActor() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(APackedLevelActor)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PackedLevelActor_PackedLevelActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PackedLevelActor_PackedLevelActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APackedLevelActor, APackedLevelActor::StaticClass, TEXT("APackedLevelActor"), &Z_Registration_Info_UClass_APackedLevelActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APackedLevelActor), 2856752055U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PackedLevelActor_PackedLevelActor_h_3795274199(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PackedLevelActor_PackedLevelActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PackedLevelActor_PackedLevelActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
