// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tests/EditorConfigTests.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorConfigTests() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EDITORCONFIG_API UClass* Z_Construct_UClass_UEditorConfigTestObject();
	EDITORCONFIG_API UClass* Z_Construct_UClass_UEditorConfigTestObject_NoRegister();
	EDITORCONFIG_API UEnum* Z_Construct_UEnum_EditorConfig_EEditorConfigTestEnum();
	EDITORCONFIG_API UScriptStruct* Z_Construct_UScriptStruct_FEditorConfigTestComplexArray();
	EDITORCONFIG_API UScriptStruct* Z_Construct_UScriptStruct_FEditorConfigTestComplexMap();
	EDITORCONFIG_API UScriptStruct* Z_Construct_UScriptStruct_FEditorConfigTestComplexSet();
	EDITORCONFIG_API UScriptStruct* Z_Construct_UScriptStruct_FEditorConfigTestEnumStruct();
	EDITORCONFIG_API UScriptStruct* Z_Construct_UScriptStruct_FEditorConfigTestKey();
	EDITORCONFIG_API UScriptStruct* Z_Construct_UScriptStruct_FEditorConfigTestSimpleKeyComplexValueMap();
	EDITORCONFIG_API UScriptStruct* Z_Construct_UScriptStruct_FEditorConfigTestSimpleMap();
	EDITORCONFIG_API UScriptStruct* Z_Construct_UScriptStruct_FEditorConfigTestSimpleSet();
	EDITORCONFIG_API UScriptStruct* Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct();
	UPackage* Z_Construct_UPackage__Script_EditorConfig();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEditorConfigTestEnum;
	static UEnum* EEditorConfigTestEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEditorConfigTestEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEditorConfigTestEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EditorConfig_EEditorConfigTestEnum, (UObject*)Z_Construct_UPackage__Script_EditorConfig(), TEXT("EEditorConfigTestEnum"));
		}
		return Z_Registration_Info_UEnum_EEditorConfigTestEnum.OuterSingleton;
	}
	template<> EDITORCONFIG_API UEnum* StaticEnum<EEditorConfigTestEnum>()
	{
		return EEditorConfigTestEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_EditorConfig_EEditorConfigTestEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EditorConfig_EEditorConfigTestEnum_Statics::Enumerators[] = {
		{ "EEditorConfigTestEnum::Zero", (int64)EEditorConfigTestEnum::Zero },
		{ "EEditorConfigTestEnum::One", (int64)EEditorConfigTestEnum::One },
		{ "EEditorConfigTestEnum::Two", (int64)EEditorConfigTestEnum::Two },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EditorConfig_EEditorConfigTestEnum_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/EditorConfigTests.h" },
		{ "One.Name", "EEditorConfigTestEnum::One" },
		{ "Two.Name", "EEditorConfigTestEnum::Two" },
		{ "Zero.Name", "EEditorConfigTestEnum::Zero" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EditorConfig_EEditorConfigTestEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EditorConfig,
		nullptr,
		"EEditorConfigTestEnum",
		"EEditorConfigTestEnum",
		Z_Construct_UEnum_EditorConfig_EEditorConfigTestEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EditorConfig_EEditorConfigTestEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EditorConfig_EEditorConfigTestEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EditorConfig_EEditorConfigTestEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EditorConfig_EEditorConfigTestEnum()
	{
		if (!Z_Registration_Info_UEnum_EEditorConfigTestEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEditorConfigTestEnum.InnerSingleton, Z_Construct_UEnum_EditorConfig_EEditorConfigTestEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEditorConfigTestEnum.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorConfigTestEnumStruct;
class UScriptStruct* FEditorConfigTestEnumStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorConfigTestEnumStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorConfigTestEnumStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorConfigTestEnumStruct, (UObject*)Z_Construct_UPackage__Script_EditorConfig(), TEXT("EditorConfigTestEnumStruct"));
	}
	return Z_Registration_Info_UScriptStruct_EditorConfigTestEnumStruct.OuterSingleton;
}
template<> EDITORCONFIG_API UScriptStruct* StaticStruct<FEditorConfigTestEnumStruct>()
{
	return FEditorConfigTestEnumStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorConfigTestEnumStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Before_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Before;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Enum_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Enum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_After_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_After;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorConfigTestEnumStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/EditorConfigTests.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorConfigTestEnumStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorConfigTestEnumStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorConfigTestEnumStruct_Statics::NewProp_Before_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/EditorConfigTests.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditorConfigTestEnumStruct_Statics::NewProp_Before = { "Before", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorConfigTestEnumStruct, Before), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorConfigTestEnumStruct_Statics::NewProp_Before_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestEnumStruct_Statics::NewProp_Before_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEditorConfigTestEnumStruct_Statics::NewProp_Enum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorConfigTestEnumStruct_Statics::NewProp_Enum_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/EditorConfigTests.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEditorConfigTestEnumStruct_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorConfigTestEnumStruct, Enum), Z_Construct_UEnum_EditorConfig_EEditorConfigTestEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorConfigTestEnumStruct_Statics::NewProp_Enum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestEnumStruct_Statics::NewProp_Enum_MetaData)) }; // 475459738
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorConfigTestEnumStruct_Statics::NewProp_After_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/EditorConfigTests.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditorConfigTestEnumStruct_Statics::NewProp_After = { "After", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorConfigTestEnumStruct, After), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorConfigTestEnumStruct_Statics::NewProp_After_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestEnumStruct_Statics::NewProp_After_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorConfigTestEnumStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorConfigTestEnumStruct_Statics::NewProp_Before,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorConfigTestEnumStruct_Statics::NewProp_Enum_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorConfigTestEnumStruct_Statics::NewProp_Enum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorConfigTestEnumStruct_Statics::NewProp_After,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorConfigTestEnumStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorConfig,
		nullptr,
		&NewStructOps,
		"EditorConfigTestEnumStruct",
		sizeof(FEditorConfigTestEnumStruct),
		alignof(FEditorConfigTestEnumStruct),
		Z_Construct_UScriptStruct_FEditorConfigTestEnumStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestEnumStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorConfigTestEnumStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestEnumStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorConfigTestEnumStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorConfigTestEnumStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorConfigTestEnumStruct.InnerSingleton, Z_Construct_UScriptStruct_FEditorConfigTestEnumStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorConfigTestEnumStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorConfigTestSimpleStruct;
