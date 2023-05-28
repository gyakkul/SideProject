// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/EdGraph/EdGraphNode_Documentation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphNode_Documentation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_Documentation();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_Documentation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UEdGraphNode_Documentation::StaticRegisterNativesUEdGraphNode_Documentation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphNode_Documentation);
	UClass* Z_Construct_UClass_UEdGraphNode_Documentation_NoRegister()
	{
		return UEdGraphNode_Documentation::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraphNode_Documentation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Link_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Link;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Excerpt_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Excerpt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraphNode_Documentation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Documentation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraph/EdGraphNode_Documentation.h" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode_Documentation.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Documentation_Statics::NewProp_Link_MetaData[] = {
		{ "Comment", "/** Documentation Link */" },
		{ "DisplayName", "Documentation Link" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode_Documentation.h" },
		{ "ToolTip", "Documentation Link" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdGraphNode_Documentation_Statics::NewProp_Link = { "Link", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdGraphNode_Documentation, Link), METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Documentation_Statics::NewProp_Link_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Documentation_Statics::NewProp_Link_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Documentation_Statics::NewProp_Excerpt_MetaData[] = {
		{ "Comment", "/** Documentation Excerpt */" },
		{ "DisplayName", "Documentation Excerpt" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode_Documentation.h" },
		{ "ToolTip", "Documentation Excerpt" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdGraphNode_Documentation_Statics::NewProp_Excerpt = { "Excerpt", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdGraphNode_Documentation, Excerpt), METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Documentation_Statics::NewProp_Excerpt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Documentation_Statics::NewProp_Excerpt_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdGraphNode_Documentation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Documentation_Statics::NewProp_Link,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Documentation_Statics::NewProp_Excerpt,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraphNode_Documentation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphNode_Documentation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphNode_Documentation_Statics::ClassParams = {
		&UEdGraphNode_Documentation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEdGraphNode_Documentation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Documentation_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Documentation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Documentation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraphNode_Documentation()
	{
		if (!Z_Registration_Info_UClass_UEdGraphNode_Documentation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphNode_Documentation.OuterSingleton, Z_Construct_UClass_UEdGraphNode_Documentation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdGraphNode_Documentation.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UEdGraphNode_Documentation>()
	{
		return UEdGraphNode_Documentation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphNode_Documentation);
	UEdGraphNode_Documentation::~UEdGraphNode_Documentation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_Documentation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_Documentation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphNode_Documentation, UEdGraphNode_Documentation::StaticClass, TEXT("UEdGraphNode_Documentation"), &Z_Registration_Info_UClass_UEdGraphNode_Documentation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphNode_Documentation), 2463009236U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_Documentation_h_410157127(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_Documentation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_Documentation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
