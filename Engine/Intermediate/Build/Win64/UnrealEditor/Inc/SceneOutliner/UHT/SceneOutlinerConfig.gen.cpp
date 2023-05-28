// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SceneOutlinerConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneOutlinerConfig() {}
// Cross Module References
	EDITORCONFIG_API UClass* Z_Construct_UClass_UEditorConfigBase();
	SCENEOUTLINER_API UClass* Z_Construct_UClass_UOutlinerConfig();
	SCENEOUTLINER_API UClass* Z_Construct_UClass_UOutlinerConfig_NoRegister();
	SCENEOUTLINER_API UScriptStruct* Z_Construct_UScriptStruct_FSceneOutlinerConfig();
	UPackage* Z_Construct_UPackage__Script_SceneOutliner();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SceneOutlinerConfig;
class UScriptStruct* FSceneOutlinerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SceneOutlinerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SceneOutlinerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSceneOutlinerConfig, (UObject*)Z_Construct_UPackage__Script_SceneOutliner(), TEXT("SceneOutlinerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_SceneOutlinerConfig.OuterSingleton;
}
template<> SCENEOUTLINER_API UScriptStruct* StaticStruct<FSceneOutlinerConfig>()
{
	return FSceneOutlinerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSceneOutlinerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ColumnVisibilities_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ColumnVisibilities_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColumnVisibilities_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ColumnVisibilities;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldStackHierarchyHeaders_MetaData[];
#endif
		static void NewProp_bShouldStackHierarchyHeaders_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldStackHierarchyHeaders;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSceneOutlinerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SceneOutlinerConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSceneOutlinerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSceneOutlinerConfig>();
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSceneOutlinerConfig_Statics::NewProp_ColumnVisibilities_ValueProp = { "ColumnVisibilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSceneOutlinerConfig_Statics::NewProp_ColumnVisibilities_Key_KeyProp = { "ColumnVisibilities_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSceneOutlinerConfig_Statics::NewProp_ColumnVisibilities_MetaData[] = {
		{ "Comment", "/** Map to store the visibility of each column */" },
		{ "ModuleRelativePath", "Private/SceneOutlinerConfig.h" },
		{ "ToolTip", "Map to store the visibility of each column" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSceneOutlinerConfig_Statics::NewProp_ColumnVisibilities = { "ColumnVisibilities", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSceneOutlinerConfig, ColumnVisibilities), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSceneOutlinerConfig_Statics::NewProp_ColumnVisibilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSceneOutlinerConfig_Statics::NewProp_ColumnVisibilities_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSceneOutlinerConfig_Statics::NewProp_bShouldStackHierarchyHeaders_MetaData[] = {
		{ "Comment", "/** Whether the hierarchy is pinned at the top of the outliner*/" },
		{ "ModuleRelativePath", "Private/SceneOutlinerConfig.h" },
		{ "ToolTip", "Whether the hierarchy is pinned at the top of the outliner" },
	};
#endif
	void Z_Construct_UScriptStruct_FSceneOutlinerConfig_Statics::NewProp_bShouldStackHierarchyHeaders_SetBit(void* Obj)
	{
		((FSceneOutlinerConfig*)Obj)->bShouldStackHierarchyHeaders = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSceneOutlinerConfig_Statics::NewProp_bShouldStackHierarchyHeaders = { "bShouldStackHierarchyHeaders", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSceneOutlinerConfig), &Z_Construct_UScriptStruct_FSceneOutlinerConfig_Statics::NewProp_bShouldStackHierarchyHeaders_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSceneOutlinerConfig_Statics::NewProp_bShouldStackHierarchyHeaders_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSceneOutlinerConfig_Statics::NewProp_bShouldStackHierarchyHeaders_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSceneOutlinerConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSceneOutlinerConfig_Statics::NewProp_ColumnVisibilities_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSceneOutlinerConfig_Statics::NewProp_ColumnVisibilities_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSceneOutlinerConfig_Statics::NewProp_ColumnVisibilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSceneOutlinerConfig_Statics::NewProp_bShouldStackHierarchyHeaders,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSceneOutlinerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SceneOutliner,
		nullptr,
		&NewStructOps,
		"SceneOutlinerConfig",
		sizeof(FSceneOutlinerConfig),
		alignof(FSceneOutlinerConfig),
		Z_Construct_UScriptStruct_FSceneOutlinerConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSceneOutlinerConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSceneOutlinerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSceneOutlinerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSceneOutlinerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_SceneOutlinerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SceneOutlinerConfig.InnerSingleton, Z_Construct_UScriptStruct_FSceneOutlinerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SceneOutlinerConfig.InnerSingleton;
	}
	void UOutlinerConfig::StaticRegisterNativesUOutlinerConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOutlinerConfig);
	UClass* Z_Construct_UClass_UOutlinerConfig_NoRegister()
	{
		return UOutlinerConfig::StaticClass();
	}
	struct Z_Construct_UClass_UOutlinerConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Outliners_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Outliners_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Outliners_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Outliners;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOutlinerConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorConfigBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SceneOutliner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutlinerConfig_Statics::Class_MetaDataParams[] = {
		{ "EditorConfig", "Outliner" },
		{ "IncludePath", "SceneOutlinerConfig.h" },
		{ "ModuleRelativePath", "Private/SceneOutlinerConfig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOutlinerConfig_Statics::NewProp_Outliners_ValueProp = { "Outliners", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FSceneOutlinerConfig, METADATA_PARAMS(nullptr, 0) }; // 1708343209
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOutlinerConfig_Statics::NewProp_Outliners_Key_KeyProp = { "Outliners_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutlinerConfig_Statics::NewProp_Outliners_MetaData[] = {
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Private/SceneOutlinerConfig.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOutlinerConfig_Statics::NewProp_Outliners = { "Outliners", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOutlinerConfig, Outliners), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOutlinerConfig_Statics::NewProp_Outliners_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOutlinerConfig_Statics::NewProp_Outliners_MetaData)) }; // 1708343209
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOutlinerConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutlinerConfig_Statics::NewProp_Outliners_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutlinerConfig_Statics::NewProp_Outliners_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutlinerConfig_Statics::NewProp_Outliners,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOutlinerConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOutlinerConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOutlinerConfig_Statics::ClassParams = {
		&UOutlinerConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOutlinerConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOutlinerConfig_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOutlinerConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOutlinerConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOutlinerConfig()
	{
		if (!Z_Registration_Info_UClass_UOutlinerConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOutlinerConfig.OuterSingleton, Z_Construct_UClass_UOutlinerConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOutlinerConfig.OuterSingleton;
	}
	template<> SCENEOUTLINER_API UClass* StaticClass<UOutlinerConfig>()
	{
		return UOutlinerConfig::StaticClass();
	}
	UOutlinerConfig::UOutlinerConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOutlinerConfig);
	UOutlinerConfig::~UOutlinerConfig() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerConfig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerConfig_h_Statics::ScriptStructInfo[] = {
		{ FSceneOutlinerConfig::StaticStruct, Z_Construct_UScriptStruct_FSceneOutlinerConfig_Statics::NewStructOps, TEXT("SceneOutlinerConfig"), &Z_Registration_Info_UScriptStruct_SceneOutlinerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSceneOutlinerConfig), 1708343209U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOutlinerConfig, UOutlinerConfig::StaticClass, TEXT("UOutlinerConfig"), &Z_Registration_Info_UClass_UOutlinerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOutlinerConfig), 852306247U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerConfig_h_3077951088(TEXT("/Script/SceneOutliner"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerConfig_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerConfig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