class UScriptStruct* FEditorConfigTestSimpleStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorConfigTestSimpleStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorConfigTestSimpleStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct, (UObject*)Z_Construct_UPackage__Script_EditorConfig(), TEXT("EditorConfigTestSimpleStruct"));
	}
	return Z_Registration_Info_UScriptStruct_EditorConfigTestSimpleStruct.OuterSingleton;
}
template<> EDITORCONFIG_API UScriptStruct* StaticStruct<FEditorConfigTestSimpleStruct>()
{
	return FEditorConfigTestSimpleStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bool_MetaData[];
#endif
		static void NewProp_Bool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Bool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/EditorConfigTests.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorConfigTestSimpleStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::NewProp_Bool_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/EditorConfigTests.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::NewProp_Bool_SetBit(void* Obj)
	{
		((FEditorConfigTestSimpleStruct*)Obj)->Bool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::NewProp_Bool = { "Bool", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FEditorConfigTestSimpleStruct), &Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::NewProp_Bool_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::NewProp_Bool_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::NewProp_Bool_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::NewProp_Int_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/EditorConfigTests.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::NewProp_Int = { "Int", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorConfigTestSimpleStruct, Int), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::NewProp_Int_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::NewProp_Int_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::NewProp_String_MetaData[] = {
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Private/Tests/EditorConfigTests.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorConfigTestSimpleStruct, String), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::NewProp_String_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::NewProp_Float_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/EditorConfigTests.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorConfigTestSimpleStruct, Float), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::NewProp_Float_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::NewProp_Float_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::NewProp_Array_MetaData[] = {
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Private/Tests/EditorConfigTests.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorConfigTestSimpleStruct, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::NewProp_Array_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::NewProp_Bool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::NewProp_Int,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::NewProp_Float,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::NewProp_Array_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::NewProp_Array,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorConfig,
		nullptr,
		&NewStructOps,
		"EditorConfigTestSimpleStruct",
		sizeof(FEditorConfigTestSimpleStruct),
		alignof(FEditorConfigTestSimpleStruct),
		Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorConfigTestSimpleStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorConfigTestSimpleStruct.InnerSingleton, Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorConfigTestSimpleStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorConfigTestKey;
class UScriptStruct* FEditorConfigTestKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorConfigTestKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorConfigTestKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorConfigTestKey, (UObject*)Z_Construct_UPackage__Script_EditorConfig(), TEXT("EditorConfigTestKey"));
	}
	return Z_Registration_Info_UScriptStruct_EditorConfigTestKey.OuterSingleton;
}
template<> EDITORCONFIG_API UScriptStruct* StaticStruct<FEditorConfigTestKey>()
{
	return FEditorConfigTestKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorConfigTestKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Number_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Number;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorConfigTestKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/EditorConfigTests.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorConfigTestKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorConfigTestKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorConfigTestKey_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/EditorConfigTests.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEditorConfigTestKey_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorConfigTestKey, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorConfigTestKey_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestKey_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorConfigTestKey_Statics::NewProp_Number_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/EditorConfigTests.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FEditorConfigTestKey_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorConfigTestKey, Number), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorConfigTestKey_Statics::NewProp_Number_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestKey_Statics::NewProp_Number_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorConfigTestKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorConfigTestKey_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorConfigTestKey_Statics::NewProp_Number,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorConfigTestKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorConfig,
		nullptr,
		&NewStructOps,
		"EditorConfigTestKey",
		sizeof(FEditorConfigTestKey),
		alignof(FEditorConfigTestKey),
		Z_Construct_UScriptStruct_FEditorConfigTestKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorConfigTestKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorConfigTestKey()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorConfigTestKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorConfigTestKey.InnerSingleton, Z_Construct_UScriptStruct_FEditorConfigTestKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorConfigTestKey.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorConfigTestComplexArray;
