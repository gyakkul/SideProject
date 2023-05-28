// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Cascade/Classes/CascadeConfiguration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCascadeConfiguration() {}
// Cross Module References
	CASCADE_API UClass* Z_Construct_UClass_UCascadeConfiguration();
	CASCADE_API UClass* Z_Construct_UClass_UCascadeConfiguration_NoRegister();
	CASCADE_API UScriptStruct* Z_Construct_UScriptStruct_FModuleMenuMapper();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Cascade();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModuleMenuMapper;
class UScriptStruct* FModuleMenuMapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModuleMenuMapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModuleMenuMapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModuleMenuMapper, (UObject*)Z_Construct_UPackage__Script_Cascade(), TEXT("ModuleMenuMapper"));
	}
	return Z_Registration_Info_UScriptStruct_ModuleMenuMapper.OuterSingleton;
}
template<> CASCADE_API UScriptStruct* StaticStruct<FModuleMenuMapper>()
{
	return FModuleMenuMapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FModuleMenuMapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ObjName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InvalidObjNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InvalidObjNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InvalidObjNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Module-to-TypeData mapping helper. */" },
		{ "ModuleRelativePath", "Classes/CascadeConfiguration.h" },
		{ "ToolTip", "Module-to-TypeData mapping helper." },
	};
