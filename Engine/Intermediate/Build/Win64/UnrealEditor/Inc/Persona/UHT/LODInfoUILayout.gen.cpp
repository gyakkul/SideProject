// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/LODInfoUILayout.h"
#include "../../Source/Runtime/Engine/Classes/Engine/SkinnedAssetCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLODInfoUILayout() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshLODInfo();
	PERSONA_API UClass* Z_Construct_UClass_ULODInfoUILayout();
	PERSONA_API UClass* Z_Construct_UClass_ULODInfoUILayout_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Persona();
// End Cross Module References
	void ULODInfoUILayout::StaticRegisterNativesULODInfoUILayout()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULODInfoUILayout);
	UClass* Z_Construct_UClass_ULODInfoUILayout_NoRegister()
	{
		return ULODInfoUILayout::StaticClass();
	}
	struct Z_Construct_UClass_ULODInfoUILayout_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LODInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULODInfoUILayout_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Persona,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODInfoUILayout_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "LODInfoUILayout.h" },
		{ "ModuleRelativePath", "Private/LODInfoUILayout.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODInfoUILayout_Statics::NewProp_LODInfo_MetaData[] = {
		{ "Category", "LevelOfDetail" },
		{ "Comment", "/** Struct containing information for a LOD level, such as materials to use, and when use the LOD. */" },
		{ "ModuleRelativePath", "Private/LODInfoUILayout.h" },
		{ "ToolTip", "Struct containing information for a LOD level, such as materials to use, and when use the LOD." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULODInfoUILayout_Statics::NewProp_LODInfo = { "LODInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULODInfoUILayout, LODInfo), Z_Construct_UScriptStruct_FSkeletalMeshLODInfo, METADATA_PARAMS(Z_Construct_UClass_ULODInfoUILayout_Statics::NewProp_LODInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULODInfoUILayout_Statics::NewProp_LODInfo_MetaData)) }; // 2104056873
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULODInfoUILayout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODInfoUILayout_Statics::NewProp_LODInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULODInfoUILayout_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULODInfoUILayout>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULODInfoUILayout_Statics::ClassParams = {
		&ULODInfoUILayout::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULODInfoUILayout_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULODInfoUILayout_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULODInfoUILayout_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULODInfoUILayout_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULODInfoUILayout()
	{
		if (!Z_Registration_Info_UClass_ULODInfoUILayout.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULODInfoUILayout.OuterSingleton, Z_Construct_UClass_ULODInfoUILayout_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULODInfoUILayout.OuterSingleton;
	}
	template<> PERSONA_API UClass* StaticClass<ULODInfoUILayout>()
	{
		return ULODInfoUILayout::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULODInfoUILayout);
	ULODInfoUILayout::~ULODInfoUILayout() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Private_LODInfoUILayout_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Private_LODInfoUILayout_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULODInfoUILayout, ULODInfoUILayout::StaticClass, TEXT("ULODInfoUILayout"), &Z_Registration_Info_UClass_ULODInfoUILayout, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULODInfoUILayout), 3682751447U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Private_LODInfoUILayout_h_1108676049(TEXT("/Script/Persona"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Private_LODInfoUILayout_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Private_LODInfoUILayout_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