class UScriptStruct* FEditorConfigTestComplexArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorConfigTestComplexArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorConfigTestComplexArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorConfigTestComplexArray, (UObject*)Z_Construct_UPackage__Script_EditorConfig(), TEXT("EditorConfigTestComplexArray"));
	}
	return Z_Registration_Info_UScriptStruct_EditorConfigTestComplexArray.OuterSingleton;
}
template<> EDITORCONFIG_API UScriptStruct* StaticStruct<FEditorConfigTestComplexArray>()
{
	return FEditorConfigTestComplexArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorConfigTestComplexArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorConfigTestComplexArray_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/EditorConfigTests.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorConfigTestComplexArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorConfigTestComplexArray>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorConfigTestComplexArray_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEditorConfigTestKey, METADATA_PARAMS(nullptr, 0) }; // 1119928619
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorConfigTestComplexArray_Statics::NewProp_Array_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/EditorConfigTests.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEditorConfigTestComplexArray_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorConfigTestComplexArray, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorConfigTestComplexArray_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestComplexArray_Statics::NewProp_Array_MetaData)) }; // 1119928619
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorConfigTestComplexArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorConfigTestComplexArray_Statics::NewProp_Array_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorConfigTestComplexArray_Statics::NewProp_Array,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorConfigTestComplexArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorConfig,
		nullptr,
		&NewStructOps,
		"EditorConfigTestComplexArray",
		sizeof(FEditorConfigTestComplexArray),
		alignof(FEditorConfigTestComplexArray),
		Z_Construct_UScriptStruct_FEditorConfigTestComplexArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestComplexArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorConfigTestComplexArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestComplexArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorConfigTestComplexArray()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorConfigTestComplexArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorConfigTestComplexArray.InnerSingleton, Z_Construct_UScriptStruct_FEditorConfigTestComplexArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorConfigTestComplexArray.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorConfigTestSimpleMap;
