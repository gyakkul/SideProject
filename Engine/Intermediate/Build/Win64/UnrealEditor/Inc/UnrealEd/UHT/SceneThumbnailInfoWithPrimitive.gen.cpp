// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ThumbnailRendering/SceneThumbnailInfoWithPrimitive.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneThumbnailInfoWithPrimitive() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	UNREALED_API UClass* Z_Construct_UClass_USceneThumbnailInfo();
	UNREALED_API UClass* Z_Construct_UClass_USceneThumbnailInfoWithPrimitive();
	UNREALED_API UClass* Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EThumbnailPrimType();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void USceneThumbnailInfoWithPrimitive::StaticRegisterNativesUSceneThumbnailInfoWithPrimitive()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USceneThumbnailInfoWithPrimitive);
	UClass* Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_NoRegister()
	{
		return USceneThumbnailInfoWithPrimitive::StaticClass();
	}
	struct Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PrimitiveType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUserModifiedShape_MetaData[];
#endif
		static void NewProp_bUserModifiedShape_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUserModifiedShape;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneThumbnailInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThumbnailRendering/SceneThumbnailInfoWithPrimitive.h" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/SceneThumbnailInfoWithPrimitive.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_PrimitiveType_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "Comment", "/** The type of primitive used in this thumbnail */" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/SceneThumbnailInfoWithPrimitive.h" },
		{ "ToolTip", "The type of primitive used in this thumbnail" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_PrimitiveType = { "PrimitiveType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneThumbnailInfoWithPrimitive, PrimitiveType), Z_Construct_UEnum_UnrealEd_EThumbnailPrimType, METADATA_PARAMS(Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_PrimitiveType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_PrimitiveType_MetaData)) }; // 123934683
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_PreviewMesh_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.StaticMesh,/Script/Engine.SkeletalMesh" },
		{ "Category", "Thumbnail" },
		{ "Comment", "/** The custom mesh used when the primitive type is TPT_None */" },
		{ "ExactClass", "true" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/SceneThumbnailInfoWithPrimitive.h" },
		{ "ToolTip", "The custom mesh used when the primitive type is TPT_None" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneThumbnailInfoWithPrimitive, PreviewMesh), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_PreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_PreviewMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_bUserModifiedShape_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/SceneThumbnailInfoWithPrimitive.h" },
	};
#endif
	void Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_bUserModifiedShape_SetBit(void* Obj)
	{
		((USceneThumbnailInfoWithPrimitive*)Obj)->bUserModifiedShape = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_bUserModifiedShape = { "bUserModifiedShape", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USceneThumbnailInfoWithPrimitive), &Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_bUserModifiedShape_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_bUserModifiedShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_bUserModifiedShape_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_PrimitiveType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_PreviewMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::NewProp_bUserModifiedShape,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USceneThumbnailInfoWithPrimitive>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::ClassParams = {
		&USceneThumbnailInfoWithPrimitive::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USceneThumbnailInfoWithPrimitive()
	{
		if (!Z_Registration_Info_UClass_USceneThumbnailInfoWithPrimitive.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USceneThumbnailInfoWithPrimitive.OuterSingleton, Z_Construct_UClass_USceneThumbnailInfoWithPrimitive_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USceneThumbnailInfoWithPrimitive.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<USceneThumbnailInfoWithPrimitive>()
	{
		return USceneThumbnailInfoWithPrimitive::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USceneThumbnailInfoWithPrimitive);
	USceneThumbnailInfoWithPrimitive::~USceneThumbnailInfoWithPrimitive() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USceneThumbnailInfoWithPrimitive)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SceneThumbnailInfoWithPrimitive_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SceneThumbnailInfoWithPrimitive_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USceneThumbnailInfoWithPrimitive, USceneThumbnailInfoWithPrimitive::StaticClass, TEXT("USceneThumbnailInfoWithPrimitive"), &Z_Registration_Info_UClass_USceneThumbnailInfoWithPrimitive, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USceneThumbnailInfoWithPrimitive), 2753096942U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SceneThumbnailInfoWithPrimitive_h_3555007767(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SceneThumbnailInfoWithPrimitive_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SceneThumbnailInfoWithPrimitive_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
