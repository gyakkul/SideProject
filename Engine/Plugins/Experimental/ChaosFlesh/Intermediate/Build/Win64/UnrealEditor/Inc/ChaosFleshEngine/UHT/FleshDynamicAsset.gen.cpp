// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosFlesh/FleshDynamicAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFleshDynamicAsset() {}
// Cross Module References
	CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_UFleshDynamicAsset();
	CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_UFleshDynamicAsset_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ChaosFleshEngine();
// End Cross Module References
	void UFleshDynamicAsset::StaticRegisterNativesUFleshDynamicAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFleshDynamicAsset);
	UClass* Z_Construct_UClass_UFleshDynamicAsset_NoRegister()
	{
		return UFleshDynamicAsset::StaticClass();
	}
	struct Z_Construct_UClass_UFleshDynamicAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFleshDynamicAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFleshDynamicAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* UFleshDynamicAsset (UObject)\n*\n* UObject wrapper for the dynamic attributes from the tetrahedral simulation. \n* \n*\x09""FVectorArray Vertex = GetAttribute<FVector3f>(\"Vertex\", VerticesGroup)\n*\n*/" },
		{ "IncludePath", "ChaosFlesh/FleshDynamicAsset.h" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/FleshDynamicAsset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UFleshDynamicAsset (UObject)\n\nUObject wrapper for the dynamic attributes from the tetrahedral simulation.\n\n     FVectorArray Vertex = GetAttribute<FVector3f>(\"Vertex\", VerticesGroup)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFleshDynamicAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFleshDynamicAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFleshDynamicAsset_Statics::ClassParams = {
		&UFleshDynamicAsset::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFleshDynamicAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFleshDynamicAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFleshDynamicAsset()
	{
		if (!Z_Registration_Info_UClass_UFleshDynamicAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFleshDynamicAsset.OuterSingleton, Z_Construct_UClass_UFleshDynamicAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFleshDynamicAsset.OuterSingleton;
	}
	template<> CHAOSFLESHENGINE_API UClass* StaticClass<UFleshDynamicAsset>()
	{
		return UFleshDynamicAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFleshDynamicAsset);
	UFleshDynamicAsset::~UFleshDynamicAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshDynamicAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshDynamicAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFleshDynamicAsset, UFleshDynamicAsset::StaticClass, TEXT("UFleshDynamicAsset"), &Z_Registration_Info_UClass_UFleshDynamicAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFleshDynamicAsset), 2998861626U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshDynamicAsset_h_4246869945(TEXT("/Script/ChaosFleshEngine"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshDynamicAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshDynamicAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
