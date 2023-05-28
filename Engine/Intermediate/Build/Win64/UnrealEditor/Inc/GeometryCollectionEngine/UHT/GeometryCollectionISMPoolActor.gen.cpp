// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollection/GeometryCollectionISMPoolActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionISMPoolActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionISMPoolActor();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionISMPoolActor_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionISMPoolComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References
	void AGeometryCollectionISMPoolActor::StaticRegisterNativesAGeometryCollectionISMPoolActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeometryCollectionISMPoolActor);
	UClass* Z_Construct_UClass_AGeometryCollectionISMPoolActor_NoRegister()
	{
		return AGeometryCollectionISMPoolActor::StaticClass();
	}
	struct Z_Construct_UClass_AGeometryCollectionISMPoolActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ISMPoolComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ISMPoolComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeometryCollectionISMPoolActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionISMPoolActor_Statics::Class_MetaDataParams[] = {
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "GeometryCollection/GeometryCollectionISMPoolActor.h" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionISMPoolActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionISMPoolActor_Statics::NewProp_ISMPoolComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ISMPoolActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionISMPoolActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGeometryCollectionISMPoolActor_Statics::NewProp_ISMPoolComp = { "ISMPoolComp", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionISMPoolActor, ISMPoolComp), Z_Construct_UClass_UGeometryCollectionISMPoolComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionISMPoolActor_Statics::NewProp_ISMPoolComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionISMPoolActor_Statics::NewProp_ISMPoolComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeometryCollectionISMPoolActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionISMPoolActor_Statics::NewProp_ISMPoolComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeometryCollectionISMPoolActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeometryCollectionISMPoolActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeometryCollectionISMPoolActor_Statics::ClassParams = {
		&AGeometryCollectionISMPoolActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGeometryCollectionISMPoolActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionISMPoolActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionISMPoolActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionISMPoolActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeometryCollectionISMPoolActor()
	{
		if (!Z_Registration_Info_UClass_AGeometryCollectionISMPoolActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeometryCollectionISMPoolActor.OuterSingleton, Z_Construct_UClass_AGeometryCollectionISMPoolActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGeometryCollectionISMPoolActor.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<AGeometryCollectionISMPoolActor>()
	{
		return AGeometryCollectionISMPoolActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeometryCollectionISMPoolActor);
	AGeometryCollectionISMPoolActor::~AGeometryCollectionISMPoolActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionISMPoolActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionISMPoolActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGeometryCollectionISMPoolActor, AGeometryCollectionISMPoolActor::StaticClass, TEXT("AGeometryCollectionISMPoolActor"), &Z_Registration_Info_UClass_AGeometryCollectionISMPoolActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeometryCollectionISMPoolActor), 1036477920U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionISMPoolActor_h_1119414036(TEXT("/Script/GeometryCollectionEngine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionISMPoolActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionISMPoolActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
