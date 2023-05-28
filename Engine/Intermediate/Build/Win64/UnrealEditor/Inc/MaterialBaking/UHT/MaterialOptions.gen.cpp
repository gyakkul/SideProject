// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MaterialOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialOptions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialProperty();
	MATERIALBAKING_API UClass* Z_Construct_UClass_UAssetBakeOptions();
	MATERIALBAKING_API UClass* Z_Construct_UClass_UAssetBakeOptions_NoRegister();
	MATERIALBAKING_API UClass* Z_Construct_UClass_UMaterialMergeOptions();
	MATERIALBAKING_API UClass* Z_Construct_UClass_UMaterialMergeOptions_NoRegister();
	MATERIALBAKING_API UClass* Z_Construct_UClass_UMaterialOptions();
	MATERIALBAKING_API UClass* Z_Construct_UClass_UMaterialOptions_NoRegister();
	MATERIALBAKING_API UEnum* Z_Construct_UEnum_MaterialBaking_EMaterialBakeMethod();
	MATERIALBAKING_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyEntry();
	UPackage* Z_Construct_UPackage__Script_MaterialBaking();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialBakeMethod;
	static UEnum* EMaterialBakeMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMaterialBakeMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMaterialBakeMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MaterialBaking_EMaterialBakeMethod, (UObject*)Z_Construct_UPackage__Script_MaterialBaking(), TEXT("EMaterialBakeMethod"));
		}
		return Z_Registration_Info_UEnum_EMaterialBakeMethod.OuterSingleton;
	}
	template<> MATERIALBAKING_API UEnum* StaticEnum<EMaterialBakeMethod>()
	{
		return EMaterialBakeMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_MaterialBaking_EMaterialBakeMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MaterialBaking_EMaterialBakeMethod_Statics::Enumerators[] = {
		{ "EMaterialBakeMethod::IndividualMaterial", (int64)EMaterialBakeMethod::IndividualMaterial },
		{ "EMaterialBakeMethod::AtlasMaterial", (int64)EMaterialBakeMethod::AtlasMaterial },
		{ "EMaterialBakeMethod::BinnedMaterial", (int64)EMaterialBakeMethod::BinnedMaterial },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MaterialBaking_EMaterialBakeMethod_Statics::Enum_MetaDataParams[] = {
		{ "AtlasMaterial.DisplayName", "Combine Materials into Atlassed Material" },
		{ "AtlasMaterial.Name", "EMaterialBakeMethod::AtlasMaterial" },
		{ "BinnedMaterial.DisplayName", "Combine Materials into Binned Material" },
		{ "BinnedMaterial.Name", "EMaterialBakeMethod::BinnedMaterial" },
		{ "Comment", "/** Enum to define different types of baking materials */" },
		{ "IndividualMaterial.DisplayName", "Bake out Materials Individually" },
		{ "IndividualMaterial.Name", "EMaterialBakeMethod::IndividualMaterial" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "Enum to define different types of baking materials" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MaterialBaking_EMaterialBakeMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MaterialBaking,
		nullptr,
		"EMaterialBakeMethod",
		"EMaterialBakeMethod",
		Z_Construct_UEnum_MaterialBaking_EMaterialBakeMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MaterialBaking_EMaterialBakeMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MaterialBaking_EMaterialBakeMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MaterialBaking_EMaterialBakeMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MaterialBaking_EMaterialBakeMethod()
	{
		if (!Z_Registration_Info_UEnum_EMaterialBakeMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialBakeMethod.InnerSingleton, Z_Construct_UEnum_MaterialBaking_EMaterialBakeMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMaterialBakeMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyEntry;
class UScriptStruct* FPropertyEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyEntry, (UObject*)Z_Construct_UPackage__Script_MaterialBaking(), TEXT("PropertyEntry"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyEntry.OuterSingleton;
}
template<> MATERIALBAKING_API UScriptStruct* StaticStruct<FPropertyEntry>()
{
	return FPropertyEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPropertyEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Property;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomSize_MetaData[];
#endif
		static void NewProp_bUseCustomSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseConstantValue_MetaData[];
#endif
		static void NewProp_bUseConstantValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseConstantValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstantValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstantValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Structure to represent a single property the user wants to bake out for a given set of materials */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "Structure to represent a single property the user wants to bake out for a given set of materials" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_Property_MetaData[] = {
		{ "Category", "Property" },
		{ "Comment", "/** Property which should be baked out */" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "Property which should be baked out" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyEntry, Property), Z_Construct_UEnum_Engine_EMaterialProperty, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_Property_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_Property_MetaData)) }; // 3911056803
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_bUseCustomSize_MetaData[] = {
		{ "Category", "Property" },
		{ "Comment", "/** Whether or not to use the value of custom size for the output texture */" },
		{ "ExposeOnSpawn", "" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "Whether or not to use the value of custom size for the output texture" },
	};
#endif
	void Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_bUseCustomSize_SetBit(void* Obj)
	{
		((FPropertyEntry*)Obj)->bUseCustomSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_bUseCustomSize = { "bUseCustomSize", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPropertyEntry), &Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_bUseCustomSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_bUseCustomSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_bUseCustomSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_CustomSize_MetaData[] = {
		{ "Category", "Property" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Defines the size of the output textures for the baked out material properties */" },
		{ "EditCondition", "bUseCustomSize" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "Defines the size of the output textures for the baked out material properties" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_CustomSize = { "CustomSize", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyEntry, CustomSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_CustomSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_CustomSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_bUseConstantValue_MetaData[] = {
		{ "Category", "Property" },
		{ "Comment", "/** Wheter or not to use Constant Value as the final 'baked out' value for the this property */" },
		{ "ExposeOnSpawn", "" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "Wheter or not to use Constant Value as the final 'baked out' value for the this property" },
	};
#endif
	void Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_bUseConstantValue_SetBit(void* Obj)
	{
		((FPropertyEntry*)Obj)->bUseConstantValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_bUseConstantValue = { "bUseConstantValue", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPropertyEntry), &Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_bUseConstantValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_bUseConstantValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_bUseConstantValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_ConstantValue_MetaData[] = {
		{ "Category", "Property" },
		{ "Comment", "/** Defines the value representing this property in the final proxy material */" },
		{ "EditCondition", "bUseConstantValue" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "Defines the value representing this property in the final proxy material" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_ConstantValue = { "ConstantValue", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyEntry, ConstantValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_ConstantValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_ConstantValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_bUseCustomSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_CustomSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_bUseConstantValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewProp_ConstantValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MaterialBaking,
		nullptr,
		&NewStructOps,
		"PropertyEntry",
		sizeof(FPropertyEntry),
		alignof(FPropertyEntry),
		Z_Construct_UScriptStruct_FPropertyEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_PropertyEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyEntry.InnerSingleton, Z_Construct_UScriptStruct_FPropertyEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PropertyEntry.InnerSingleton;
	}
	void UMaterialOptions::StaticRegisterNativesUMaterialOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialOptions);
	UClass* Z_Construct_UClass_UMaterialOptions_NoRegister()
	{
		return UMaterialOptions::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Properties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Properties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureSize;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LODIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMeshData_MetaData[];
#endif
		static void NewProp_bUseMeshData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMeshData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSpecificUVIndex_MetaData[];
#endif
		static void NewProp_bUseSpecificUVIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSpecificUVIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureCoordinateIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TextureCoordinateIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MaterialBaking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialOptions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Options object to define what and how a material should be baked out */" },
		{ "IncludePath", "MaterialOptions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "Options object to define what and how a material should be baked out" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialOptions_Statics::NewProp_Properties_Inner = { "Properties", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPropertyEntry, METADATA_PARAMS(nullptr, 0) }; // 3594713815
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialOptions_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "MaterialBakeSettings" },
		{ "Comment", "/** Properties which are supposed to be baked out for the material(s) */" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "Properties which are supposed to be baked out for the material(s)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialOptions_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0011000000004005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialOptions, Properties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialOptions_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialOptions_Statics::NewProp_Properties_MetaData)) }; // 3594713815
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialOptions_Statics::NewProp_TextureSize_MetaData[] = {
		{ "Category", "MaterialBakeSettings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Size of the final texture(s) containing the baked out property data */" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "Size of the final texture(s) containing the baked out property data" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialOptions_Statics::NewProp_TextureSize = { "TextureSize", nullptr, (EPropertyFlags)0x0011000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialOptions, TextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UMaterialOptions_Statics::NewProp_TextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialOptions_Statics::NewProp_TextureSize_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialOptions_Statics::NewProp_LODIndices_Inner = { "LODIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialOptions_Statics::NewProp_LODIndices_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** LOD indices for which the materials should be baked out */" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "LOD indices for which the materials should be baked out" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialOptions_Statics::NewProp_LODIndices = { "LODIndices", nullptr, (EPropertyFlags)0x0011000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialOptions, LODIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialOptions_Statics::NewProp_LODIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialOptions_Statics::NewProp_LODIndices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialOptions_Statics::NewProp_bUseMeshData_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** Determines whether to not allow usage of the source mesh data while baking out material properties */" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "Determines whether to not allow usage of the source mesh data while baking out material properties" },
	};
#endif
	void Z_Construct_UClass_UMaterialOptions_Statics::NewProp_bUseMeshData_SetBit(void* Obj)
	{
		((UMaterialOptions*)Obj)->bUseMeshData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialOptions_Statics::NewProp_bUseMeshData = { "bUseMeshData", nullptr, (EPropertyFlags)0x0011000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMaterialOptions), &Z_Construct_UClass_UMaterialOptions_Statics::NewProp_bUseMeshData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialOptions_Statics::NewProp_bUseMeshData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialOptions_Statics::NewProp_bUseMeshData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialOptions_Statics::NewProp_bUseSpecificUVIndex_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** Flag whether or not the value of TextureCoordinateIndex should be used while baking out material properties */" },
		{ "EditCondition", "bUseMeshData" },
		{ "ExposeOnSpawn", "" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "Flag whether or not the value of TextureCoordinateIndex should be used while baking out material properties" },
	};
#endif
	void Z_Construct_UClass_UMaterialOptions_Statics::NewProp_bUseSpecificUVIndex_SetBit(void* Obj)
	{
		((UMaterialOptions*)Obj)->bUseSpecificUVIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialOptions_Statics::NewProp_bUseSpecificUVIndex = { "bUseSpecificUVIndex", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMaterialOptions), &Z_Construct_UClass_UMaterialOptions_Statics::NewProp_bUseSpecificUVIndex_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialOptions_Statics::NewProp_bUseSpecificUVIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialOptions_Statics::NewProp_bUseSpecificUVIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialOptions_Statics::NewProp_TextureCoordinateIndex_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** Specific texture coordinate which should be used to while baking out material properties as the positions stream */" },
		{ "EditCondition", "bUseSpecificUVIndex" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "Specific texture coordinate which should be used to while baking out material properties as the positions stream" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialOptions_Statics::NewProp_TextureCoordinateIndex = { "TextureCoordinateIndex", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialOptions, TextureCoordinateIndex), METADATA_PARAMS(Z_Construct_UClass_UMaterialOptions_Statics::NewProp_TextureCoordinateIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialOptions_Statics::NewProp_TextureCoordinateIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialOptions_Statics::NewProp_Properties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialOptions_Statics::NewProp_Properties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialOptions_Statics::NewProp_TextureSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialOptions_Statics::NewProp_LODIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialOptions_Statics::NewProp_LODIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialOptions_Statics::NewProp_bUseMeshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialOptions_Statics::NewProp_bUseSpecificUVIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialOptions_Statics::NewProp_TextureCoordinateIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialOptions_Statics::ClassParams = {
		&UMaterialOptions::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialOptions_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialOptions()
	{
		if (!Z_Registration_Info_UClass_UMaterialOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialOptions.OuterSingleton, Z_Construct_UClass_UMaterialOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialOptions.OuterSingleton;
	}
	template<> MATERIALBAKING_API UClass* StaticClass<UMaterialOptions>()
	{
		return UMaterialOptions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialOptions);
	UMaterialOptions::~UMaterialOptions() {}
	void UAssetBakeOptions::StaticRegisterNativesUAssetBakeOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetBakeOptions);
	UClass* Z_Construct_UClass_UAssetBakeOptions_NoRegister()
	{
		return UAssetBakeOptions::StaticClass();
	}
	struct Z_Construct_UClass_UAssetBakeOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetBakeOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MaterialBaking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetBakeOptions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Asset bake options object */" },
		{ "IncludePath", "MaterialOptions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "Asset bake options object" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetBakeOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetBakeOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetBakeOptions_Statics::ClassParams = {
		&UAssetBakeOptions::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetBakeOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetBakeOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetBakeOptions()
	{
		if (!Z_Registration_Info_UClass_UAssetBakeOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetBakeOptions.OuterSingleton, Z_Construct_UClass_UAssetBakeOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetBakeOptions.OuterSingleton;
	}
	template<> MATERIALBAKING_API UClass* StaticClass<UAssetBakeOptions>()
	{
		return UAssetBakeOptions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetBakeOptions);
	UAssetBakeOptions::~UAssetBakeOptions() {}
	void UMaterialMergeOptions::StaticRegisterNativesUMaterialMergeOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialMergeOptions);
	UClass* Z_Construct_UClass_UMaterialMergeOptions_NoRegister()
	{
		return UMaterialMergeOptions::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialMergeOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialMergeOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MaterialBaking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialMergeOptions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Material merge options object */" },
		{ "IncludePath", "MaterialOptions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "Material merge options object" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialMergeOptions_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialMergeOptions_Statics::NewProp_Method_MetaData[] = {
		{ "Comment", "/*EditAnywhere, BlueprintReadWrite, config, Category = MeshSettings, meta = (ExposeOnSpawn)*/" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "EditAnywhere, BlueprintReadWrite, config, Category = MeshSettings, meta = (ExposeOnSpawn)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialMergeOptions_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialMergeOptions, Method), Z_Construct_UEnum_MaterialBaking_EMaterialBakeMethod, METADATA_PARAMS(Z_Construct_UClass_UMaterialMergeOptions_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialMergeOptions_Statics::NewProp_Method_MetaData)) }; // 1997602722
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialMergeOptions_Statics::NewProp_BlendMode_MetaData[] = {
		{ "Category", "OutputMaterialSettings" },
		{ "Comment", "/** Blend mode for the final proxy material(s) */" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/MaterialOptions.h" },
		{ "ToolTip", "Blend mode for the final proxy material(s)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialMergeOptions_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0011000000004005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialMergeOptions, BlendMode), Z_Construct_UEnum_Engine_EBlendMode, METADATA_PARAMS(Z_Construct_UClass_UMaterialMergeOptions_Statics::NewProp_BlendMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialMergeOptions_Statics::NewProp_BlendMode_MetaData)) }; // 799871737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialMergeOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialMergeOptions_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialMergeOptions_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialMergeOptions_Statics::NewProp_BlendMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialMergeOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialMergeOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialMergeOptions_Statics::ClassParams = {
		&UMaterialMergeOptions::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialMergeOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialMergeOptions_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialMergeOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialMergeOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialMergeOptions()
	{
		if (!Z_Registration_Info_UClass_UMaterialMergeOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialMergeOptions.OuterSingleton, Z_Construct_UClass_UMaterialMergeOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialMergeOptions.OuterSingleton;
	}
	template<> MATERIALBAKING_API UClass* StaticClass<UMaterialMergeOptions>()
	{
		return UMaterialMergeOptions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialMergeOptions);
	UMaterialMergeOptions::~UMaterialMergeOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_MaterialBaking_Public_MaterialOptions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_MaterialBaking_Public_MaterialOptions_h_Statics::EnumInfo[] = {
		{ EMaterialBakeMethod_StaticEnum, TEXT("EMaterialBakeMethod"), &Z_Registration_Info_UEnum_EMaterialBakeMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1997602722U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_MaterialBaking_Public_MaterialOptions_h_Statics::ScriptStructInfo[] = {
		{ FPropertyEntry::StaticStruct, Z_Construct_UScriptStruct_FPropertyEntry_Statics::NewStructOps, TEXT("PropertyEntry"), &Z_Registration_Info_UScriptStruct_PropertyEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyEntry), 3594713815U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_MaterialBaking_Public_MaterialOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialOptions, UMaterialOptions::StaticClass, TEXT("UMaterialOptions"), &Z_Registration_Info_UClass_UMaterialOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialOptions), 2421568649U) },
		{ Z_Construct_UClass_UAssetBakeOptions, UAssetBakeOptions::StaticClass, TEXT("UAssetBakeOptions"), &Z_Registration_Info_UClass_UAssetBakeOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetBakeOptions), 542901178U) },
		{ Z_Construct_UClass_UMaterialMergeOptions, UMaterialMergeOptions::StaticClass, TEXT("UMaterialMergeOptions"), &Z_Registration_Info_UClass_UMaterialMergeOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialMergeOptions), 1243500128U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_MaterialBaking_Public_MaterialOptions_h_2690348915(TEXT("/Script/MaterialBaking"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_MaterialBaking_Public_MaterialOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_MaterialBaking_Public_MaterialOptions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_MaterialBaking_Public_MaterialOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_MaterialBaking_Public_MaterialOptions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_MaterialBaking_Public_MaterialOptions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_MaterialBaking_Public_MaterialOptions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
