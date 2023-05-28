// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/MuCO/CustomizableObjectParameterTypeDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectParameterTypeDefinitions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	CUSTOMIZABLEOBJECT_API UEnum* Z_Construct_UEnum_CustomizableObject_ECustomizableObjectGroupType();
	CUSTOMIZABLEOBJECT_API UEnum* Z_Construct_UEnum_CustomizableObject_ECustomizableObjectProjectorType();
	CUSTOMIZABLEOBJECT_API UEnum* Z_Construct_UEnum_CustomizableObject_EMutableCompileMeshType();
	CUSTOMIZABLEOBJECT_API UEnum* Z_Construct_UEnum_CustomizableObject_EMutableParameterType();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectProjector();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue();
	UPackage* Z_Construct_UPackage__Script_CustomizableObject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMutableParameterType;
	static UEnum* EMutableParameterType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMutableParameterType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMutableParameterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomizableObject_EMutableParameterType, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("EMutableParameterType"));
		}
		return Z_Registration_Info_UEnum_EMutableParameterType.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECT_API UEnum* StaticEnum<EMutableParameterType>()
	{
		return EMutableParameterType_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomizableObject_EMutableParameterType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomizableObject_EMutableParameterType_Statics::Enumerators[] = {
		{ "EMutableParameterType::None", (int64)EMutableParameterType::None },
		{ "EMutableParameterType::Bool", (int64)EMutableParameterType::Bool },
		{ "EMutableParameterType::Int", (int64)EMutableParameterType::Int },
		{ "EMutableParameterType::Float", (int64)EMutableParameterType::Float },
		{ "EMutableParameterType::Color", (int64)EMutableParameterType::Color },
		{ "EMutableParameterType::Projector", (int64)EMutableParameterType::Projector },
		{ "EMutableParameterType::Texture", (int64)EMutableParameterType::Texture },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomizableObject_EMutableParameterType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bool.DisplayName", "Boolean" },
		{ "Bool.Name", "EMutableParameterType::Bool" },
		{ "Color.DisplayName", "Color" },
		{ "Color.Name", "EMutableParameterType::Color" },
		{ "Float.DisplayName", "Float" },
		{ "Float.Name", "EMutableParameterType::Float" },
		{ "Int.DisplayName", "Integer" },
		{ "Int.Name", "EMutableParameterType::Int" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
		{ "None.DisplayName", "Unknown" },
		{ "None.Name", "EMutableParameterType::None" },
		{ "Projector.DisplayName", "Projector" },
		{ "Projector.Name", "EMutableParameterType::Projector" },
		{ "Texture.DisplayName", "Texture" },
		{ "Texture.Name", "EMutableParameterType::Texture" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomizableObject_EMutableParameterType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		"EMutableParameterType",
		"EMutableParameterType",
		Z_Construct_UEnum_CustomizableObject_EMutableParameterType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObject_EMutableParameterType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CustomizableObject_EMutableParameterType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObject_EMutableParameterType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CustomizableObject_EMutableParameterType()
	{
		if (!Z_Registration_Info_UEnum_EMutableParameterType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMutableParameterType.InnerSingleton, Z_Construct_UEnum_CustomizableObject_EMutableParameterType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMutableParameterType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomizableObjectGroupType;
	static UEnum* ECustomizableObjectGroupType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECustomizableObjectGroupType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECustomizableObjectGroupType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomizableObject_ECustomizableObjectGroupType, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("ECustomizableObjectGroupType"));
		}
		return Z_Registration_Info_UEnum_ECustomizableObjectGroupType.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECT_API UEnum* StaticEnum<ECustomizableObjectGroupType>()
	{
		return ECustomizableObjectGroupType_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomizableObject_ECustomizableObjectGroupType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomizableObject_ECustomizableObjectGroupType_Statics::Enumerators[] = {
		{ "ECustomizableObjectGroupType::COGT_TOGGLE", (int64)ECustomizableObjectGroupType::COGT_TOGGLE },
		{ "ECustomizableObjectGroupType::COGT_ALL", (int64)ECustomizableObjectGroupType::COGT_ALL },
		{ "ECustomizableObjectGroupType::COGT_ONE", (int64)ECustomizableObjectGroupType::COGT_ONE },
		{ "ECustomizableObjectGroupType::COGT_ONE_OR_NONE", (int64)ECustomizableObjectGroupType::COGT_ONE_OR_NONE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomizableObject_ECustomizableObjectGroupType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "COGT_ALL.DisplayName", "All Options" },
		{ "COGT_ALL.Name", "ECustomizableObjectGroupType::COGT_ALL" },
		{ "COGT_ONE.DisplayName", "At least one Option" },
		{ "COGT_ONE.Name", "ECustomizableObjectGroupType::COGT_ONE" },
		{ "COGT_ONE_OR_NONE.DisplayName", "One or None" },
		{ "COGT_ONE_OR_NONE.Name", "ECustomizableObjectGroupType::COGT_ONE_OR_NONE" },
		{ "COGT_TOGGLE.DisplayName", "Toggle" },
		{ "COGT_TOGGLE.Name", "ECustomizableObjectGroupType::COGT_TOGGLE" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomizableObject_ECustomizableObjectGroupType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		"ECustomizableObjectGroupType",
		"ECustomizableObjectGroupType",
		Z_Construct_UEnum_CustomizableObject_ECustomizableObjectGroupType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObject_ECustomizableObjectGroupType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CustomizableObject_ECustomizableObjectGroupType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObject_ECustomizableObjectGroupType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CustomizableObject_ECustomizableObjectGroupType()
	{
		if (!Z_Registration_Info_UEnum_ECustomizableObjectGroupType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomizableObjectGroupType.InnerSingleton, Z_Construct_UEnum_CustomizableObject_ECustomizableObjectGroupType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECustomizableObjectGroupType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMutableCompileMeshType;
	static UEnum* EMutableCompileMeshType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMutableCompileMeshType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMutableCompileMeshType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomizableObject_EMutableCompileMeshType, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("EMutableCompileMeshType"));
		}
		return Z_Registration_Info_UEnum_EMutableCompileMeshType.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECT_API UEnum* StaticEnum<EMutableCompileMeshType>()
	{
		return EMutableCompileMeshType_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomizableObject_EMutableCompileMeshType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomizableObject_EMutableCompileMeshType_Statics::Enumerators[] = {
		{ "EMutableCompileMeshType::Full", (int64)EMutableCompileMeshType::Full },
		{ "EMutableCompileMeshType::Local", (int64)EMutableCompileMeshType::Local },
		{ "EMutableCompileMeshType::LocalAndChildren", (int64)EMutableCompileMeshType::LocalAndChildren },
		{ "EMutableCompileMeshType::AddWorkingSetNoChildren", (int64)EMutableCompileMeshType::AddWorkingSetNoChildren },
		{ "EMutableCompileMeshType::AddWorkingSetAndChildren", (int64)EMutableCompileMeshType::AddWorkingSetAndChildren },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomizableObject_EMutableCompileMeshType_Statics::Enum_MetaDataParams[] = {
		{ "AddWorkingSetAndChildren.Comment", "// Add to the compilation all COs in the Working Set array and all parents of this object and all parents of each element in the Working Set array until whole graph root, don't include this CO's children\n" },
		{ "AddWorkingSetAndChildren.DisplayName", "Add working set and children" },
		{ "AddWorkingSetAndChildren.Name", "EMutableCompileMeshType::AddWorkingSetAndChildren" },
		{ "AddWorkingSetAndChildren.ToolTip", "Add to the compilation all COs in the Working Set array and all parents of this object and all parents of each element in the Working Set array until whole graph root, don't include this CO's children" },
		{ "AddWorkingSetNoChildren.Comment", "// Compile this CO and add all children and parents until whole graph root\n" },
		{ "AddWorkingSetNoChildren.DisplayName", "Add working set, no children" },
		{ "AddWorkingSetNoChildren.Name", "EMutableCompileMeshType::AddWorkingSetNoChildren" },
		{ "AddWorkingSetNoChildren.ToolTip", "Compile this CO and add all children and parents until whole graph root" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Customizable object mesh compilation options */" },
		{ "Full.DisplayName", "Full object" },
		{ "Full.Name", "EMutableCompileMeshType::Full" },
		{ "Local.Comment", "// Compile this CO, and add all COs in the whole hierarchy\n" },
		{ "Local.DisplayName", "Just local object" },
		{ "Local.Name", "EMutableCompileMeshType::Local" },
		{ "Local.ToolTip", "Compile this CO, and add all COs in the whole hierarchy" },
		{ "LocalAndChildren.Comment", "// Compile this CO and add all parents until whole graph root\n" },
		{ "LocalAndChildren.DisplayName", "Local object and children" },
		{ "LocalAndChildren.Name", "EMutableCompileMeshType::LocalAndChildren" },
		{ "LocalAndChildren.ToolTip", "Compile this CO and add all parents until whole graph root" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
		{ "ToolTip", "Customizable object mesh compilation options" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomizableObject_EMutableCompileMeshType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		"EMutableCompileMeshType",
		"EMutableCompileMeshType",
		Z_Construct_UEnum_CustomizableObject_EMutableCompileMeshType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObject_EMutableCompileMeshType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CustomizableObject_EMutableCompileMeshType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObject_EMutableCompileMeshType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CustomizableObject_EMutableCompileMeshType()
	{
		if (!Z_Registration_Info_UEnum_EMutableCompileMeshType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMutableCompileMeshType.InnerSingleton, Z_Construct_UEnum_CustomizableObject_EMutableCompileMeshType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMutableCompileMeshType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectBoolParameterValue;
class UScriptStruct* FCustomizableObjectBoolParameterValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectBoolParameterValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectBoolParameterValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("CustomizableObjectBoolParameterValue"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectBoolParameterValue.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FCustomizableObjectBoolParameterValue>()
{
	return FCustomizableObjectBoolParameterValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static void NewProp_ParameterValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ParameterValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Uid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Uid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectBoolParameterValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "CustomizableObjectBoolParameterValue" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectBoolParameterValue, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "CustomizableObjectBoolParameterValue" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue_Statics::NewProp_ParameterValue_SetBit(void* Obj)
	{
		((FCustomizableObjectBoolParameterValue*)Obj)->ParameterValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCustomizableObjectBoolParameterValue), &Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue_Statics::NewProp_ParameterValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue_Statics::NewProp_Uid_MetaData[] = {
		{ "Category", "CustomizableObjectBoolParameterValue" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue_Statics::NewProp_Uid = { "Uid", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectBoolParameterValue, Uid), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue_Statics::NewProp_Uid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue_Statics::NewProp_Uid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue_Statics::NewProp_ParameterValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue_Statics::NewProp_Uid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"CustomizableObjectBoolParameterValue",
		sizeof(FCustomizableObjectBoolParameterValue),
		alignof(FCustomizableObjectBoolParameterValue),
		Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectBoolParameterValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectBoolParameterValue.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectBoolParameterValue.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectIntParameterValue;
class UScriptStruct* FCustomizableObjectIntParameterValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectIntParameterValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectIntParameterValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("CustomizableObjectIntParameterValue"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectIntParameterValue.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FCustomizableObjectIntParameterValue>()
{
	return FCustomizableObjectIntParameterValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValueName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterValueName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Uid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Uid;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterRangeValueNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterRangeValueNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterRangeValueNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectIntParameterValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "CustomizableObjectIntParameterValue" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectIntParameterValue, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics::NewProp_ParameterValueName_MetaData[] = {
		{ "Category", "CustomizableObjectIntParameterValue" },
		{ "Comment", "// This is what we actually want to store.\n" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
		{ "ToolTip", "This is what we actually want to store." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics::NewProp_ParameterValueName = { "ParameterValueName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectIntParameterValue, ParameterValueName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics::NewProp_ParameterValueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics::NewProp_ParameterValueName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics::NewProp_Uid_MetaData[] = {
		{ "Category", "CustomizableObjectIntParameterValue" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics::NewProp_Uid = { "Uid", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectIntParameterValue, Uid), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics::NewProp_Uid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics::NewProp_Uid_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics::NewProp_ParameterRangeValueNames_Inner = { "ParameterRangeValueNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics::NewProp_ParameterRangeValueNames_MetaData[] = {
		{ "Comment", "// Same as ParameterValueName but for multidimensional params\n" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
		{ "ToolTip", "Same as ParameterValueName but for multidimensional params" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics::NewProp_ParameterRangeValueNames = { "ParameterRangeValueNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectIntParameterValue, ParameterRangeValueNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics::NewProp_ParameterRangeValueNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics::NewProp_ParameterRangeValueNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics::NewProp_ParameterValueName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics::NewProp_Uid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics::NewProp_ParameterRangeValueNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics::NewProp_ParameterRangeValueNames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"CustomizableObjectIntParameterValue",
		sizeof(FCustomizableObjectIntParameterValue),
		alignof(FCustomizableObjectIntParameterValue),
		Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectIntParameterValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectIntParameterValue.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectIntParameterValue.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectFloatParameterValue;
class UScriptStruct* FCustomizableObjectFloatParameterValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectFloatParameterValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectFloatParameterValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("CustomizableObjectFloatParameterValue"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectFloatParameterValue.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FCustomizableObjectFloatParameterValue>()
{
	return FCustomizableObjectFloatParameterValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ParameterValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Uid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Uid;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ParameterRangeValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterRangeValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterRangeValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectFloatParameterValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "CustomizableObjectFloatParameterValue" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectFloatParameterValue, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "CustomizableObjectFloatParameterValue" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectFloatParameterValue, ParameterValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics::NewProp_Uid_MetaData[] = {
		{ "Category", "CustomizableObjectFloatParameterValue" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics::NewProp_Uid = { "Uid", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectFloatParameterValue, Uid), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics::NewProp_Uid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics::NewProp_Uid_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics::NewProp_ParameterRangeValues_Inner = { "ParameterRangeValues", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics::NewProp_ParameterRangeValues_MetaData[] = {
		{ "Category", "CustomizableObjectFloatParameterValue" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics::NewProp_ParameterRangeValues = { "ParameterRangeValues", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectFloatParameterValue, ParameterRangeValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics::NewProp_ParameterRangeValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics::NewProp_ParameterRangeValues_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics::NewProp_ParameterValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics::NewProp_Uid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics::NewProp_ParameterRangeValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics::NewProp_ParameterRangeValues,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"CustomizableObjectFloatParameterValue",
		sizeof(FCustomizableObjectFloatParameterValue),
		alignof(FCustomizableObjectFloatParameterValue),
		Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectFloatParameterValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectFloatParameterValue.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectFloatParameterValue.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectTextureParameterValue;
class UScriptStruct* FCustomizableObjectTextureParameterValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectTextureParameterValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectTextureParameterValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("CustomizableObjectTextureParameterValue"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectTextureParameterValue.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FCustomizableObjectTextureParameterValue>()
{
	return FCustomizableObjectTextureParameterValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_ParameterValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Uid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Uid;
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_ParameterRangeValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterRangeValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterRangeValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectTextureParameterValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "CustomizableObjectTextureParameterValue" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectTextureParameterValue, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "CustomizableObjectTextureParameterValue" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectTextureParameterValue, ParameterValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics::NewProp_Uid_MetaData[] = {
		{ "Category", "CustomizableObjectTextureParameterValue" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics::NewProp_Uid = { "Uid", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectTextureParameterValue, Uid), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics::NewProp_Uid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics::NewProp_Uid_MetaData)) };
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics::NewProp_ParameterRangeValues_Inner = { "ParameterRangeValues", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics::NewProp_ParameterRangeValues_MetaData[] = {
		{ "Category", "CustomizableObjectTextureParameterValue" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics::NewProp_ParameterRangeValues = { "ParameterRangeValues", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectTextureParameterValue, ParameterRangeValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics::NewProp_ParameterRangeValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics::NewProp_ParameterRangeValues_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics::NewProp_ParameterValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics::NewProp_Uid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics::NewProp_ParameterRangeValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics::NewProp_ParameterRangeValues,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"CustomizableObjectTextureParameterValue",
		sizeof(FCustomizableObjectTextureParameterValue),
		alignof(FCustomizableObjectTextureParameterValue),
		Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectTextureParameterValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectTextureParameterValue.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectTextureParameterValue.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectVectorParameterValue;
class UScriptStruct* FCustomizableObjectVectorParameterValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectVectorParameterValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectVectorParameterValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("CustomizableObjectVectorParameterValue"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectVectorParameterValue.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FCustomizableObjectVectorParameterValue>()
{
	return FCustomizableObjectVectorParameterValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Uid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Uid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectVectorParameterValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "CustomizableObjectVectorParameterValue" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectVectorParameterValue, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "CustomizableObjectVectorParameterValue" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectVectorParameterValue, ParameterValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue_Statics::NewProp_Uid_MetaData[] = {
		{ "Category", "CustomizableObjectVectorParameterValue" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue_Statics::NewProp_Uid = { "Uid", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectVectorParameterValue, Uid), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue_Statics::NewProp_Uid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue_Statics::NewProp_Uid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue_Statics::NewProp_ParameterValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue_Statics::NewProp_Uid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"CustomizableObjectVectorParameterValue",
		sizeof(FCustomizableObjectVectorParameterValue),
		alignof(FCustomizableObjectVectorParameterValue),
		Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectVectorParameterValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectVectorParameterValue.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectVectorParameterValue.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomizableObjectProjectorType;
	static UEnum* ECustomizableObjectProjectorType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECustomizableObjectProjectorType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECustomizableObjectProjectorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomizableObject_ECustomizableObjectProjectorType, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("ECustomizableObjectProjectorType"));
		}
		return Z_Registration_Info_UEnum_ECustomizableObjectProjectorType.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECT_API UEnum* StaticEnum<ECustomizableObjectProjectorType>()
	{
		return ECustomizableObjectProjectorType_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomizableObject_ECustomizableObjectProjectorType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomizableObject_ECustomizableObjectProjectorType_Statics::Enumerators[] = {
		{ "ECustomizableObjectProjectorType::Planar", (int64)ECustomizableObjectProjectorType::Planar },
		{ "ECustomizableObjectProjectorType::Cylindrical", (int64)ECustomizableObjectProjectorType::Cylindrical },
		{ "ECustomizableObjectProjectorType::Wrapping", (int64)ECustomizableObjectProjectorType::Wrapping },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomizableObject_ECustomizableObjectProjectorType_Statics::Enum_MetaDataParams[] = {
		{ "Cylindrical.DisplayName", "Cylindrical projection" },
		{ "Cylindrical.Name", "ECustomizableObjectProjectorType::Cylindrical" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
		{ "Planar.DisplayName", "Planar projection" },
		{ "Planar.Name", "ECustomizableObjectProjectorType::Planar" },
		{ "Wrapping.DisplayName", "Wrapping projection" },
		{ "Wrapping.Name", "ECustomizableObjectProjectorType::Wrapping" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomizableObject_ECustomizableObjectProjectorType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		"ECustomizableObjectProjectorType",
		"ECustomizableObjectProjectorType",
		Z_Construct_UEnum_CustomizableObject_ECustomizableObjectProjectorType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObject_ECustomizableObjectProjectorType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CustomizableObject_ECustomizableObjectProjectorType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObject_ECustomizableObjectProjectorType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CustomizableObject_ECustomizableObjectProjectorType()
	{
		if (!Z_Registration_Info_UEnum_ECustomizableObjectProjectorType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomizableObjectProjectorType.InnerSingleton, Z_Construct_UEnum_CustomizableObject_ECustomizableObjectProjectorType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECustomizableObjectProjectorType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectProjector;
class UScriptStruct* FCustomizableObjectProjector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectProjector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectProjector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectProjector, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("CustomizableObjectProjector"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectProjector.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FCustomizableObjectProjector>()
{
	return FCustomizableObjectProjector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Up_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Up;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ProjectionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectProjector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectProjector, Position), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectProjector, Direction), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewProp_Up_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewProp_Up = { "Up", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectProjector, Up), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewProp_Up_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewProp_Up_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectProjector, Scale), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewProp_Scale_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewProp_ProjectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewProp_ProjectionType_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewProp_ProjectionType = { "ProjectionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectProjector, ProjectionType), Z_Construct_UEnum_CustomizableObject_ECustomizableObjectProjectorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewProp_ProjectionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewProp_ProjectionType_MetaData)) }; // 4204272212
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewProp_Angle_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "// Just for cylindrical projectors, in radians\n" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
		{ "ToolTip", "Just for cylindrical projectors, in radians" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectProjector, Angle), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewProp_Angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewProp_Angle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewProp_Up,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewProp_ProjectionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewProp_ProjectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewProp_Angle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"CustomizableObjectProjector",
		sizeof(FCustomizableObjectProjector),
		alignof(FCustomizableObjectProjector),
		Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectProjector()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectProjector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectProjector.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectProjector.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectProjectorParameterValue;
class UScriptStruct* FCustomizableObjectProjectorParameterValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectProjectorParameterValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectProjectorParameterValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("CustomizableObjectProjectorParameterValue"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectProjectorParameterValue.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FCustomizableObjectProjectorParameterValue>()
{
	return FCustomizableObjectProjectorParameterValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Uid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Uid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RangeValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RangeValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RangeValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectProjectorParameterValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "CustomizableObjectVectorParameterValue" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectProjectorParameterValue, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "CustomizableObjectVectorParameterValue" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectProjectorParameterValue, Value), Z_Construct_UScriptStruct_FCustomizableObjectProjector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics::NewProp_Value_MetaData)) }; // 574198591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics::NewProp_Uid_MetaData[] = {
		{ "Category", "CustomizableObjectVectorParameterValue" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics::NewProp_Uid = { "Uid", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectProjectorParameterValue, Uid), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics::NewProp_Uid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics::NewProp_Uid_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics::NewProp_RangeValues_Inner = { "RangeValues", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectProjector, METADATA_PARAMS(nullptr, 0) }; // 574198591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics::NewProp_RangeValues_MetaData[] = {
		{ "Category", "CustomizableObjectVectorParameterValue" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectParameterTypeDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics::NewProp_RangeValues = { "RangeValues", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectProjectorParameterValue, RangeValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics::NewProp_RangeValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics::NewProp_RangeValues_MetaData)) }; // 574198591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics::NewProp_Uid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics::NewProp_RangeValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics::NewProp_RangeValues,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"CustomizableObjectProjectorParameterValue",
		sizeof(FCustomizableObjectProjectorParameterValue),
		alignof(FCustomizableObjectProjectorParameterValue),
		Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectProjectorParameterValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectProjectorParameterValue.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectProjectorParameterValue.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectParameterTypeDefinitions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectParameterTypeDefinitions_h_Statics::EnumInfo[] = {
		{ EMutableParameterType_StaticEnum, TEXT("EMutableParameterType"), &Z_Registration_Info_UEnum_EMutableParameterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3035811612U) },
		{ ECustomizableObjectGroupType_StaticEnum, TEXT("ECustomizableObjectGroupType"), &Z_Registration_Info_UEnum_ECustomizableObjectGroupType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2934808786U) },
		{ EMutableCompileMeshType_StaticEnum, TEXT("EMutableCompileMeshType"), &Z_Registration_Info_UEnum_EMutableCompileMeshType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1768187095U) },
		{ ECustomizableObjectProjectorType_StaticEnum, TEXT("ECustomizableObjectProjectorType"), &Z_Registration_Info_UEnum_ECustomizableObjectProjectorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4204272212U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectParameterTypeDefinitions_h_Statics::ScriptStructInfo[] = {
		{ FCustomizableObjectBoolParameterValue::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue_Statics::NewStructOps, TEXT("CustomizableObjectBoolParameterValue"), &Z_Registration_Info_UScriptStruct_CustomizableObjectBoolParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectBoolParameterValue), 709592541U) },
		{ FCustomizableObjectIntParameterValue::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics::NewStructOps, TEXT("CustomizableObjectIntParameterValue"), &Z_Registration_Info_UScriptStruct_CustomizableObjectIntParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectIntParameterValue), 3556153112U) },
		{ FCustomizableObjectFloatParameterValue::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics::NewStructOps, TEXT("CustomizableObjectFloatParameterValue"), &Z_Registration_Info_UScriptStruct_CustomizableObjectFloatParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectFloatParameterValue), 248359709U) },
		{ FCustomizableObjectTextureParameterValue::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics::NewStructOps, TEXT("CustomizableObjectTextureParameterValue"), &Z_Registration_Info_UScriptStruct_CustomizableObjectTextureParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectTextureParameterValue), 1140826405U) },
		{ FCustomizableObjectVectorParameterValue::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue_Statics::NewStructOps, TEXT("CustomizableObjectVectorParameterValue"), &Z_Registration_Info_UScriptStruct_CustomizableObjectVectorParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectVectorParameterValue), 1245826816U) },
		{ FCustomizableObjectProjector::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics::NewStructOps, TEXT("CustomizableObjectProjector"), &Z_Registration_Info_UScriptStruct_CustomizableObjectProjector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectProjector), 574198591U) },
		{ FCustomizableObjectProjectorParameterValue::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics::NewStructOps, TEXT("CustomizableObjectProjectorParameterValue"), &Z_Registration_Info_UScriptStruct_CustomizableObjectProjectorParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectProjectorParameterValue), 2841439205U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectParameterTypeDefinitions_h_1984962123(TEXT("/Script/CustomizableObject"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectParameterTypeDefinitions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectParameterTypeDefinitions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectParameterTypeDefinitions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectParameterTypeDefinitions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
