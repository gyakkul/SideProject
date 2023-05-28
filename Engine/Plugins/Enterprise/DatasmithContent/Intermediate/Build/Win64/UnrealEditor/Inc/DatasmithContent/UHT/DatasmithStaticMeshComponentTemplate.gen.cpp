// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectTemplates/DatasmithStaticMeshComponentTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithStaticMeshComponentTemplate() {}
// Cross Module References
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References
	void UDatasmithStaticMeshComponentTemplate::StaticRegisterNativesUDatasmithStaticMeshComponentTemplate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithStaticMeshComponentTemplate);
	UClass* Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_NoRegister()
	{
		return UDatasmithStaticMeshComponentTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverrideMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectTemplate,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectTemplates/DatasmithStaticMeshComponentTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshComponentTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshComponentTemplate.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithStaticMeshComponentTemplate, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::NewProp_StaticMesh_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::NewProp_OverrideMaterials_Inner = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::NewProp_OverrideMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithStaticMeshComponentTemplate.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::NewProp_OverrideMaterials = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithStaticMeshComponentTemplate, OverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::NewProp_OverrideMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::NewProp_OverrideMaterials_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::NewProp_OverrideMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::NewProp_OverrideMaterials,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithStaticMeshComponentTemplate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::ClassParams = {
		&UDatasmithStaticMeshComponentTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate()
	{
		if (!Z_Registration_Info_UClass_UDatasmithStaticMeshComponentTemplate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithStaticMeshComponentTemplate.OuterSingleton, Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithStaticMeshComponentTemplate.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithStaticMeshComponentTemplate>()
	{
		return UDatasmithStaticMeshComponentTemplate::StaticClass();
	}
	UDatasmithStaticMeshComponentTemplate::UDatasmithStaticMeshComponentTemplate() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithStaticMeshComponentTemplate);
	UDatasmithStaticMeshComponentTemplate::~UDatasmithStaticMeshComponentTemplate() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithStaticMeshComponentTemplate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithStaticMeshComponentTemplate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithStaticMeshComponentTemplate, UDatasmithStaticMeshComponentTemplate::StaticClass, TEXT("UDatasmithStaticMeshComponentTemplate"), &Z_Registration_Info_UClass_UDatasmithStaticMeshComponentTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithStaticMeshComponentTemplate), 1701079918U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithStaticMeshComponentTemplate_h_2870721232(TEXT("/Script/DatasmithContent"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithStaticMeshComponentTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithStaticMeshComponentTemplate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
