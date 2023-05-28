// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeMaterialVariation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeMaterialVariation() {}
// Cross Module References
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterialBase();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UEnum* Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectNodeMaterialVariationType();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectMaterialVariation();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectMaterialVariation;
class UScriptStruct* FCustomizableObjectMaterialVariation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectMaterialVariation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectMaterialVariation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectMaterialVariation, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("CustomizableObjectMaterialVariation"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectMaterialVariation.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FCustomizableObjectMaterialVariation>()
{
	return FCustomizableObjectMaterialVariation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectMaterialVariation_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectMaterialVariation_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMaterialVariation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectMaterialVariation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectMaterialVariation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectMaterialVariation_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMaterialVariation.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectMaterialVariation_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectMaterialVariation, Tag), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectMaterialVariation_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectMaterialVariation_Statics::NewProp_Tag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectMaterialVariation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectMaterialVariation_Statics::NewProp_Tag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectMaterialVariation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"CustomizableObjectMaterialVariation",
		sizeof(FCustomizableObjectMaterialVariation),
		alignof(FCustomizableObjectMaterialVariation),
		Z_Construct_UScriptStruct_FCustomizableObjectMaterialVariation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectMaterialVariation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectMaterialVariation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectMaterialVariation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectMaterialVariation()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectMaterialVariation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectMaterialVariation.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectMaterialVariation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectMaterialVariation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomizableObjectNodeMaterialVariationType;
	static UEnum* ECustomizableObjectNodeMaterialVariationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECustomizableObjectNodeMaterialVariationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECustomizableObjectNodeMaterialVariationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectNodeMaterialVariationType, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("ECustomizableObjectNodeMaterialVariationType"));
		}
		return Z_Registration_Info_UEnum_ECustomizableObjectNodeMaterialVariationType.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UEnum* StaticEnum<ECustomizableObjectNodeMaterialVariationType>()
	{
		return ECustomizableObjectNodeMaterialVariationType_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectNodeMaterialVariationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectNodeMaterialVariationType_Statics::Enumerators[] = {
		{ "ECustomizableObjectNodeMaterialVariationType::Tag", (int64)ECustomizableObjectNodeMaterialVariationType::Tag },
		{ "ECustomizableObjectNodeMaterialVariationType::State", (int64)ECustomizableObjectNodeMaterialVariationType::State },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectNodeMaterialVariationType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMaterialVariation.h" },
		{ "State.DisplayName", "State" },
		{ "State.Name", "ECustomizableObjectNodeMaterialVariationType::State" },
		{ "Tag.DisplayName", "Tag" },
		{ "Tag.Name", "ECustomizableObjectNodeMaterialVariationType::Tag" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectNodeMaterialVariationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		"ECustomizableObjectNodeMaterialVariationType",
		"ECustomizableObjectNodeMaterialVariationType",
		Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectNodeMaterialVariationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectNodeMaterialVariationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectNodeMaterialVariationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectNodeMaterialVariationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectNodeMaterialVariationType()
	{
		if (!Z_Registration_Info_UEnum_ECustomizableObjectNodeMaterialVariationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomizableObjectNodeMaterialVariationType.InnerSingleton, Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectNodeMaterialVariationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECustomizableObjectNodeMaterialVariationType.InnerSingleton;
	}
	void UCustomizableObjectNodeMaterialVariation::StaticRegisterNativesUCustomizableObjectNodeMaterialVariation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeMaterialVariation);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation_NoRegister()
	{
		return UCustomizableObjectNodeMaterialVariation::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Variations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Variations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodeMaterialBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeMaterialVariation.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMaterialVariation.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMaterialVariation.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMaterialVariation, Type), Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectNodeMaterialVariationType, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation_Statics::NewProp_Type_MetaData)) }; // 167842247
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation_Statics::NewProp_Variations_Inner = { "Variations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectMaterialVariation, METADATA_PARAMS(nullptr, 0) }; // 1361389375
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation_Statics::NewProp_Variations_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMaterialVariation.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation_Statics::NewProp_Variations = { "Variations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMaterialVariation, Variations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation_Statics::NewProp_Variations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation_Statics::NewProp_Variations_MetaData)) }; // 1361389375
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation_Statics::NewProp_Variations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation_Statics::NewProp_Variations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeMaterialVariation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation_Statics::ClassParams = {
		&UCustomizableObjectNodeMaterialVariation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeMaterialVariation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeMaterialVariation.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeMaterialVariation.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeMaterialVariation>()
	{
		return UCustomizableObjectNodeMaterialVariation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeMaterialVariation);
	UCustomizableObjectNodeMaterialVariation::~UCustomizableObjectNodeMaterialVariation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMaterialVariation_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMaterialVariation_h_Statics::EnumInfo[] = {
		{ ECustomizableObjectNodeMaterialVariationType_StaticEnum, TEXT("ECustomizableObjectNodeMaterialVariationType"), &Z_Registration_Info_UEnum_ECustomizableObjectNodeMaterialVariationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 167842247U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMaterialVariation_h_Statics::ScriptStructInfo[] = {
		{ FCustomizableObjectMaterialVariation::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectMaterialVariation_Statics::NewStructOps, TEXT("CustomizableObjectMaterialVariation"), &Z_Registration_Info_UScriptStruct_CustomizableObjectMaterialVariation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectMaterialVariation), 1361389375U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMaterialVariation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeMaterialVariation, UCustomizableObjectNodeMaterialVariation::StaticClass, TEXT("UCustomizableObjectNodeMaterialVariation"), &Z_Registration_Info_UClass_UCustomizableObjectNodeMaterialVariation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeMaterialVariation), 1898423857U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMaterialVariation_h_2656765715(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMaterialVariation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMaterialVariation_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMaterialVariation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMaterialVariation_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMaterialVariation_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMaterialVariation_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
