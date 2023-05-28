// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/MaterialGraphNode_Knot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialGraphNode_Knot() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode_Knot();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode_Knot_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UMaterialGraphNode_Knot::StaticRegisterNativesUMaterialGraphNode_Knot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialGraphNode_Knot);
	UClass* Z_Construct_UClass_UMaterialGraphNode_Knot_NoRegister()
	{
		return UMaterialGraphNode_Knot::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialGraphNode_Knot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialGraphNode_Knot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialGraphNode_Knot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MaterialGraphNode_Knot.h" },
		{ "ModuleRelativePath", "Public/MaterialGraphNode_Knot.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialGraphNode_Knot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialGraphNode_Knot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialGraphNode_Knot_Statics::ClassParams = {
		&UMaterialGraphNode_Knot::StaticClass,
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
		0x000800B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialGraphNode_Knot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialGraphNode_Knot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialGraphNode_Knot()
	{
		if (!Z_Registration_Info_UClass_UMaterialGraphNode_Knot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialGraphNode_Knot.OuterSingleton, Z_Construct_UClass_UMaterialGraphNode_Knot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialGraphNode_Knot.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UMaterialGraphNode_Knot>()
	{
		return UMaterialGraphNode_Knot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialGraphNode_Knot);
	UMaterialGraphNode_Knot::~UMaterialGraphNode_Knot() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_MaterialGraphNode_Knot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_MaterialGraphNode_Knot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialGraphNode_Knot, UMaterialGraphNode_Knot::StaticClass, TEXT("UMaterialGraphNode_Knot"), &Z_Registration_Info_UClass_UMaterialGraphNode_Knot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialGraphNode_Knot), 299891384U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_MaterialGraphNode_Knot_h_3398352178(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_MaterialGraphNode_Knot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_MaterialGraphNode_Knot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
