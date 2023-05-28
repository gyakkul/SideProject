// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeTextureVariation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeTextureVariation() {}
// Cross Module References
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNode();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeTextureVariation();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeTextureVariation_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectTextureVariation();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectTextureVariation;
class UScriptStruct* FCustomizableObjectTextureVariation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectTextureVariation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectTextureVariation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectTextureVariation, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("CustomizableObjectTextureVariation"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectTextureVariation.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FCustomizableObjectTextureVariation>()
{
	return FCustomizableObjectTextureVariation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectTextureVariation_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectTextureVariation_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureVariation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectTextureVariation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectTextureVariation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectTextureVariation_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureVariation.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectTextureVariation_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectTextureVariation, Tag), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectTextureVariation_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectTextureVariation_Statics::NewProp_Tag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectTextureVariation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectTextureVariation_Statics::NewProp_Tag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectTextureVariation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"CustomizableObjectTextureVariation",
		sizeof(FCustomizableObjectTextureVariation),
		alignof(FCustomizableObjectTextureVariation),
		Z_Construct_UScriptStruct_FCustomizableObjectTextureVariation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectTextureVariation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectTextureVariation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectTextureVariation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectTextureVariation()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectTextureVariation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectTextureVariation.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectTextureVariation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectTextureVariation.InnerSingleton;
	}
	void UCustomizableObjectNodeTextureVariation::StaticRegisterNativesUCustomizableObjectNodeTextureVariation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeTextureVariation);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeTextureVariation_NoRegister()
	{
		return UCustomizableObjectNodeTextureVariation::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeTextureVariation_Statics
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
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeTextureVariation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTextureVariation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeTextureVariation.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureVariation.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureVariation_Statics::NewProp_Variations_Inner = { "Variations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectTextureVariation, METADATA_PARAMS(nullptr, 0) }; // 2512517516
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTextureVariation_Statics::NewProp_Variations_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureVariation.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureVariation_Statics::NewProp_Variations = { "Variations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeTextureVariation, Variations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeTextureVariation_Statics::NewProp_Variations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureVariation_Statics::NewProp_Variations_MetaData)) }; // 2512517516
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeTextureVariation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureVariation_Statics::NewProp_Variations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureVariation_Statics::NewProp_Variations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeTextureVariation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeTextureVariation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeTextureVariation_Statics::ClassParams = {
		&UCustomizableObjectNodeTextureVariation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeTextureVariation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureVariation_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeTextureVariation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureVariation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeTextureVariation()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeTextureVariation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeTextureVariation.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeTextureVariation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeTextureVariation.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeTextureVariation>()
	{
		return UCustomizableObjectNodeTextureVariation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeTextureVariation);
	UCustomizableObjectNodeTextureVariation::~UCustomizableObjectNodeTextureVariation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureVariation_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureVariation_h_Statics::ScriptStructInfo[] = {
		{ FCustomizableObjectTextureVariation::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectTextureVariation_Statics::NewStructOps, TEXT("CustomizableObjectTextureVariation"), &Z_Registration_Info_UScriptStruct_CustomizableObjectTextureVariation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectTextureVariation), 2512517516U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureVariation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeTextureVariation, UCustomizableObjectNodeTextureVariation::StaticClass, TEXT("UCustomizableObjectNodeTextureVariation"), &Z_Registration_Info_UClass_UCustomizableObjectNodeTextureVariation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeTextureVariation), 3107891092U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureVariation_h_3846285284(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureVariation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureVariation_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureVariation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureVariation_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
