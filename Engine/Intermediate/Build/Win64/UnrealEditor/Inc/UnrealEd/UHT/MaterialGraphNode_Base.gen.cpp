// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/MaterialGraph/MaterialGraphNode_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialGraphNode_Base() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode_Base();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode_Base_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UMaterialGraphNode_Base::StaticRegisterNativesUMaterialGraphNode_Base()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialGraphNode_Base);
	UClass* Z_Construct_UClass_UMaterialGraphNode_Base_NoRegister()
	{
		return UMaterialGraphNode_Base::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialGraphNode_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialGraphNode_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialGraphNode_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MaterialGraph/MaterialGraphNode_Base.h" },
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraphNode_Base.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialGraphNode_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialGraphNode_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialGraphNode_Base_Statics::ClassParams = {
		&UMaterialGraphNode_Base::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialGraphNode_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialGraphNode_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialGraphNode_Base()
	{
		if (!Z_Registration_Info_UClass_UMaterialGraphNode_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialGraphNode_Base.OuterSingleton, Z_Construct_UClass_UMaterialGraphNode_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialGraphNode_Base.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UMaterialGraphNode_Base>()
	{
		return UMaterialGraphNode_Base::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialGraphNode_Base);
	UMaterialGraphNode_Base::~UMaterialGraphNode_Base() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Base_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialGraphNode_Base, UMaterialGraphNode_Base::StaticClass, TEXT("UMaterialGraphNode_Base"), &Z_Registration_Info_UClass_UMaterialGraphNode_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialGraphNode_Base), 3445001780U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Base_h_2135362190(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Base_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
