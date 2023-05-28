// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/MaterialEditor/MaterialEditorInstanceConstant.h"
#include "../../../Editor/UnrealEd/Classes/Editor/UnrealEdTypes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "../../Source/Runtime/Engine/Public/MaterialTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialEditorInstanceConstant() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USubsurfaceProfile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialParameterAssociation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterInfo();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorParameterValue_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialEditorInstanceConstant();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialEditorInstanceConstant_NoRegister();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FComponentMaskParameter();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FEditorFontParameterValue();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FEditorParameterGroup();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FEditorParameterValue();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FEditorScalarParameterValue();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FEditorTextureParameterValue();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FEditorVectorParameterValue();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorParameterGroup;
class UScriptStruct* FEditorParameterGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorParameterGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorParameterGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorParameterGroup, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EditorParameterGroup"));
	}
	return Z_Registration_Info_UScriptStruct_EditorParameterGroup.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FEditorParameterGroup>()
{
	return FEditorParameterGroup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorParameterGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupAssociation_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroupAssociation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Parameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Parameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupSortPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GroupSortPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorParameterGroup>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_GroupName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorParameterGroup, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_GroupAssociation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_GroupAssociation = { "GroupAssociation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorParameterGroup, GroupAssociation), Z_Construct_UEnum_Engine_EMaterialParameterAssociation, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_GroupAssociation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_GroupAssociation_MetaData)) }; // 534775543
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_Parameters_Inner_MetaData[] = {
		{ "Category", "EditorParameterGroup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDEditorParameterValue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_Parameters_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_Parameters_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_Parameters_MetaData[] = {
		{ "Category", "EditorParameterGroup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0014008000000049, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorParameterGroup, Parameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_Parameters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_GroupSortPriority_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_GroupSortPriority = { "GroupSortPriority", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorParameterGroup, GroupSortPriority), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_GroupSortPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_GroupSortPriority_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_GroupAssociation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_Parameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_Parameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_GroupSortPriority,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"EditorParameterGroup",
		sizeof(FEditorParameterGroup),
		alignof(FEditorParameterGroup),
		Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorParameterGroup()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorParameterGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorParameterGroup.InnerSingleton, Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorParameterGroup.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorParameterValue;
class UScriptStruct* FEditorParameterValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorParameterValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorParameterValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorParameterValue, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EditorParameterValue"));
	}
	return Z_Registration_Info_UScriptStruct_EditorParameterValue.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FEditorParameterValue>()
{
	return FEditorParameterValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorParameterValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_MetaData[];
#endif
		static void NewProp_bOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpressionId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorParameterValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_bOverride_MetaData[] = {
		{ "Category", "EditorParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_bOverride_SetBit(void* Obj)
	{
		((FEditorParameterValue*)Obj)->bOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_bOverride = { "bOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FEditorParameterValue), &Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_bOverride_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_bOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_bOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "Category", "EditorParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorParameterValue, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_ParameterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_ParameterInfo_MetaData)) }; // 1695244105
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_ExpressionId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_ExpressionId = { "ExpressionId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorParameterValue, ExpressionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_ExpressionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_ExpressionId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_bOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_ParameterInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_ExpressionId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"EditorParameterValue",
		sizeof(FEditorParameterValue),
		alignof(FEditorParameterValue),
		Z_Construct_UScriptStruct_FEditorParameterValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorParameterValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorParameterValue()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorParameterValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorParameterValue.InnerSingleton, Z_Construct_UScriptStruct_FEditorParameterValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorParameterValue.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEditorVectorParameterValue>() == std::is_polymorphic<FEditorParameterValue>(), "USTRUCT FEditorVectorParameterValue cannot be polymorphic unless super FEditorParameterValue is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorVectorParameterValue;
class UScriptStruct* FEditorVectorParameterValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorVectorParameterValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorVectorParameterValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorVectorParameterValue, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EditorVectorParameterValue"));
	}
	return Z_Registration_Info_UScriptStruct_EditorVectorParameterValue.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FEditorVectorParameterValue>()
{
	return FEditorVectorParameterValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorVectorParameterValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorVectorParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorVectorParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorVectorParameterValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorVectorParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "EditorVectorParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorVectorParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorVectorParameterValue, ParameterValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorVectorParameterValue_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorVectorParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorVectorParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorVectorParameterValue_Statics::NewProp_ParameterValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorVectorParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		Z_Construct_UScriptStruct_FEditorParameterValue,
		&NewStructOps,
		"EditorVectorParameterValue",
		sizeof(FEditorVectorParameterValue),
		alignof(FEditorVectorParameterValue),
		Z_Construct_UScriptStruct_FEditorVectorParameterValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorVectorParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorVectorParameterValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorVectorParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorVectorParameterValue()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorVectorParameterValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorVectorParameterValue.InnerSingleton, Z_Construct_UScriptStruct_FEditorVectorParameterValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorVectorParameterValue.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEditorScalarParameterValue>() == std::is_polymorphic<FEditorParameterValue>(), "USTRUCT FEditorScalarParameterValue cannot be polymorphic unless super FEditorParameterValue is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorScalarParameterValue;
class UScriptStruct* FEditorScalarParameterValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorScalarParameterValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorScalarParameterValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorScalarParameterValue, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EditorScalarParameterValue"));
	}
	return Z_Registration_Info_UScriptStruct_EditorScalarParameterValue.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FEditorScalarParameterValue>()
{
	return FEditorScalarParameterValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorScalarParameterValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ParameterValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScalarParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorScalarParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorScalarParameterValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScalarParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "EditorScalarParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEditorScalarParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorScalarParameterValue, ParameterValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScalarParameterValue_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScalarParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorScalarParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorScalarParameterValue_Statics::NewProp_ParameterValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorScalarParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		Z_Construct_UScriptStruct_FEditorParameterValue,
		&NewStructOps,
		"EditorScalarParameterValue",
		sizeof(FEditorScalarParameterValue),
		alignof(FEditorScalarParameterValue),
		Z_Construct_UScriptStruct_FEditorScalarParameterValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScalarParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScalarParameterValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScalarParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorScalarParameterValue()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorScalarParameterValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorScalarParameterValue.InnerSingleton, Z_Construct_UScriptStruct_FEditorScalarParameterValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorScalarParameterValue.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEditorTextureParameterValue>() == std::is_polymorphic<FEditorParameterValue>(), "USTRUCT FEditorTextureParameterValue cannot be polymorphic unless super FEditorParameterValue is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorTextureParameterValue;
class UScriptStruct* FEditorTextureParameterValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorTextureParameterValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorTextureParameterValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorTextureParameterValue, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EditorTextureParameterValue"));
	}
	return Z_Registration_Info_UScriptStruct_EditorTextureParameterValue.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FEditorTextureParameterValue>()
{
	return FEditorTextureParameterValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorTextureParameterValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParameterValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorTextureParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorTextureParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorTextureParameterValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorTextureParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "EditorTextureParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FEditorTextureParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorTextureParameterValue, ParameterValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorTextureParameterValue_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorTextureParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorTextureParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorTextureParameterValue_Statics::NewProp_ParameterValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorTextureParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		Z_Construct_UScriptStruct_FEditorParameterValue,
		&NewStructOps,
		"EditorTextureParameterValue",
		sizeof(FEditorTextureParameterValue),
		alignof(FEditorTextureParameterValue),
		Z_Construct_UScriptStruct_FEditorTextureParameterValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorTextureParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorTextureParameterValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorTextureParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorTextureParameterValue()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorTextureParameterValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorTextureParameterValue.InnerSingleton, Z_Construct_UScriptStruct_FEditorTextureParameterValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorTextureParameterValue.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEditorFontParameterValue>() == std::is_polymorphic<FEditorParameterValue>(), "USTRUCT FEditorFontParameterValue cannot be polymorphic unless super FEditorParameterValue is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorFontParameterValue;
class UScriptStruct* FEditorFontParameterValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorFontParameterValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorFontParameterValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorFontParameterValue, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EditorFontParameterValue"));
	}
	return Z_Registration_Info_UScriptStruct_EditorFontParameterValue.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FEditorFontParameterValue>()
{
	return FEditorFontParameterValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FontValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontPage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FontPage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorFontParameterValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::NewProp_FontValue_MetaData[] = {
		{ "Category", "EditorFontParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::NewProp_FontValue = { "FontValue", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorFontParameterValue, FontValue), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::NewProp_FontValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::NewProp_FontValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::NewProp_FontPage_MetaData[] = {
		{ "Category", "EditorFontParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::NewProp_FontPage = { "FontPage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorFontParameterValue, FontPage), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::NewProp_FontPage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::NewProp_FontPage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::NewProp_FontValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::NewProp_FontPage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		Z_Construct_UScriptStruct_FEditorParameterValue,
		&NewStructOps,
		"EditorFontParameterValue",
		sizeof(FEditorFontParameterValue),
		alignof(FEditorFontParameterValue),
		Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorFontParameterValue()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorFontParameterValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorFontParameterValue.InnerSingleton, Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorFontParameterValue.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEditorMaterialLayersParameterValue>() == std::is_polymorphic<FEditorParameterValue>(), "USTRUCT FEditorMaterialLayersParameterValue cannot be polymorphic unless super FEditorParameterValue is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorMaterialLayersParameterValue;
class UScriptStruct* FEditorMaterialLayersParameterValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorMaterialLayersParameterValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorMaterialLayersParameterValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EditorMaterialLayersParameterValue"));
	}
	return Z_Registration_Info_UScriptStruct_EditorMaterialLayersParameterValue.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FEditorMaterialLayersParameterValue>()
{
	return FEditorMaterialLayersParameterValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FunctionValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorMaterialLayersParameterValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Statics::NewProp_FunctionValue_MetaData[] = {
		{ "Category", "EditorLayersParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Statics::NewProp_FunctionValue = { "FunctionValue", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorMaterialLayersParameterValue, FunctionValue), Z_Construct_UClass_UMaterialFunctionInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Statics::NewProp_FunctionValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Statics::NewProp_FunctionValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Statics::NewProp_FunctionValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		Z_Construct_UScriptStruct_FEditorParameterValue,
		&NewStructOps,
		"EditorMaterialLayersParameterValue",
		sizeof(FEditorMaterialLayersParameterValue),
		alignof(FEditorMaterialLayersParameterValue),
		Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorMaterialLayersParameterValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorMaterialLayersParameterValue.InnerSingleton, Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorMaterialLayersParameterValue.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEditorStaticSwitchParameterValue>() == std::is_polymorphic<FEditorParameterValue>(), "USTRUCT FEditorStaticSwitchParameterValue cannot be polymorphic unless super FEditorParameterValue is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorStaticSwitchParameterValue;
class UScriptStruct* FEditorStaticSwitchParameterValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorStaticSwitchParameterValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorStaticSwitchParameterValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EditorStaticSwitchParameterValue"));
	}
	return Z_Registration_Info_UScriptStruct_EditorStaticSwitchParameterValue.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FEditorStaticSwitchParameterValue>()
{
	return FEditorStaticSwitchParameterValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static void NewProp_ParameterValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ParameterValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorStaticSwitchParameterValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "EditorStaticSwitchParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics::NewProp_ParameterValue_SetBit(void* Obj)
	{
		((FEditorStaticSwitchParameterValue*)Obj)->ParameterValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FEditorStaticSwitchParameterValue), &Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics::NewProp_ParameterValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics::NewProp_ParameterValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		Z_Construct_UScriptStruct_FEditorParameterValue,
		&NewStructOps,
		"EditorStaticSwitchParameterValue",
		sizeof(FEditorStaticSwitchParameterValue),
		alignof(FEditorStaticSwitchParameterValue),
		Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorStaticSwitchParameterValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorStaticSwitchParameterValue.InnerSingleton, Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorStaticSwitchParameterValue.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComponentMaskParameter;
class UScriptStruct* FComponentMaskParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComponentMaskParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComponentMaskParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentMaskParameter, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("ComponentMaskParameter"));
	}
	return Z_Registration_Info_UScriptStruct_ComponentMaskParameter.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FComponentMaskParameter>()
{
	return FComponentMaskParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComponentMaskParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[];
#endif
		static void NewProp_R_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_R;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_G_MetaData[];
#endif
		static void NewProp_G_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_G;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static void NewProp_B_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static void NewProp_A_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_A;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentMaskParameter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_R_MetaData[] = {
		{ "Category", "ComponentMaskParameter" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_R_SetBit(void* Obj)
	{
		((FComponentMaskParameter*)Obj)->R = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FComponentMaskParameter), &Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_R_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_R_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_R_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_G_MetaData[] = {
		{ "Category", "ComponentMaskParameter" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_G_SetBit(void* Obj)
	{
		((FComponentMaskParameter*)Obj)->G = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_G = { "G", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FComponentMaskParameter), &Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_G_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_G_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_G_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_B_MetaData[] = {
		{ "Category", "ComponentMaskParameter" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_B_SetBit(void* Obj)
	{
		((FComponentMaskParameter*)Obj)->B = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FComponentMaskParameter), &Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_B_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_A_MetaData[] = {
		{ "Category", "ComponentMaskParameter" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_A_SetBit(void* Obj)
	{
		((FComponentMaskParameter*)Obj)->A = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FComponentMaskParameter), &Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_A_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_A_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_R,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_G,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_A,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"ComponentMaskParameter",
		sizeof(FComponentMaskParameter),
		alignof(FComponentMaskParameter),
		Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComponentMaskParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_ComponentMaskParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComponentMaskParameter.InnerSingleton, Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComponentMaskParameter.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEditorStaticComponentMaskParameterValue>() == std::is_polymorphic<FEditorParameterValue>(), "USTRUCT FEditorStaticComponentMaskParameterValue cannot be polymorphic unless super FEditorParameterValue is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorStaticComponentMaskParameterValue;
class UScriptStruct* FEditorStaticComponentMaskParameterValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorStaticComponentMaskParameterValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorStaticComponentMaskParameterValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EditorStaticComponentMaskParameterValue"));
	}
	return Z_Registration_Info_UScriptStruct_EditorStaticComponentMaskParameterValue.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FEditorStaticComponentMaskParameterValue>()
{
	return FEditorStaticComponentMaskParameterValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorStaticComponentMaskParameterValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "EditorStaticComponentMaskParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorStaticComponentMaskParameterValue, ParameterValue), Z_Construct_UScriptStruct_FComponentMaskParameter, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Statics::NewProp_ParameterValue_MetaData)) }; // 2311491675
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Statics::NewProp_ParameterValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		Z_Construct_UScriptStruct_FEditorParameterValue,
		&NewStructOps,
		"EditorStaticComponentMaskParameterValue",
		sizeof(FEditorStaticComponentMaskParameterValue),
		alignof(FEditorStaticComponentMaskParameterValue),
		Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorStaticComponentMaskParameterValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorStaticComponentMaskParameterValue.InnerSingleton, Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorStaticComponentMaskParameterValue.InnerSingleton;
	}
	void UMaterialEditorInstanceConstant::StaticRegisterNativesUMaterialEditorInstanceConstant()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialEditorInstanceConstant);
	UClass* Z_Construct_UClass_UMaterialEditorInstanceConstant_NoRegister()
	{
		return UMaterialEditorInstanceConstant::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PhysMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Parent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterGroups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterGroups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterGroups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RefractionDepthBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RefractionDepthBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubsurfaceProfile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubsurfaceProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSubsurfaceProfile_MetaData[];
#endif
		static void NewProp_bOverrideSubsurfaceProfile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSubsurfaceProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideBaseProperties_MetaData[];
#endif
		static void NewProp_bOverrideBaseProperties_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideBaseProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFunctionPreviewMaterial_MetaData[];
#endif
		static void NewProp_bIsFunctionPreviewMaterial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFunctionPreviewMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFunctionInstanceDirty_MetaData[];
#endif
		static void NewProp_bIsFunctionInstanceDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFunctionInstanceDirty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePropertyOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BasePropertyOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceFunction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceFunction;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VisibleExpressions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisibleExpressions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VisibleExpressions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightmassSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightmassSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseOldStyleMICEditorGroups_MetaData[];
#endif
		static void NewProp_bUseOldStyleMICEditorGroups_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOldStyleMICEditorGroups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNaniteOverride_MetaData[];
#endif
		static void NewProp_bNaniteOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNaniteOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NaniteOverrideMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_NaniteOverrideMaterial;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StoredLayerPreviews_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoredLayerPreviews_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StoredLayerPreviews;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StoredBlendPreviews_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoredBlendPreviews_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StoredBlendPreviews;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "MaterialEditor/MaterialEditorInstanceConstant.h" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_PhysMaterial_MetaData[] = {
		{ "Category", "MaterialEditorInstanceConstant" },
		{ "Comment", "/** Physical material to use for this graphics material. Used for sounds, effects etc.*/" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
		{ "ToolTip", "Physical material to use for this graphics material. Used for sounds, effects etc." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_PhysMaterial = { "PhysMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialEditorInstanceConstant, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_PhysMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_PhysMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "MaterialEditorInstanceConstant" },
		{ "Comment", "// since the Parent may point across levels and the property editor needs to import this text, it must be marked lazy so it doesn't set itself to NULL in FindImportedObject\n" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
		{ "ToolTip", "since the Parent may point across levels and the property editor needs to import this text, it must be marked lazy so it doesn't set itself to NULL in FindImportedObject" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialEditorInstanceConstant, Parent), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_Parent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_ParameterGroups_Inner = { "ParameterGroups", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEditorParameterGroup, METADATA_PARAMS(nullptr, 0) }; // 3714873727
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_ParameterGroups_MetaData[] = {
		{ "Category", "MaterialEditorInstanceConstant" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_ParameterGroups = { "ParameterGroups", nullptr, (EPropertyFlags)0x0010008000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialEditorInstanceConstant, ParameterGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_ParameterGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_ParameterGroups_MetaData)) }; // 3714873727
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_RefractionDepthBias_MetaData[] = {
		{ "Category", "MaterialEditorInstanceConstant" },
		{ "Comment", "/** This is the refraction depth bias, larger values offset distortion to prevent closer objects from rendering into the distorted surface at acute viewing angles but increases the disconnect between surface and where the refraction starts. */" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
		{ "ToolTip", "This is the refraction depth bias, larger values offset distortion to prevent closer objects from rendering into the distorted surface at acute viewing angles but increases the disconnect between surface and where the refraction starts." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_RefractionDepthBias = { "RefractionDepthBias", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialEditorInstanceConstant, RefractionDepthBias), METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_RefractionDepthBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_RefractionDepthBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_SubsurfaceProfile_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** SubsurfaceProfile, for Screen Space Subsurface Scattering */" },
		{ "DisplayName", "Subsurface Profile" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
		{ "ToolTip", "SubsurfaceProfile, for Screen Space Subsurface Scattering" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_SubsurfaceProfile = { "SubsurfaceProfile", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialEditorInstanceConstant, SubsurfaceProfile), Z_Construct_UClass_USubsurfaceProfile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_SubsurfaceProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_SubsurfaceProfile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bOverrideSubsurfaceProfile_MetaData[] = {
		{ "Category", "MaterialEditorInstanceConstant" },
		{ "Comment", "/** Defines if SubsurfaceProfile from tis instance is used or it uses the parent one. */" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
		{ "ToolTip", "Defines if SubsurfaceProfile from tis instance is used or it uses the parent one." },
	};
#endif
	void Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bOverrideSubsurfaceProfile_SetBit(void* Obj)
	{
		((UMaterialEditorInstanceConstant*)Obj)->bOverrideSubsurfaceProfile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bOverrideSubsurfaceProfile = { "bOverrideSubsurfaceProfile", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialEditorInstanceConstant), &Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bOverrideSubsurfaceProfile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bOverrideSubsurfaceProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bOverrideSubsurfaceProfile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bOverrideBaseProperties_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bOverrideBaseProperties_SetBit(void* Obj)
	{
		((UMaterialEditorInstanceConstant*)Obj)->bOverrideBaseProperties_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bOverrideBaseProperties = { "bOverrideBaseProperties", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialEditorInstanceConstant), &Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bOverrideBaseProperties_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bOverrideBaseProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bOverrideBaseProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bIsFunctionPreviewMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bIsFunctionPreviewMaterial_SetBit(void* Obj)
	{
		((UMaterialEditorInstanceConstant*)Obj)->bIsFunctionPreviewMaterial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bIsFunctionPreviewMaterial = { "bIsFunctionPreviewMaterial", nullptr, (EPropertyFlags)0x0010000000202000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialEditorInstanceConstant), &Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bIsFunctionPreviewMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bIsFunctionPreviewMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bIsFunctionPreviewMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bIsFunctionInstanceDirty_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bIsFunctionInstanceDirty_SetBit(void* Obj)
	{
		((UMaterialEditorInstanceConstant*)Obj)->bIsFunctionInstanceDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bIsFunctionInstanceDirty = { "bIsFunctionInstanceDirty", nullptr, (EPropertyFlags)0x0010000000202000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialEditorInstanceConstant), &Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bIsFunctionInstanceDirty_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bIsFunctionInstanceDirty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bIsFunctionInstanceDirty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_BasePropertyOverrides_MetaData[] = {
		{ "Category", "MaterialOverrides" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_BasePropertyOverrides = { "BasePropertyOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialEditorInstanceConstant, BasePropertyOverrides), Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_BasePropertyOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_BasePropertyOverrides_MetaData)) }; // 2952432778
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_SourceInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_SourceInstance = { "SourceInstance", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialEditorInstanceConstant, SourceInstance), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_SourceInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_SourceInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_SourceFunction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_SourceFunction = { "SourceFunction", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialEditorInstanceConstant, SourceFunction), Z_Construct_UClass_UMaterialFunctionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_SourceFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_SourceFunction_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_VisibleExpressions_Inner = { "VisibleExpressions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(nullptr, 0) }; // 1695244105
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_VisibleExpressions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_VisibleExpressions = { "VisibleExpressions", nullptr, (EPropertyFlags)0x0010000000202000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialEditorInstanceConstant, VisibleExpressions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_VisibleExpressions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_VisibleExpressions_MetaData)) }; // 1695244105
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_LightmassSettings_MetaData[] = {
		{ "Category", "Lightmass" },
		{ "Comment", "/** The Lightmass override settings for this object. */" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
		{ "ToolTip", "The Lightmass override settings for this object." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_LightmassSettings = { "LightmassSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialEditorInstanceConstant, LightmassSettings), Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_LightmassSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_LightmassSettings_MetaData)) }; // 514503608
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bUseOldStyleMICEditorGroups_MetaData[] = {
		{ "Category", "MaterialEditorInstanceConstant" },
		{ "Comment", "/** Should we use old style typed arrays for unassigned parameters instead of a None group (new style)? */" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
		{ "ToolTip", "Should we use old style typed arrays for unassigned parameters instead of a None group (new style)?" },
	};
#endif
	void Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bUseOldStyleMICEditorGroups_SetBit(void* Obj)
	{
		((UMaterialEditorInstanceConstant*)Obj)->bUseOldStyleMICEditorGroups = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bUseOldStyleMICEditorGroups = { "bUseOldStyleMICEditorGroups", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialEditorInstanceConstant), &Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bUseOldStyleMICEditorGroups_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bUseOldStyleMICEditorGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bUseOldStyleMICEditorGroups_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bNaniteOverride_MetaData[] = {
		{ "Category", "MaterialEditorInstanceConstant" },
		{ "Comment", "/** When set we will use the override from NaniteOverrideMaterial. Otherwise we inherit any override on the parent. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
		{ "ToolTip", "When set we will use the override from NaniteOverrideMaterial. Otherwise we inherit any override on the parent." },
	};
#endif
	void Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bNaniteOverride_SetBit(void* Obj)
	{
		((UMaterialEditorInstanceConstant*)Obj)->bNaniteOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bNaniteOverride = { "bNaniteOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialEditorInstanceConstant), &Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bNaniteOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bNaniteOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bNaniteOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_NaniteOverrideMaterial_MetaData[] = {
		{ "Category", "MaterialEditorInstanceConstant" },
		{ "Comment", "/** An override material which will be used instead of this one when rendering with nanite. */" },
		{ "editcondition", "bNaniteOverride" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
		{ "ToolTip", "An override material which will be used instead of this one when rendering with nanite." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_NaniteOverrideMaterial = { "NaniteOverrideMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialEditorInstanceConstant, NaniteOverrideMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_NaniteOverrideMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_NaniteOverrideMaterial_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_StoredLayerPreviews_Inner = { "StoredLayerPreviews", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_StoredLayerPreviews_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_StoredLayerPreviews = { "StoredLayerPreviews", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialEditorInstanceConstant, StoredLayerPreviews), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_StoredLayerPreviews_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_StoredLayerPreviews_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_StoredBlendPreviews_Inner = { "StoredBlendPreviews", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_StoredBlendPreviews_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_StoredBlendPreviews = { "StoredBlendPreviews", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialEditorInstanceConstant, StoredBlendPreviews), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_StoredBlendPreviews_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_StoredBlendPreviews_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_PhysMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_ParameterGroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_ParameterGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_RefractionDepthBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_SubsurfaceProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bOverrideSubsurfaceProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bOverrideBaseProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bIsFunctionPreviewMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bIsFunctionInstanceDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_BasePropertyOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_SourceInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_SourceFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_VisibleExpressions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_VisibleExpressions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_LightmassSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bUseOldStyleMICEditorGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bNaniteOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_NaniteOverrideMaterial,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_StoredLayerPreviews_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_StoredLayerPreviews,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_StoredBlendPreviews_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_StoredBlendPreviews,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialEditorInstanceConstant>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::ClassParams = {
		&UMaterialEditorInstanceConstant::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::PropPointers),
		0,
		0x009020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialEditorInstanceConstant()
	{
		if (!Z_Registration_Info_UClass_UMaterialEditorInstanceConstant.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialEditorInstanceConstant.OuterSingleton, Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialEditorInstanceConstant.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UMaterialEditorInstanceConstant>()
	{
		return UMaterialEditorInstanceConstant::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialEditorInstanceConstant);
	UMaterialEditorInstanceConstant::~UMaterialEditorInstanceConstant() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorInstanceConstant_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorInstanceConstant_h_Statics::ScriptStructInfo[] = {
		{ FEditorParameterGroup::StaticStruct, Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewStructOps, TEXT("EditorParameterGroup"), &Z_Registration_Info_UScriptStruct_EditorParameterGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorParameterGroup), 3714873727U) },
		{ FEditorParameterValue::StaticStruct, Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewStructOps, TEXT("EditorParameterValue"), &Z_Registration_Info_UScriptStruct_EditorParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorParameterValue), 4084234925U) },
		{ FEditorVectorParameterValue::StaticStruct, Z_Construct_UScriptStruct_FEditorVectorParameterValue_Statics::NewStructOps, TEXT("EditorVectorParameterValue"), &Z_Registration_Info_UScriptStruct_EditorVectorParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorVectorParameterValue), 943196926U) },
		{ FEditorScalarParameterValue::StaticStruct, Z_Construct_UScriptStruct_FEditorScalarParameterValue_Statics::NewStructOps, TEXT("EditorScalarParameterValue"), &Z_Registration_Info_UScriptStruct_EditorScalarParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorScalarParameterValue), 3801943447U) },
		{ FEditorTextureParameterValue::StaticStruct, Z_Construct_UScriptStruct_FEditorTextureParameterValue_Statics::NewStructOps, TEXT("EditorTextureParameterValue"), &Z_Registration_Info_UScriptStruct_EditorTextureParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorTextureParameterValue), 1850071594U) },
		{ FEditorFontParameterValue::StaticStruct, Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::NewStructOps, TEXT("EditorFontParameterValue"), &Z_Registration_Info_UScriptStruct_EditorFontParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorFontParameterValue), 871194030U) },
		{ FEditorMaterialLayersParameterValue::StaticStruct, Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Statics::NewStructOps, TEXT("EditorMaterialLayersParameterValue"), &Z_Registration_Info_UScriptStruct_EditorMaterialLayersParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorMaterialLayersParameterValue), 2015652673U) },
		{ FEditorStaticSwitchParameterValue::StaticStruct, Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics::NewStructOps, TEXT("EditorStaticSwitchParameterValue"), &Z_Registration_Info_UScriptStruct_EditorStaticSwitchParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorStaticSwitchParameterValue), 4033781444U) },
		{ FComponentMaskParameter::StaticStruct, Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewStructOps, TEXT("ComponentMaskParameter"), &Z_Registration_Info_UScriptStruct_ComponentMaskParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComponentMaskParameter), 2311491675U) },
		{ FEditorStaticComponentMaskParameterValue::StaticStruct, Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Statics::NewStructOps, TEXT("EditorStaticComponentMaskParameterValue"), &Z_Registration_Info_UScriptStruct_EditorStaticComponentMaskParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorStaticComponentMaskParameterValue), 1361318706U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorInstanceConstant_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialEditorInstanceConstant, UMaterialEditorInstanceConstant::StaticClass, TEXT("UMaterialEditorInstanceConstant"), &Z_Registration_Info_UClass_UMaterialEditorInstanceConstant, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialEditorInstanceConstant), 3862687652U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorInstanceConstant_h_3625010415(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorInstanceConstant_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorInstanceConstant_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorInstanceConstant_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorInstanceConstant_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
