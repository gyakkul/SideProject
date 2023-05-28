// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/MaterialGraph/MaterialGraphNode_PinBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialGraphNode_PinBase() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode_PinBase();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode_PinBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UMaterialGraphNode_PinBase::StaticRegisterNativesUMaterialGraphNode_PinBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialGraphNode_PinBase);
	UClass* Z_Construct_UClass_UMaterialGraphNode_PinBase_NoRegister()
	{
		return UMaterialGraphNode_PinBase::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialGraphNode_PinBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialGraphNode_PinBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialGraphNode_PinBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MaterialGraph/MaterialGraphNode_PinBase.h" },
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraphNode_PinBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialGraphNode_PinBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialGraphNode_PinBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialGraphNode_PinBase_Statics::ClassParams = {
		&UMaterialGraphNode_PinBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialGraphNode_PinBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialGraphNode_PinBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialGraphNode_PinBase()
	{
		if (!Z_Registration_Info_UClass_UMaterialGraphNode_PinBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialGraphNode_PinBase.OuterSingleton, Z_Construct_UClass_UMaterialGraphNode_PinBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialGraphNode_PinBase.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UMaterialGraphNode_PinBase>()
	{
		return UMaterialGraphNode_PinBase::StaticClass();
	}
	UMaterialGraphNode_PinBase::UMaterialGraphNode_PinBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialGraphNode_PinBase);
	UMaterialGraphNode_PinBase::~UMaterialGraphNode_PinBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_PinBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_PinBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialGraphNode_PinBase, UMaterialGraphNode_PinBase::StaticClass, TEXT("UMaterialGraphNode_PinBase"), &Z_Registration_Info_UClass_UMaterialGraphNode_PinBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialGraphNode_PinBase), 91804258U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_PinBase_h_4144430638(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_PinBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_PinBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
