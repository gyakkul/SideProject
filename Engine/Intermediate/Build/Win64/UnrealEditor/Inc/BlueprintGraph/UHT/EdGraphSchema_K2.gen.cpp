// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EdGraphSchema_K2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphSchema_K2() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UEdGraphSchema_K2();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UEdGraphSchema_K2_NoRegister();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Struct();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References

static_assert(std::is_polymorphic<FEdGraphSchemaAction_K2Struct>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FEdGraphSchemaAction_K2Struct cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Struct;
class UScriptStruct* FEdGraphSchemaAction_K2Struct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Struct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Struct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Struct, (UObject*)Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2Struct"));
	}
	return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Struct.OuterSingleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2Struct>()
{
	return FEdGraphSchemaAction_K2Struct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Struct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Struct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Reference to an structure (only used in 'docked' palette) */" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2.h" },
		{ "ToolTip", "Reference to an structure (only used in 'docked' palette)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Struct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2Struct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Struct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"EdGraphSchemaAction_K2Struct",
		sizeof(FEdGraphSchemaAction_K2Struct),
		alignof(FEdGraphSchemaAction_K2Struct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Struct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Struct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Struct()
	{
		if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Struct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Struct.InnerSingleton, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Struct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Struct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintCallableFunctionRedirect;
class UScriptStruct* FBlueprintCallableFunctionRedirect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintCallableFunctionRedirect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintCallableFunctionRedirect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect, (UObject*)Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("BlueprintCallableFunctionRedirect"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintCallableFunctionRedirect.OuterSingleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FBlueprintCallableFunctionRedirect>()
{
	return FBlueprintCallableFunctionRedirect::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldFunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OldFunctionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewFunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewFunctionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintParamName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClassParamName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Structure used to automatically convert blueprintcallable functions (that have blueprint parameter) calls (in bp graph) \n// into their never versions (with class param instead of blueprint).\n" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2.h" },
		{ "ToolTip", "Structure used to automatically convert blueprintcallable functions (that have blueprint parameter) calls (in bp graph)\ninto their never versions (with class param instead of blueprint)." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintCallableFunctionRedirect>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_ClassName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintCallableFunctionRedirect, ClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_ClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_ClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_OldFunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_OldFunctionName = { "OldFunctionName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintCallableFunctionRedirect, OldFunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_OldFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_OldFunctionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_NewFunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_NewFunctionName = { "NewFunctionName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintCallableFunctionRedirect, NewFunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_NewFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_NewFunctionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_BlueprintParamName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_BlueprintParamName = { "BlueprintParamName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintCallableFunctionRedirect, BlueprintParamName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_BlueprintParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_BlueprintParamName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_ClassParamName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_ClassParamName = { "ClassParamName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintCallableFunctionRedirect, ClassParamName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_ClassParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_ClassParamName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_ClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_OldFunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_NewFunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_BlueprintParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewProp_ClassParamName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		nullptr,
		&NewStructOps,
		"BlueprintCallableFunctionRedirect",
		sizeof(FBlueprintCallableFunctionRedirect),
		alignof(FBlueprintCallableFunctionRedirect),
		Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect()
	{
		if (!Z_Registration_Info_UScriptStruct_BlueprintCallableFunctionRedirect.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintCallableFunctionRedirect.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlueprintCallableFunctionRedirect.InnerSingleton;
	}
	void UEdGraphSchema_K2::StaticRegisterNativesUEdGraphSchema_K2()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphSchema_K2);
	UClass* Z_Construct_UClass_UEdGraphSchema_K2_NoRegister()
	{
		return UEdGraphSchema_K2::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraphSchema_K2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditoronlyBPFunctionRedirects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditoronlyBPFunctionRedirects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EditoronlyBPFunctionRedirects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraphSchema_K2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphSchema_K2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraphSchema_K2.h" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEdGraphSchema_K2_Statics::NewProp_EditoronlyBPFunctionRedirects_Inner = { "EditoronlyBPFunctionRedirects", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect, METADATA_PARAMS(nullptr, 0) }; // 3086775045
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphSchema_K2_Statics::NewProp_EditoronlyBPFunctionRedirects_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEdGraphSchema_K2_Statics::NewProp_EditoronlyBPFunctionRedirects = { "EditoronlyBPFunctionRedirects", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdGraphSchema_K2, EditoronlyBPFunctionRedirects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEdGraphSchema_K2_Statics::NewProp_EditoronlyBPFunctionRedirects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphSchema_K2_Statics::NewProp_EditoronlyBPFunctionRedirects_MetaData)) }; // 3086775045
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdGraphSchema_K2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphSchema_K2_Statics::NewProp_EditoronlyBPFunctionRedirects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphSchema_K2_Statics::NewProp_EditoronlyBPFunctionRedirects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraphSchema_K2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphSchema_K2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphSchema_K2_Statics::ClassParams = {
		&UEdGraphSchema_K2::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEdGraphSchema_K2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphSchema_K2_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEdGraphSchema_K2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphSchema_K2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraphSchema_K2()
	{
		if (!Z_Registration_Info_UClass_UEdGraphSchema_K2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphSchema_K2.OuterSingleton, Z_Construct_UClass_UEdGraphSchema_K2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdGraphSchema_K2.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UEdGraphSchema_K2>()
	{
		return UEdGraphSchema_K2::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphSchema_K2);
	UEdGraphSchema_K2::~UEdGraphSchema_K2() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_Statics::ScriptStructInfo[] = {
		{ FEdGraphSchemaAction_K2Struct::StaticStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Struct_Statics::NewStructOps, TEXT("EdGraphSchemaAction_K2Struct"), &Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Struct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEdGraphSchemaAction_K2Struct), 3898597776U) },
		{ FBlueprintCallableFunctionRedirect::StaticStruct, Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics::NewStructOps, TEXT("BlueprintCallableFunctionRedirect"), &Z_Registration_Info_UScriptStruct_BlueprintCallableFunctionRedirect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintCallableFunctionRedirect), 3086775045U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphSchema_K2, UEdGraphSchema_K2::StaticClass, TEXT("UEdGraphSchema_K2"), &Z_Registration_Info_UClass_UEdGraphSchema_K2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphSchema_K2), 1279761694U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_1760647698(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
