// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectTemplates/DatasmithDecalComponentTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithDecalComponentTemplate() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithDecalComponentTemplate();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithDecalComponentTemplate_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References
	void UDatasmithDecalComponentTemplate::StaticRegisterNativesUDatasmithDecalComponentTemplate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithDecalComponentTemplate);
	UClass* Z_Construct_UClass_UDatasmithDecalComponentTemplate_NoRegister()
	{
		return UDatasmithDecalComponentTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SortOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DecalSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectTemplate,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectTemplates/DatasmithDecalComponentTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithDecalComponentTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::NewProp_SortOrder_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithDecalComponentTemplate.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::NewProp_SortOrder = { "SortOrder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithDecalComponentTemplate, SortOrder), METADATA_PARAMS(Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::NewProp_SortOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::NewProp_SortOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::NewProp_DecalSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithDecalComponentTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::NewProp_DecalSize = { "DecalSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithDecalComponentTemplate, DecalSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::NewProp_DecalSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::NewProp_DecalSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::NewProp_Material_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithDecalComponentTemplate.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithDecalComponentTemplate, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::NewProp_Material_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::NewProp_SortOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::NewProp_DecalSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::NewProp_Material,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithDecalComponentTemplate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::ClassParams = {
		&UDatasmithDecalComponentTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithDecalComponentTemplate()
	{
		if (!Z_Registration_Info_UClass_UDatasmithDecalComponentTemplate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithDecalComponentTemplate.OuterSingleton, Z_Construct_UClass_UDatasmithDecalComponentTemplate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithDecalComponentTemplate.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithDecalComponentTemplate>()
	{
		return UDatasmithDecalComponentTemplate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithDecalComponentTemplate);
	UDatasmithDecalComponentTemplate::~UDatasmithDecalComponentTemplate() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithDecalComponentTemplate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithDecalComponentTemplate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithDecalComponentTemplate, UDatasmithDecalComponentTemplate::StaticClass, TEXT("UDatasmithDecalComponentTemplate"), &Z_Registration_Info_UClass_UDatasmithDecalComponentTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithDecalComponentTemplate), 333861651U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithDecalComponentTemplate_h_1254215122(TEXT("/Script/DatasmithContent"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithDecalComponentTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithDecalComponentTemplate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
