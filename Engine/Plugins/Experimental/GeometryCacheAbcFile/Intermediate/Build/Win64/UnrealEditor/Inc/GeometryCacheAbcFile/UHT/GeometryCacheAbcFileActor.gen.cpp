// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/GeometryCacheAbcFileActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCacheAbcFileActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GEOMETRYCACHEABCFILE_API UClass* Z_Construct_UClass_AGeometryCacheAbcFileActor();
	GEOMETRYCACHEABCFILE_API UClass* Z_Construct_UClass_AGeometryCacheAbcFileActor_NoRegister();
	GEOMETRYCACHEABCFILE_API UClass* Z_Construct_UClass_UGeometryCacheAbcFileComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryCacheAbcFile();
// End Cross Module References
	void AGeometryCacheAbcFileActor::StaticRegisterNativesAGeometryCacheAbcFileActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeometryCacheAbcFileActor);
	UClass* Z_Construct_UClass_AGeometryCacheAbcFileActor_NoRegister()
	{
		return AGeometryCacheAbcFileActor::StaticClass();
	}
	struct Z_Construct_UClass_AGeometryCacheAbcFileActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCacheAbcFileComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GeometryCacheAbcFileComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeometryCacheAbcFileActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCacheAbcFile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCacheAbcFileActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** GeometryCacheAbcFile actor serves as a placeable actor for GeometryCache loading from an Alembic file */" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "GeometryCacheAbcFileActor.h" },
		{ "ModuleRelativePath", "Private/GeometryCacheAbcFileActor.h" },
		{ "ToolTip", "GeometryCacheAbcFile actor serves as a placeable actor for GeometryCache loading from an Alembic file" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCacheAbcFileActor_Statics::NewProp_GeometryCacheAbcFileComponent_MetaData[] = {
		{ "Category", "GeometryCacheAbcFileActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/GeometryCacheAbcFileActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGeometryCacheAbcFileActor_Statics::NewProp_GeometryCacheAbcFileComponent = { "GeometryCacheAbcFileComponent", nullptr, (EPropertyFlags)0x00440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCacheAbcFileActor, GeometryCacheAbcFileComponent), Z_Construct_UClass_UGeometryCacheAbcFileComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeometryCacheAbcFileActor_Statics::NewProp_GeometryCacheAbcFileComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCacheAbcFileActor_Statics::NewProp_GeometryCacheAbcFileComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeometryCacheAbcFileActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCacheAbcFileActor_Statics::NewProp_GeometryCacheAbcFileComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeometryCacheAbcFileActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeometryCacheAbcFileActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeometryCacheAbcFileActor_Statics::ClassParams = {
		&AGeometryCacheAbcFileActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGeometryCacheAbcFileActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCacheAbcFileActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGeometryCacheAbcFileActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCacheAbcFileActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeometryCacheAbcFileActor()
	{
		if (!Z_Registration_Info_UClass_AGeometryCacheAbcFileActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeometryCacheAbcFileActor.OuterSingleton, Z_Construct_UClass_AGeometryCacheAbcFileActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGeometryCacheAbcFileActor.OuterSingleton;
	}
	template<> GEOMETRYCACHEABCFILE_API UClass* StaticClass<AGeometryCacheAbcFileActor>()
	{
		return AGeometryCacheAbcFileActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeometryCacheAbcFileActor);
	AGeometryCacheAbcFileActor::~AGeometryCacheAbcFileActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCacheAbcFile_Source_GeometryCacheAbcFile_Private_GeometryCacheAbcFileActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCacheAbcFile_Source_GeometryCacheAbcFile_Private_GeometryCacheAbcFileActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGeometryCacheAbcFileActor, AGeometryCacheAbcFileActor::StaticClass, TEXT("AGeometryCacheAbcFileActor"), &Z_Registration_Info_UClass_AGeometryCacheAbcFileActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeometryCacheAbcFileActor), 4044702851U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCacheAbcFile_Source_GeometryCacheAbcFile_Private_GeometryCacheAbcFileActor_h_2091308008(TEXT("/Script/GeometryCacheAbcFile"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCacheAbcFile_Source_GeometryCacheAbcFile_Private_GeometryCacheAbcFileActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCacheAbcFile_Source_GeometryCacheAbcFile_Private_GeometryCacheAbcFileActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