class UScriptStruct* FEditorConfigTestSimpleMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorConfigTestSimpleMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorConfigTestSimpleMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorConfigTestSimpleMap, (UObject*)Z_Construct_UPackage__Script_EditorConfig(), TEXT("EditorConfigTestSimpleMap"));
	}
	return Z_Registration_Info_UScriptStruct_EditorConfigTestSimpleMap.OuterSingleton;
}
template<> EDITORCONFIG_API UScriptStruct* StaticStruct<FEditorConfigTestSimpleMap>()
{
	return FEditorConfigTestSimpleMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorConfigTestSimpleMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_Map_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Map_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Map;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorConfigTestSimpleMap_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/EditorConfigTests.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorConfigTestSimpleMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorConfigTestSimpleMap>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEditorConfigTestSimpleMap_Statics::NewProp_Map_ValueProp = { "Map", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEditorConfigTestSimpleMap_Statics::NewProp_Map_Key_KeyProp = { "Map_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorConfigTestSimpleMap_Statics::NewProp_Map_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/EditorConfigTests.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FEditorConfigTestSimpleMap_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorConfigTestSimpleMap, Map), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorConfigTestSimpleMap_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestSimpleMap_Statics::NewProp_Map_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorConfigTestSimpleMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorConfigTestSimpleMap_Statics::NewProp_Map_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorConfigTestSimpleMap_Statics::NewProp_Map_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorConfigTestSimpleMap_Statics::NewProp_Map,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorConfigTestSimpleMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorConfig,
		nullptr,
		&NewStructOps,
		"EditorConfigTestSimpleMap",
		sizeof(FEditorConfigTestSimpleMap),
		alignof(FEditorConfigTestSimpleMap),
		Z_Construct_UScriptStruct_FEditorConfigTestSimpleMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestSimpleMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorConfigTestSimpleMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestSimpleMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorConfigTestSimpleMap()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorConfigTestSimpleMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorConfigTestSimpleMap.InnerSingleton, Z_Construct_UScriptStruct_FEditorConfigTestSimpleMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorConfigTestSimpleMap.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorConfigTestSimpleKeyComplexValueMap;
class UScriptStruct* FEditorConfigTestSimpleKeyComplexValueMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorConfigTestSimpleKeyComplexValueMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorConfigTestSimpleKeyComplexValueMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorConfigTestSimpleKeyComplexValueMap, (UObject*)Z_Construct_UPackage__Script_EditorConfig(), TEXT("EditorConfigTestSimpleKeyComplexValueMap"));
	}
	return Z_Registration_Info_UScriptStruct_EditorConfigTestSimpleKeyComplexValueMap.OuterSingleton;
}
template<> EDITORCONFIG_API UScriptStruct* StaticStruct<FEditorConfigTestSimpleKeyComplexValueMap>()
{
	return FEditorConfigTestSimpleKeyComplexValueMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorConfigTestSimpleKeyComplexValueMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Map_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Map_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Map;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorConfigTestSimpleKeyComplexValueMap_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/EditorConfigTests.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorConfigTestSimpleKeyComplexValueMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorConfigTestSimpleKeyComplexValueMap>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorConfigTestSimpleKeyComplexValueMap_Statics::NewProp_Map_ValueProp = { "Map", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FEditorConfigTestKey, METADATA_PARAMS(nullptr, 0) }; // 1119928619
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEditorConfigTestSimpleKeyComplexValueMap_Statics::NewProp_Map_Key_KeyProp = { "Map_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorConfigTestSimpleKeyComplexValueMap_Statics::NewProp_Map_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/EditorConfigTests.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FEditorConfigTestSimpleKeyComplexValueMap_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorConfigTestSimpleKeyComplexValueMap, Map), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorConfigTestSimpleKeyComplexValueMap_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestSimpleKeyComplexValueMap_Statics::NewProp_Map_MetaData)) }; // 1119928619
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorConfigTestSimpleKeyComplexValueMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorConfigTestSimpleKeyComplexValueMap_Statics::NewProp_Map_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorConfigTestSimpleKeyComplexValueMap_Statics::NewProp_Map_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorConfigTestSimpleKeyComplexValueMap_Statics::NewProp_Map,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorConfigTestSimpleKeyComplexValueMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorConfig,
		nullptr,
		&NewStructOps,
		"EditorConfigTestSimpleKeyComplexValueMap",
		sizeof(FEditorConfigTestSimpleKeyComplexValueMap),
		alignof(FEditorConfigTestSimpleKeyComplexValueMap),
		Z_Construct_UScriptStruct_FEditorConfigTestSimpleKeyComplexValueMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestSimpleKeyComplexValueMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorConfigTestSimpleKeyComplexValueMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestSimpleKeyComplexValueMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorConfigTestSimpleKeyComplexValueMap()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorConfigTestSimpleKeyComplexValueMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorConfigTestSimpleKeyComplexValueMap.InnerSingleton, Z_Construct_UScriptStruct_FEditorConfigTestSimpleKeyComplexValueMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorConfigTestSimpleKeyComplexValueMap.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorConfigTestComplexMap;
class UScriptStruct* FEditorConfigTestComplexMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorConfigTestComplexMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorConfigTestComplexMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorConfigTestComplexMap, (UObject*)Z_Construct_UPackage__Script_EditorConfig(), TEXT("EditorConfigTestComplexMap"));
	}
	return Z_Registration_Info_UScriptStruct_EditorConfigTestComplexMap.OuterSingleton;
}
template<> EDITORCONFIG_API UScriptStruct* StaticStruct<FEditorConfigTestComplexMap>()
{
	return FEditorConfigTestComplexMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorConfigTestComplexMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Map_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Map_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Map;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorConfigTestComplexMap_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/EditorConfigTests.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorConfigTestComplexMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorConfigTestComplexMap>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorConfigTestComplexMap_Statics::NewProp_Map_ValueProp = { "Map", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FEditorConfigTestKey, METADATA_PARAMS(nullptr, 0) }; // 1119928619
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorConfigTestComplexMap_Statics::NewProp_Map_Key_KeyProp = { "Map_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEditorConfigTestKey, METADATA_PARAMS(nullptr, 0) }; // 1119928619
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorConfigTestComplexMap_Statics::NewProp_Map_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/EditorConfigTests.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FEditorConfigTestComplexMap_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorConfigTestComplexMap, Map), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorConfigTestComplexMap_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestComplexMap_Statics::NewProp_Map_MetaData)) }; // 1119928619 1119928619
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorConfigTestComplexMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorConfigTestComplexMap_Statics::NewProp_Map_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorConfigTestComplexMap_Statics::NewProp_Map_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorConfigTestComplexMap_Statics::NewProp_Map,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorConfigTestComplexMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorConfig,
		nullptr,
		&NewStructOps,
		"EditorConfigTestComplexMap",
		sizeof(FEditorConfigTestComplexMap),
		alignof(FEditorConfigTestComplexMap),
		Z_Construct_UScriptStruct_FEditorConfigTestComplexMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestComplexMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorConfigTestComplexMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestComplexMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorConfigTestComplexMap()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorConfigTestComplexMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorConfigTestComplexMap.InnerSingleton, Z_Construct_UScriptStruct_FEditorConfigTestComplexMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorConfigTestComplexMap.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorConfigTestSimpleSet;
