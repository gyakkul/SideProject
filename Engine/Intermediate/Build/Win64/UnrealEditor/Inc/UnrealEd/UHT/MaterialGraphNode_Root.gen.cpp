// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/MaterialGraph/MaterialGraphNode_Root.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialGraphNode_Root() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode_Base();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode_Root();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode_Root_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UMaterialGraphNode_Root::StaticRegisterNativesUMaterialGraphNode_Root()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialGraphNode_Root);
	UClass* Z_Construct_UClass_UMaterialGraphNode_Root_NoRegister()
	{
		return UMaterialGraphNode_Root::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialGraphNode_Root_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialGraphNode_Root_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialGraphNode_Root_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MaterialGraph/MaterialGraphNode_Root.h" },
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraphNode_Root.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialGraphNode_Root_Statics::NewProp_Material_MetaData[] = {
		{ "Comment", "/** Material whose inputs this root node represents */" },
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraphNode_Root.h" },
		{ "ToolTip", "Material whose inputs this root node represents" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialGraphNode_Root_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialGraphNode_Root, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialGraphNode_Root_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialGraphNode_Root_Statics::NewProp_Material_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialGraphNode_Root_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialGraphNode_Root_Statics::NewProp_Material,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialGraphNode_Root_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialGraphNode_Root>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialGraphNode_Root_Statics::ClassParams = {
		&UMaterialGraphNode_Root::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialGraphNode_Root_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialGraphNode_Root_Statics::PropPointers),
		0,
		0x000800B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialGraphNode_Root_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialGraphNode_Root_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialGraphNode_Root()
	{
		if (!Z_Registration_Info_UClass_UMaterialGraphNode_Root.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialGraphNode_Root.OuterSingleton, Z_Construct_UClass_UMaterialGraphNode_Root_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialGraphNode_Root.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UMaterialGraphNode_Root>()
	{
		return UMaterialGraphNode_Root::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialGraphNode_Root);
	UMaterialGraphNode_Root::~UMaterialGraphNode_Root() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Root_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Root_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialGraphNode_Root, UMaterialGraphNode_Root::StaticClass, TEXT("UMaterialGraphNode_Root"), &Z_Registration_Info_UClass_UMaterialGraphNode_Root, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialGraphNode_Root), 2473701980U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Root_h_2244064298(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Root_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Root_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