#endif
	void* Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModuleMenuMapper>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::NewProp_ObjName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CascadeConfiguration.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::NewProp_ObjName = { "ObjName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FModuleMenuMapper, ObjName), METADATA_PARAMS(Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::NewProp_ObjName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::NewProp_ObjName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::NewProp_InvalidObjNames_Inner = { "InvalidObjNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::NewProp_InvalidObjNames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CascadeConfiguration.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::NewProp_InvalidObjNames = { "InvalidObjNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FModuleMenuMapper, InvalidObjNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::NewProp_InvalidObjNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::NewProp_InvalidObjNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::NewProp_ObjName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::NewProp_InvalidObjNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::NewProp_InvalidObjNames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Cascade,
		nullptr,
		&NewStructOps,
		"ModuleMenuMapper",
		sizeof(FModuleMenuMapper),
		alignof(FModuleMenuMapper),
		Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModuleMenuMapper()
	{
		if (!Z_Registration_Info_UScriptStruct_ModuleMenuMapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModuleMenuMapper.InnerSingleton, Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ModuleMenuMapper.InnerSingleton;
	}
	void UCascadeConfiguration::StaticRegisterNativesUCascadeConfiguration()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCascadeConfiguration);
	UClass* Z_Construct_UClass_UCascadeConfiguration_NoRegister()
	{
		return UCascadeConfiguration::StaticClass();
	}
	struct Z_Construct_UClass_UCascadeConfiguration_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleMenu_TypeDataToBaseModuleRejections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleMenu_TypeDataToBaseModuleRejections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModuleMenu_TypeDataToBaseModuleRejections;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleMenu_TypeDataToSpecificModuleRejections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleMenu_TypeDataToSpecificModuleRejections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModuleMenu_TypeDataToSpecificModuleRejections;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ModuleMenu_ModuleRejections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleMenu_ModuleRejections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModuleMenu_ModuleRejections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCascadeConfiguration_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Cascade,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCascadeConfiguration_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "CascadeConfiguration.h" },
		{ "ModuleRelativePath", "Classes/CascadeConfiguration.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_TypeDataToBaseModuleRejections_Inner = { "ModuleMenu_TypeDataToBaseModuleRejections", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FModuleMenuMapper, METADATA_PARAMS(nullptr, 0) }; // 3012184213
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_TypeDataToBaseModuleRejections_MetaData[] = {
		{ "Category", "Configure" },
		{ "Comment", "/**\n\x09 *\x09TypeData-to-base module mappings.\n\x09 *\x09These will disallow complete 'sub-menus' depending on the TypeData utilized.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/CascadeConfiguration.h" },
		{ "ToolTip", "TypeData-to-base module mappings.\nThese will disallow complete 'sub-menus' depending on the TypeData utilized." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_TypeDataToBaseModuleRejections = { "ModuleMenu_TypeDataToBaseModuleRejections", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCascadeConfiguration, ModuleMenu_TypeDataToBaseModuleRejections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_TypeDataToBaseModuleRejections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_TypeDataToBaseModuleRejections_MetaData)) }; // 3012184213
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_TypeDataToSpecificModuleRejections_Inner = { "ModuleMenu_TypeDataToSpecificModuleRejections", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FModuleMenuMapper, METADATA_PARAMS(nullptr, 0) }; // 3012184213
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_TypeDataToSpecificModuleRejections_MetaData[] = {
		{ "Category", "Configure" },
		{ "Comment", "/** Module-to-TypeData mappings. */" },
		{ "ModuleRelativePath", "Classes/CascadeConfiguration.h" },
		{ "ToolTip", "Module-to-TypeData mappings." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_TypeDataToSpecificModuleRejections = { "ModuleMenu_TypeDataToSpecificModuleRejections", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCascadeConfiguration, ModuleMenu_TypeDataToSpecificModuleRejections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_TypeDataToSpecificModuleRejections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_TypeDataToSpecificModuleRejections_MetaData)) }; // 3012184213
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_ModuleRejections_Inner = { "ModuleMenu_ModuleRejections", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_ModuleRejections_MetaData[] = {
		{ "Category", "Configure" },
		{ "Comment", "/** Modules that Cascade should ignore in the menu system. */" },
		{ "ModuleRelativePath", "Classes/CascadeConfiguration.h" },
		{ "ToolTip", "Modules that Cascade should ignore in the menu system." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_ModuleRejections = { "ModuleMenu_ModuleRejections", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCascadeConfiguration, ModuleMenu_ModuleRejections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_ModuleRejections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_ModuleRejections_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCascadeConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_TypeDataToBaseModuleRejections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_TypeDataToBaseModuleRejections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_TypeDataToSpecificModuleRejections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_TypeDataToSpecificModuleRejections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_ModuleRejections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_ModuleRejections,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCascadeConfiguration_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCascadeConfiguration>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCascadeConfiguration_Statics::ClassParams = {
		&UCascadeConfiguration::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCascadeConfiguration_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCascadeConfiguration_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCascadeConfiguration_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCascadeConfiguration_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCascadeConfiguration()
	{
		if (!Z_Registration_Info_UClass_UCascadeConfiguration.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCascadeConfiguration.OuterSingleton, Z_Construct_UClass_UCascadeConfiguration_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCascadeConfiguration.OuterSingleton;
	}
	template<> CASCADE_API UClass* StaticClass<UCascadeConfiguration>()
	{
		return UCascadeConfiguration::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCascadeConfiguration);
	UCascadeConfiguration::~UCascadeConfiguration() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Cascade_Classes_CascadeConfiguration_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Cascade_Classes_CascadeConfiguration_h_Statics::ScriptStructInfo[] = {
		{ FModuleMenuMapper::StaticStruct, Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::NewStructOps, TEXT("ModuleMenuMapper"), &Z_Registration_Info_UScriptStruct_ModuleMenuMapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModuleMenuMapper), 3012184213U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Cascade_Classes_CascadeConfiguration_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCascadeConfiguration, UCascadeConfiguration::StaticClass, TEXT("UCascadeConfiguration"), &Z_Registration_Info_UClass_UCascadeConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCascadeConfiguration), 795348026U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Cascade_Classes_CascadeConfiguration_h_374059048(TEXT("/Script/Cascade"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Cascade_Classes_CascadeConfiguration_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Cascade_Classes_CascadeConfiguration_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Cascade_Classes_CascadeConfiguration_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Cascade_Classes_CascadeConfiguration_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