class UScriptStruct* FEditorConfigTestSimpleSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorConfigTestSimpleSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorConfigTestSimpleSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorConfigTestSimpleSet, (UObject*)Z_Construct_UPackage__Script_EditorConfig(), TEXT("EditorConfigTestSimpleSet"));
	}
	return Z_Registration_Info_UScriptStruct_EditorConfigTestSimpleSet.OuterSingleton;
}
template<> EDITORCONFIG_API UScriptStruct* StaticStruct<FEditorConfigTestSimpleSet>()
{
	return FEditorConfigTestSimpleSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorConfigTestSimpleSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FNamePropertyParams NewProp_Set_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Set_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Set;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorConfigTestSimpleSet_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/EditorConfigTests.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorConfigTestSimpleSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorConfigTestSimpleSet>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEditorConfigTestSimpleSet_Statics::NewProp_Set_ElementProp = { "Set", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorConfigTestSimpleSet_Statics::NewProp_Set_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/EditorConfigTests.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FEditorConfigTestSimpleSet_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorConfigTestSimpleSet, Set), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorConfigTestSimpleSet_Statics::NewProp_Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestSimpleSet_Statics::NewProp_Set_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorConfigTestSimpleSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorConfigTestSimpleSet_Statics::NewProp_Set_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorConfigTestSimpleSet_Statics::NewProp_Set,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorConfigTestSimpleSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorConfig,
		nullptr,
		&NewStructOps,
		"EditorConfigTestSimpleSet",
		sizeof(FEditorConfigTestSimpleSet),
		alignof(FEditorConfigTestSimpleSet),
		Z_Construct_UScriptStruct_FEditorConfigTestSimpleSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestSimpleSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorConfigTestSimpleSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestSimpleSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorConfigTestSimpleSet()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorConfigTestSimpleSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorConfigTestSimpleSet.InnerSingleton, Z_Construct_UScriptStruct_FEditorConfigTestSimpleSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorConfigTestSimpleSet.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorConfigTestComplexSet;
class UScriptStruct* FEditorConfigTestComplexSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorConfigTestComplexSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorConfigTestComplexSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorConfigTestComplexSet, (UObject*)Z_Construct_UPackage__Script_EditorConfig(), TEXT("EditorConfigTestComplexSet"));
	}
	return Z_Registration_Info_UScriptStruct_EditorConfigTestComplexSet.OuterSingleton;
}
template<> EDITORCONFIG_API UScriptStruct* StaticStruct<FEditorConfigTestComplexSet>()
{
	return FEditorConfigTestComplexSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorConfigTestComplexSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Set_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Set_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Set;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorConfigTestComplexSet_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/EditorConfigTests.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorConfigTestComplexSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorConfigTestComplexSet>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorConfigTestComplexSet_Statics::NewProp_Set_ElementProp = { "Set", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEditorConfigTestKey, METADATA_PARAMS(nullptr, 0) }; // 1119928619
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorConfigTestComplexSet_Statics::NewProp_Set_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/EditorConfigTests.h" },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FEditorConfigTestKey>::Value, "The structure 'FEditorConfigTestKey' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FEditorConfigTestComplexSet_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorConfigTestComplexSet, Set), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorConfigTestComplexSet_Statics::NewProp_Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestComplexSet_Statics::NewProp_Set_MetaData)) }; // 1119928619
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorConfigTestComplexSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorConfigTestComplexSet_Statics::NewProp_Set_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorConfigTestComplexSet_Statics::NewProp_Set,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorConfigTestComplexSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorConfig,
		nullptr,
		&NewStructOps,
		"EditorConfigTestComplexSet",
		sizeof(FEditorConfigTestComplexSet),
		alignof(FEditorConfigTestComplexSet),
		Z_Construct_UScriptStruct_FEditorConfigTestComplexSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestComplexSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorConfigTestComplexSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorConfigTestComplexSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorConfigTestComplexSet()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorConfigTestComplexSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorConfigTestComplexSet.InnerSingleton, Z_Construct_UScriptStruct_FEditorConfigTestComplexSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorConfigTestComplexSet.InnerSingleton;
	}
	void UEditorConfigTestObject::StaticRegisterNativesUEditorConfigTestObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorConfigTestObject);
	UClass* Z_Construct_UClass_UEditorConfigTestObject_NoRegister()
	{
		return UEditorConfigTestObject::StaticClass();
	}
	struct Z_Construct_UClass_UEditorConfigTestObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Struct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Number_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Number;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorConfigTestObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorConfig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorConfigTestObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/EditorConfigTests.h" },
		{ "ModuleRelativePath", "Private/Tests/EditorConfigTests.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorConfigTestObject_Statics::NewProp_Object_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/EditorConfigTests.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorConfigTestObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorConfigTestObject, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorConfigTestObject_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorConfigTestObject_Statics::NewProp_Object_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorConfigTestObject_Statics::NewProp_Struct_MetaData[] = {
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Private/Tests/EditorConfigTests.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorConfigTestObject_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorConfigTestObject, Struct), Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct, METADATA_PARAMS(Z_Construct_UClass_UEditorConfigTestObject_Statics::NewProp_Struct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorConfigTestObject_Statics::NewProp_Struct_MetaData)) }; // 4243870079
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorConfigTestObject_Statics::NewProp_Number_MetaData[] = {
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Private/Tests/EditorConfigTests.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditorConfigTestObject_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorConfigTestObject, Number), METADATA_PARAMS(Z_Construct_UClass_UEditorConfigTestObject_Statics::NewProp_Number_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorConfigTestObject_Statics::NewProp_Number_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorConfigTestObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorConfigTestObject_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorConfigTestObject_Statics::NewProp_Struct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorConfigTestObject_Statics::NewProp_Number,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorConfigTestObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorConfigTestObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorConfigTestObject_Statics::ClassParams = {
		&UEditorConfigTestObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorConfigTestObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorConfigTestObject_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorConfigTestObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorConfigTestObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorConfigTestObject()
	{
		if (!Z_Registration_Info_UClass_UEditorConfigTestObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorConfigTestObject.OuterSingleton, Z_Construct_UClass_UEditorConfigTestObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorConfigTestObject.OuterSingleton;
	}
	template<> EDITORCONFIG_API UClass* StaticClass<UEditorConfigTestObject>()
	{
		return UEditorConfigTestObject::StaticClass();
	}
	UEditorConfigTestObject::UEditorConfigTestObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorConfigTestObject);
	UEditorConfigTestObject::~UEditorConfigTestObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorConfig_Private_Tests_EditorConfigTests_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorConfig_Private_Tests_EditorConfigTests_h_Statics::EnumInfo[] = {
		{ EEditorConfigTestEnum_StaticEnum, TEXT("EEditorConfigTestEnum"), &Z_Registration_Info_UEnum_EEditorConfigTestEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 475459738U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorConfig_Private_Tests_EditorConfigTests_h_Statics::ScriptStructInfo[] = {
		{ FEditorConfigTestEnumStruct::StaticStruct, Z_Construct_UScriptStruct_FEditorConfigTestEnumStruct_Statics::NewStructOps, TEXT("EditorConfigTestEnumStruct"), &Z_Registration_Info_UScriptStruct_EditorConfigTestEnumStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorConfigTestEnumStruct), 174917992U) },
		{ FEditorConfigTestSimpleStruct::StaticStruct, Z_Construct_UScriptStruct_FEditorConfigTestSimpleStruct_Statics::NewStructOps, TEXT("EditorConfigTestSimpleStruct"), &Z_Registration_Info_UScriptStruct_EditorConfigTestSimpleStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorConfigTestSimpleStruct), 4243870079U) },
		{ FEditorConfigTestKey::StaticStruct, Z_Construct_UScriptStruct_FEditorConfigTestKey_Statics::NewStructOps, TEXT("EditorConfigTestKey"), &Z_Registration_Info_UScriptStruct_EditorConfigTestKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorConfigTestKey), 1119928619U) },
		{ FEditorConfigTestComplexArray::StaticStruct, Z_Construct_UScriptStruct_FEditorConfigTestComplexArray_Statics::NewStructOps, TEXT("EditorConfigTestComplexArray"), &Z_Registration_Info_UScriptStruct_EditorConfigTestComplexArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorConfigTestComplexArray), 1443985493U) },
		{ FEditorConfigTestSimpleMap::StaticStruct, Z_Construct_UScriptStruct_FEditorConfigTestSimpleMap_Statics::NewStructOps, TEXT("EditorConfigTestSimpleMap"), &Z_Registration_Info_UScriptStruct_EditorConfigTestSimpleMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorConfigTestSimpleMap), 2243885653U) },
		{ FEditorConfigTestSimpleKeyComplexValueMap::StaticStruct, Z_Construct_UScriptStruct_FEditorConfigTestSimpleKeyComplexValueMap_Statics::NewStructOps, TEXT("EditorConfigTestSimpleKeyComplexValueMap"), &Z_Registration_Info_UScriptStruct_EditorConfigTestSimpleKeyComplexValueMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorConfigTestSimpleKeyComplexValueMap), 2589010160U) },
		{ FEditorConfigTestComplexMap::StaticStruct, Z_Construct_UScriptStruct_FEditorConfigTestComplexMap_Statics::NewStructOps, TEXT("EditorConfigTestComplexMap"), &Z_Registration_Info_UScriptStruct_EditorConfigTestComplexMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorConfigTestComplexMap), 700817794U) },
		{ FEditorConfigTestSimpleSet::StaticStruct, Z_Construct_UScriptStruct_FEditorConfigTestSimpleSet_Statics::NewStructOps, TEXT("EditorConfigTestSimpleSet"), &Z_Registration_Info_UScriptStruct_EditorConfigTestSimpleSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorConfigTestSimpleSet), 3822416259U) },
		{ FEditorConfigTestComplexSet::StaticStruct, Z_Construct_UScriptStruct_FEditorConfigTestComplexSet_Statics::NewStructOps, TEXT("EditorConfigTestComplexSet"), &Z_Registration_Info_UScriptStruct_EditorConfigTestComplexSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorConfigTestComplexSet), 38133972U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorConfig_Private_Tests_EditorConfigTests_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorConfigTestObject, UEditorConfigTestObject::StaticClass, TEXT("UEditorConfigTestObject"), &Z_Registration_Info_UClass_UEditorConfigTestObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorConfigTestObject), 1419539543U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorConfig_Private_Tests_EditorConfigTests_h_2505977697(TEXT("/Script/EditorConfig"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorConfig_Private_Tests_EditorConfigTests_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorConfig_Private_Tests_EditorConfigTests_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorConfig_Private_Tests_EditorConfigTests_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorConfig_Private_Tests_EditorConfigTests_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorConfig_Private_Tests_EditorConfigTests_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorConfig_Private_Tests_EditorConfigTests_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
