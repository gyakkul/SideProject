// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeMeshVariation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeMeshVariation() {}
// Cross Module References
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNode();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMeshVariation();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMeshVariation_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectMeshVariation();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectMeshVariation;
class UScriptStruct* FCustomizableObjectMeshVariation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectMeshVariation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectMeshVariation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectMeshVariation, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("CustomizableObjectMeshVariation"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectMeshVariation.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FCustomizableObjectMeshVariation>()
{
	return FCustomizableObjectMeshVariation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectMeshVariation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectMeshVariation_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshVariation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectMeshVariation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectMeshVariation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectMeshVariation_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshVariation.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectMeshVariation_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectMeshVariation, Tag), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectMeshVariation_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectMeshVariation_Statics::NewProp_Tag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectMeshVariation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectMeshVariation_Statics::NewProp_Tag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectMeshVariation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"CustomizableObjectMeshVariation",
		sizeof(FCustomizableObjectMeshVariation),
		alignof(FCustomizableObjectMeshVariation),
		Z_Construct_UScriptStruct_FCustomizableObjectMeshVariation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectMeshVariation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectMeshVariation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectMeshVariation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectMeshVariation()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectMeshVariation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectMeshVariation.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectMeshVariation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectMeshVariation.InnerSingleton;
	}
	void UCustomizableObjectNodeMeshVariation::StaticRegisterNativesUCustomizableObjectNodeMeshVariation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeMeshVariation);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeMeshVariation_NoRegister()
	{
		return UCustomizableObjectNodeMeshVariation::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeMeshVariation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Variations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Variations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeMeshVariation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshVariation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeMeshVariation.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshVariation.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshVariation_Statics::NewProp_Variations_Inner = { "Variations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectMeshVariation, METADATA_PARAMS(nullptr, 0) }; // 2645387503
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshVariation_Statics::NewProp_Variations_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshVariation.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshVariation_Statics::NewProp_Variations = { "Variations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMeshVariation, Variations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMeshVariation_Statics::NewProp_Variations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshVariation_Statics::NewProp_Variations_MetaData)) }; // 2645387503
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeMeshVariation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshVariation_Statics::NewProp_Variations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshVariation_Statics::NewProp_Variations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeMeshVariation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeMeshVariation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeMeshVariation_Statics::ClassParams = {
		&UCustomizableObjectNodeMeshVariation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeMeshVariation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshVariation_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMeshVariation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshVariation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeMeshVariation()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeMeshVariation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeMeshVariation.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeMeshVariation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeMeshVariation.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeMeshVariation>()
	{
		return UCustomizableObjectNodeMeshVariation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeMeshVariation);
	UCustomizableObjectNodeMeshVariation::~UCustomizableObjectNodeMeshVariation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshVariation_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshVariation_h_Statics::ScriptStructInfo[] = {
		{ FCustomizableObjectMeshVariation::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectMeshVariation_Statics::NewStructOps, TEXT("CustomizableObjectMeshVariation"), &Z_Registration_Info_UScriptStruct_CustomizableObjectMeshVariation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectMeshVariation), 2645387503U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshVariation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeMeshVariation, UCustomizableObjectNodeMeshVariation::StaticClass, TEXT("UCustomizableObjectNodeMeshVariation"), &Z_Registration_Info_UClass_UCustomizableObjectNodeMeshVariation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeMeshVariation), 4163385842U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshVariation_h_3670847757(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshVariation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshVariation_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshVariation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshVariation_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
