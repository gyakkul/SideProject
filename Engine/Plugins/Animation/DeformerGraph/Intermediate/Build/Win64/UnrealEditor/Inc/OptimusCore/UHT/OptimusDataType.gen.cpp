// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusDataType.h"
#include "ComputeFramework/ShaderParamTypeDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDataType() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FShaderValueTypeHandle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	OPTIMUSCORE_API UEnum* Z_Construct_UEnum_OptimusCore_EOptimusDataTypeFlags();
	OPTIMUSCORE_API UEnum* Z_Construct_UEnum_OptimusCore_EOptimusDataTypeUsageFlags();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataType();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataTypeRef();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOptimusDataTypeUsageFlags;
	static UEnum* EOptimusDataTypeUsageFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOptimusDataTypeUsageFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOptimusDataTypeUsageFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OptimusCore_EOptimusDataTypeUsageFlags, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("EOptimusDataTypeUsageFlags"));
		}
		return Z_Registration_Info_UEnum_EOptimusDataTypeUsageFlags.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UEnum* StaticEnum<EOptimusDataTypeUsageFlags>()
	{
		return EOptimusDataTypeUsageFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_OptimusCore_EOptimusDataTypeUsageFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OptimusCore_EOptimusDataTypeUsageFlags_Statics::Enumerators[] = {
		{ "EOptimusDataTypeUsageFlags::None", (int64)EOptimusDataTypeUsageFlags::None },
		{ "EOptimusDataTypeUsageFlags::Resource", (int64)EOptimusDataTypeUsageFlags::Resource },
		{ "EOptimusDataTypeUsageFlags::Variable", (int64)EOptimusDataTypeUsageFlags::Variable },
		{ "EOptimusDataTypeUsageFlags::AnimAttributes", (int64)EOptimusDataTypeUsageFlags::AnimAttributes },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OptimusCore_EOptimusDataTypeUsageFlags_Statics::Enum_MetaDataParams[] = {
		{ "AnimAttributes.Comment", "/** This type can be used in a variable */" },
		{ "AnimAttributes.Name", "EOptimusDataTypeUsageFlags::AnimAttributes" },
		{ "AnimAttributes.ToolTip", "This type can be used in a variable" },
		{ "Bitflags", "" },
		{ "Comment", "/** These flags govern how the data type can be used */" },
		{ "ModuleRelativePath", "Public/OptimusDataType.h" },
		{ "None.Name", "EOptimusDataTypeUsageFlags::None" },
		{ "Resource.Name", "EOptimusDataTypeUsageFlags::Resource" },
		{ "ToolTip", "These flags govern how the data type can be used" },
		{ "Variable.Comment", "/** This type can be used in a resource */" },
		{ "Variable.Name", "EOptimusDataTypeUsageFlags::Variable" },
		{ "Variable.ToolTip", "This type can be used in a resource" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OptimusCore_EOptimusDataTypeUsageFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OptimusCore,
		nullptr,
		"EOptimusDataTypeUsageFlags",
		"EOptimusDataTypeUsageFlags",
		Z_Construct_UEnum_OptimusCore_EOptimusDataTypeUsageFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusDataTypeUsageFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OptimusCore_EOptimusDataTypeUsageFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusDataTypeUsageFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OptimusCore_EOptimusDataTypeUsageFlags()
	{
		if (!Z_Registration_Info_UEnum_EOptimusDataTypeUsageFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOptimusDataTypeUsageFlags.InnerSingleton, Z_Construct_UEnum_OptimusCore_EOptimusDataTypeUsageFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOptimusDataTypeUsageFlags.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOptimusDataTypeFlags;
	static UEnum* EOptimusDataTypeFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOptimusDataTypeFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOptimusDataTypeFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OptimusCore_EOptimusDataTypeFlags, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("EOptimusDataTypeFlags"));
		}
		return Z_Registration_Info_UEnum_EOptimusDataTypeFlags.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UEnum* StaticEnum<EOptimusDataTypeFlags>()
	{
		return EOptimusDataTypeFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_OptimusCore_EOptimusDataTypeFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OptimusCore_EOptimusDataTypeFlags_Statics::Enumerators[] = {
		{ "EOptimusDataTypeFlags::None", (int64)EOptimusDataTypeFlags::None },
		{ "EOptimusDataTypeFlags::IsStructType", (int64)EOptimusDataTypeFlags::IsStructType },
		{ "EOptimusDataTypeFlags::ShowElements", (int64)EOptimusDataTypeFlags::ShowElements },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OptimusCore_EOptimusDataTypeFlags_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "Comment", "/** These flags are for indicating type behaviour */" },
		{ "IsStructType.Name", "EOptimusDataTypeFlags::IsStructType" },
		{ "ModuleRelativePath", "Public/OptimusDataType.h" },
		{ "None.Name", "EOptimusDataTypeFlags::None" },
		{ "ShowElements.Comment", "/** This is a UScriptStruct-based type. */" },
		{ "ShowElements.Name", "EOptimusDataTypeFlags::ShowElements" },
		{ "ShowElements.ToolTip", "This is a UScriptStruct-based type." },
		{ "ToolTip", "These flags are for indicating type behaviour" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OptimusCore_EOptimusDataTypeFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OptimusCore,
		nullptr,
		"EOptimusDataTypeFlags",
		"EOptimusDataTypeFlags",
		Z_Construct_UEnum_OptimusCore_EOptimusDataTypeFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusDataTypeFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OptimusCore_EOptimusDataTypeFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusDataTypeFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OptimusCore_EOptimusDataTypeFlags()
	{
		if (!Z_Registration_Info_UEnum_EOptimusDataTypeFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOptimusDataTypeFlags.InnerSingleton, Z_Construct_UEnum_OptimusCore_EOptimusDataTypeFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOptimusDataTypeFlags.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusDataType;
class UScriptStruct* FOptimusDataType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusDataType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusDataType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusDataType, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusDataType"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusDataType.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusDataType>()
{
	return FOptimusDataType::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusDataType_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TypeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShaderValueType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShaderValueType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShaderValueSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ShaderValueSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeCategory_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TypeCategory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeObject_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TypeObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasCustomPinColor_MetaData[];
#endif
		static void NewProp_bHasCustomPinColor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCustomPinColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomPinColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomPinColor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UsageFlags_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsageFlags_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UsageFlags;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TypeFlags_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeFlags_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TypeFlags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDataType_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OptimusDataType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusDataType>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_TypeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDataType.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_TypeName = { "TypeName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusDataType, TypeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_TypeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_TypeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_DisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDataType.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusDataType, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_ShaderValueType_MetaData[] = {
		{ "Comment", "// Shader value type that goes with this Optimus pin type.\n" },
		{ "ModuleRelativePath", "Public/OptimusDataType.h" },
		{ "ToolTip", "Shader value type that goes with this Optimus pin type." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_ShaderValueType = { "ShaderValueType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusDataType, ShaderValueType), Z_Construct_UScriptStruct_FShaderValueTypeHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_ShaderValueType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_ShaderValueType_MetaData)) }; // 2213153179
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_ShaderValueSize_MetaData[] = {
		{ "Comment", "// Size of the shader value that can hold a value of this type. If this type is not a\n// shader value, then this value is zero.\n" },
		{ "ModuleRelativePath", "Public/OptimusDataType.h" },
		{ "ToolTip", "Size of the shader value that can hold a value of this type. If this type is not a\nshader value, then this value is zero." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_ShaderValueSize = { "ShaderValueSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusDataType, ShaderValueSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_ShaderValueSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_ShaderValueSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_TypeCategory_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDataType.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_TypeCategory = { "TypeCategory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusDataType, TypeCategory), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_TypeCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_TypeCategory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_TypeObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDataType.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_TypeObject = { "TypeObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusDataType, TypeObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_TypeObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_TypeObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_bHasCustomPinColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDataType.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_bHasCustomPinColor_SetBit(void* Obj)
	{
		((FOptimusDataType*)Obj)->bHasCustomPinColor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_bHasCustomPinColor = { "bHasCustomPinColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOptimusDataType), &Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_bHasCustomPinColor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_bHasCustomPinColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_bHasCustomPinColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_CustomPinColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDataType.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_CustomPinColor = { "CustomPinColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusDataType, CustomPinColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_CustomPinColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_CustomPinColor_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_UsageFlags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_UsageFlags_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDataType.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_UsageFlags = { "UsageFlags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusDataType, UsageFlags), Z_Construct_UEnum_OptimusCore_EOptimusDataTypeUsageFlags, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_UsageFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_UsageFlags_MetaData)) }; // 55053020
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_TypeFlags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_TypeFlags_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDataType.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_TypeFlags = { "TypeFlags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusDataType, TypeFlags), Z_Construct_UEnum_OptimusCore_EOptimusDataTypeFlags, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_TypeFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_TypeFlags_MetaData)) }; // 3548869728
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusDataType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_TypeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_ShaderValueType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_ShaderValueSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_TypeCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_TypeObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_bHasCustomPinColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_CustomPinColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_UsageFlags_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_UsageFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_TypeFlags_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewProp_TypeFlags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusDataType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		nullptr,
		&NewStructOps,
		"OptimusDataType",
		sizeof(FOptimusDataType),
		alignof(FOptimusDataType),
		Z_Construct_UScriptStruct_FOptimusDataType_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDataType_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDataType_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDataType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataType()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusDataType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusDataType.InnerSingleton, Z_Construct_UScriptStruct_FOptimusDataType_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusDataType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusDataTypeRef;
class UScriptStruct* FOptimusDataTypeRef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusDataTypeRef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusDataTypeRef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusDataTypeRef, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusDataTypeRef"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusDataTypeRef.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusDataTypeRef>()
{
	return FOptimusDataTypeRef::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusDataTypeRef_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TypeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeObject_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TypeObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDataTypeRef_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A reference object for an Optimus data type to use in UObjects and other UStruct-like things */" },
		{ "ModuleRelativePath", "Public/OptimusDataType.h" },
		{ "ToolTip", "A reference object for an Optimus data type to use in UObjects and other UStruct-like things" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusDataTypeRef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusDataTypeRef>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDataTypeRef_Statics::NewProp_TypeName_MetaData[] = {
		{ "Category", "Type" },
		{ "ModuleRelativePath", "Public/OptimusDataType.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusDataTypeRef_Statics::NewProp_TypeName = { "TypeName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusDataTypeRef, TypeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDataTypeRef_Statics::NewProp_TypeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDataTypeRef_Statics::NewProp_TypeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDataTypeRef_Statics::NewProp_TypeObject_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "// A weak pointer to the type object helps enforce asset dependency\n" },
		{ "ModuleRelativePath", "Public/OptimusDataType.h" },
		{ "ToolTip", "A weak pointer to the type object helps enforce asset dependency" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FOptimusDataTypeRef_Statics::NewProp_TypeObject = { "TypeObject", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusDataTypeRef, TypeObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDataTypeRef_Statics::NewProp_TypeObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDataTypeRef_Statics::NewProp_TypeObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusDataTypeRef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDataTypeRef_Statics::NewProp_TypeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDataTypeRef_Statics::NewProp_TypeObject,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusDataTypeRef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		nullptr,
		&NewStructOps,
		"OptimusDataTypeRef",
		sizeof(FOptimusDataTypeRef),
		alignof(FOptimusDataTypeRef),
		Z_Construct_UScriptStruct_FOptimusDataTypeRef_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDataTypeRef_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDataTypeRef_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDataTypeRef_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataTypeRef()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusDataTypeRef.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusDataTypeRef.InnerSingleton, Z_Construct_UScriptStruct_FOptimusDataTypeRef_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusDataTypeRef.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDataType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDataType_h_Statics::EnumInfo[] = {
		{ EOptimusDataTypeUsageFlags_StaticEnum, TEXT("EOptimusDataTypeUsageFlags"), &Z_Registration_Info_UEnum_EOptimusDataTypeUsageFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 55053020U) },
		{ EOptimusDataTypeFlags_StaticEnum, TEXT("EOptimusDataTypeFlags"), &Z_Registration_Info_UEnum_EOptimusDataTypeFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3548869728U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDataType_h_Statics::ScriptStructInfo[] = {
		{ FOptimusDataType::StaticStruct, Z_Construct_UScriptStruct_FOptimusDataType_Statics::NewStructOps, TEXT("OptimusDataType"), &Z_Registration_Info_UScriptStruct_OptimusDataType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusDataType), 4062273407U) },
		{ FOptimusDataTypeRef::StaticStruct, Z_Construct_UScriptStruct_FOptimusDataTypeRef_Statics::NewStructOps, TEXT("OptimusDataTypeRef"), &Z_Registration_Info_UScriptStruct_OptimusDataTypeRef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusDataTypeRef), 2733180919U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDataType_h_968654000(TEXT("/Script/OptimusCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDataType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDataType_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDataType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDataType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
