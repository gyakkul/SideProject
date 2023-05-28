// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectTemplates/DatasmithSceneComponentTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithSceneComponentTemplate() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithSceneComponentTemplate();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithSceneComponentTemplate_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentMobility();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References
	void UDatasmithSceneComponentTemplate::StaticRegisterNativesUDatasmithSceneComponentTemplate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithSceneComponentTemplate);
	UClass* Z_Construct_UClass_UDatasmithSceneComponentTemplate_NoRegister()
	{
		return UDatasmithSceneComponentTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mobility_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mobility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachParent_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AttachParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[];
#endif
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadow_MetaData[];
#endif
		static void NewProp_bCastShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadow;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Tags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectTemplate,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectTemplates/DatasmithSceneComponentTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithSceneComponentTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_RelativeTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithSceneComponentTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithSceneComponentTemplate, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_RelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_RelativeTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_Mobility_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithSceneComponentTemplate.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_Mobility = { "Mobility", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithSceneComponentTemplate, Mobility), Z_Construct_UEnum_Engine_EComponentMobility, METADATA_PARAMS(Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_Mobility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_Mobility_MetaData)) }; // 3258784245
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_AttachParent_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithSceneComponentTemplate.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_AttachParent = { "AttachParent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithSceneComponentTemplate, AttachParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_AttachParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_AttachParent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_bVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithSceneComponentTemplate.h" },
	};
#endif
	void Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((UDatasmithSceneComponentTemplate*)Obj)->bVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithSceneComponentTemplate), &Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_bVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_bVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_bCastShadow_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithSceneComponentTemplate.h" },
	};
#endif
	void Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_bCastShadow_SetBit(void* Obj)
	{
		((UDatasmithSceneComponentTemplate*)Obj)->bCastShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_bCastShadow = { "bCastShadow", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithSceneComponentTemplate), &Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_bCastShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_bCastShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_bCastShadow_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_Tags_ElementProp = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_Tags_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithSceneComponentTemplate.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithSceneComponentTemplate, Tags), METADATA_PARAMS(Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_Tags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_RelativeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_Mobility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_AttachParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_bVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_bCastShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_Tags_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::NewProp_Tags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithSceneComponentTemplate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::ClassParams = {
		&UDatasmithSceneComponentTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithSceneComponentTemplate()
	{
		if (!Z_Registration_Info_UClass_UDatasmithSceneComponentTemplate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithSceneComponentTemplate.OuterSingleton, Z_Construct_UClass_UDatasmithSceneComponentTemplate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithSceneComponentTemplate.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithSceneComponentTemplate>()
	{
		return UDatasmithSceneComponentTemplate::StaticClass();
	}
	UDatasmithSceneComponentTemplate::UDatasmithSceneComponentTemplate() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithSceneComponentTemplate);
	UDatasmithSceneComponentTemplate::~UDatasmithSceneComponentTemplate() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithSceneComponentTemplate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithSceneComponentTemplate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithSceneComponentTemplate, UDatasmithSceneComponentTemplate::StaticClass, TEXT("UDatasmithSceneComponentTemplate"), &Z_Registration_Info_UClass_UDatasmithSceneComponentTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithSceneComponentTemplate), 1488511892U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithSceneComponentTemplate_h_3876695049(TEXT("/Script/DatasmithContent"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithSceneComponentTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithSceneComponentTemplate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
