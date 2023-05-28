// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/CookedMetaData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCookedMetaData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UClassCookedMetaData();
	ENGINE_API UClass* Z_Construct_UClass_UClassCookedMetaData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEnumCookedMetaData();
	ENGINE_API UClass* Z_Construct_UClass_UEnumCookedMetaData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStructCookedMetaData();
	ENGINE_API UClass* Z_Construct_UClass_UStructCookedMetaData_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFieldCookedMetaDataStore();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FObjectCookedMetaDataStore();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStructCookedMetaDataStore();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObjectCookedMetaDataStore;
class UScriptStruct* FObjectCookedMetaDataStore::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectCookedMetaDataStore.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObjectCookedMetaDataStore.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectCookedMetaDataStore, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ObjectCookedMetaDataStore"));
	}
	return Z_Registration_Info_UScriptStruct_ObjectCookedMetaDataStore.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FObjectCookedMetaDataStore>()
{
	return FObjectCookedMetaDataStore::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectMetaData_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectMetaData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectMetaData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ObjectMetaData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Cooked meta-data for a UObject.\n */" },
		{ "ModuleRelativePath", "Public/CookedMetaData.h" },
		{ "ToolTip", "Cooked meta-data for a UObject." },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectCookedMetaDataStore>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::NewProp_ObjectMetaData_ValueProp = { "ObjectMetaData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::NewProp_ObjectMetaData_Key_KeyProp = { "ObjectMetaData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::NewProp_ObjectMetaData_MetaData[] = {
		{ "ModuleRelativePath", "Public/CookedMetaData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::NewProp_ObjectMetaData = { "ObjectMetaData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FObjectCookedMetaDataStore, ObjectMetaData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::NewProp_ObjectMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::NewProp_ObjectMetaData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::NewProp_ObjectMetaData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::NewProp_ObjectMetaData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::NewProp_ObjectMetaData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ObjectCookedMetaDataStore",
		sizeof(FObjectCookedMetaDataStore),
		alignof(FObjectCookedMetaDataStore),
		Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FObjectCookedMetaDataStore()
	{
		if (!Z_Registration_Info_UScriptStruct_ObjectCookedMetaDataStore.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObjectCookedMetaDataStore.InnerSingleton, Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ObjectCookedMetaDataStore.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FieldCookedMetaDataStore;
class UScriptStruct* FFieldCookedMetaDataStore::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FieldCookedMetaDataStore.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FieldCookedMetaDataStore.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFieldCookedMetaDataStore, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("FieldCookedMetaDataStore"));
	}
	return Z_Registration_Info_UScriptStruct_FieldCookedMetaDataStore.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FFieldCookedMetaDataStore>()
{
	return FFieldCookedMetaDataStore::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldMetaData_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FieldMetaData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldMetaData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FieldMetaData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Cooked meta-data for a FField.\n */" },
		{ "ModuleRelativePath", "Public/CookedMetaData.h" },
		{ "ToolTip", "Cooked meta-data for a FField." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFieldCookedMetaDataStore>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::NewProp_FieldMetaData_ValueProp = { "FieldMetaData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::NewProp_FieldMetaData_Key_KeyProp = { "FieldMetaData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::NewProp_FieldMetaData_MetaData[] = {
		{ "ModuleRelativePath", "Public/CookedMetaData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::NewProp_FieldMetaData = { "FieldMetaData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFieldCookedMetaDataStore, FieldMetaData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::NewProp_FieldMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::NewProp_FieldMetaData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::NewProp_FieldMetaData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::NewProp_FieldMetaData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::NewProp_FieldMetaData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"FieldCookedMetaDataStore",
		sizeof(FFieldCookedMetaDataStore),
		alignof(FFieldCookedMetaDataStore),
		Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFieldCookedMetaDataStore()
	{
		if (!Z_Registration_Info_UScriptStruct_FieldCookedMetaDataStore.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FieldCookedMetaDataStore.InnerSingleton, Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FieldCookedMetaDataStore.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StructCookedMetaDataStore;
class UScriptStruct* FStructCookedMetaDataStore::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StructCookedMetaDataStore.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StructCookedMetaDataStore.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructCookedMetaDataStore, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("StructCookedMetaDataStore"));
	}
	return Z_Registration_Info_UScriptStruct_StructCookedMetaDataStore.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStructCookedMetaDataStore>()
{
	return FStructCookedMetaDataStore::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectMetaData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectMetaData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertiesMetaData_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertiesMetaData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertiesMetaData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PropertiesMetaData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Cooked meta-data for a UStruct, including its nested FProperty data.\n */" },
		{ "ModuleRelativePath", "Public/CookedMetaData.h" },
		{ "ToolTip", "Cooked meta-data for a UStruct, including its nested FProperty data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructCookedMetaDataStore>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::NewProp_ObjectMetaData_MetaData[] = {
		{ "ModuleRelativePath", "Public/CookedMetaData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::NewProp_ObjectMetaData = { "ObjectMetaData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructCookedMetaDataStore, ObjectMetaData), Z_Construct_UScriptStruct_FObjectCookedMetaDataStore, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::NewProp_ObjectMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::NewProp_ObjectMetaData_MetaData)) }; // 3632229977
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::NewProp_PropertiesMetaData_ValueProp = { "PropertiesMetaData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FFieldCookedMetaDataStore, METADATA_PARAMS(nullptr, 0) }; // 3039146330
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::NewProp_PropertiesMetaData_Key_KeyProp = { "PropertiesMetaData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::NewProp_PropertiesMetaData_MetaData[] = {
		{ "ModuleRelativePath", "Public/CookedMetaData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::NewProp_PropertiesMetaData = { "PropertiesMetaData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStructCookedMetaDataStore, PropertiesMetaData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::NewProp_PropertiesMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::NewProp_PropertiesMetaData_MetaData)) }; // 3039146330
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::NewProp_ObjectMetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::NewProp_PropertiesMetaData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::NewProp_PropertiesMetaData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::NewProp_PropertiesMetaData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StructCookedMetaDataStore",
		sizeof(FStructCookedMetaDataStore),
		alignof(FStructCookedMetaDataStore),
		Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructCookedMetaDataStore()
	{
		if (!Z_Registration_Info_UScriptStruct_StructCookedMetaDataStore.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StructCookedMetaDataStore.InnerSingleton, Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StructCookedMetaDataStore.InnerSingleton;
	}
	void UEnumCookedMetaData::StaticRegisterNativesUEnumCookedMetaData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnumCookedMetaData);
	UClass* Z_Construct_UClass_UEnumCookedMetaData_NoRegister()
	{
		return UEnumCookedMetaData::StaticClass();
	}
	struct Z_Construct_UClass_UEnumCookedMetaData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnumMetaData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnumMetaData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnumCookedMetaData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnumCookedMetaData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Cooked meta-data for a UEnum.\n */" },
		{ "IncludePath", "CookedMetaData.h" },
		{ "ModuleRelativePath", "Public/CookedMetaData.h" },
		{ "ToolTip", "Cooked meta-data for a UEnum." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnumCookedMetaData_Statics::NewProp_EnumMetaData_MetaData[] = {
		{ "ModuleRelativePath", "Public/CookedMetaData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnumCookedMetaData_Statics::NewProp_EnumMetaData = { "EnumMetaData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnumCookedMetaData, EnumMetaData), Z_Construct_UScriptStruct_FObjectCookedMetaDataStore, METADATA_PARAMS(Z_Construct_UClass_UEnumCookedMetaData_Statics::NewProp_EnumMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnumCookedMetaData_Statics::NewProp_EnumMetaData_MetaData)) }; // 3632229977
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnumCookedMetaData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnumCookedMetaData_Statics::NewProp_EnumMetaData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnumCookedMetaData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnumCookedMetaData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnumCookedMetaData_Statics::ClassParams = {
		&UEnumCookedMetaData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnumCookedMetaData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnumCookedMetaData_Statics::PropPointers),
		0,
		0x001000B0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnumCookedMetaData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnumCookedMetaData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnumCookedMetaData()
	{
		if (!Z_Registration_Info_UClass_UEnumCookedMetaData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnumCookedMetaData.OuterSingleton, Z_Construct_UClass_UEnumCookedMetaData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnumCookedMetaData.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UEnumCookedMetaData>()
	{
		return UEnumCookedMetaData::StaticClass();
	}
	UEnumCookedMetaData::UEnumCookedMetaData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnumCookedMetaData);
	UEnumCookedMetaData::~UEnumCookedMetaData() {}
	void UStructCookedMetaData::StaticRegisterNativesUStructCookedMetaData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStructCookedMetaData);
	UClass* Z_Construct_UClass_UStructCookedMetaData_NoRegister()
	{
		return UStructCookedMetaData::StaticClass();
	}
	struct Z_Construct_UClass_UStructCookedMetaData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructMetaData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StructMetaData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStructCookedMetaData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStructCookedMetaData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Cooked meta-data for a UScriptStruct, including its nested FProperty data.\n */" },
		{ "IncludePath", "CookedMetaData.h" },
		{ "ModuleRelativePath", "Public/CookedMetaData.h" },
		{ "ToolTip", "Cooked meta-data for a UScriptStruct, including its nested FProperty data." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStructCookedMetaData_Statics::NewProp_StructMetaData_MetaData[] = {
		{ "ModuleRelativePath", "Public/CookedMetaData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStructCookedMetaData_Statics::NewProp_StructMetaData = { "StructMetaData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStructCookedMetaData, StructMetaData), Z_Construct_UScriptStruct_FStructCookedMetaDataStore, METADATA_PARAMS(Z_Construct_UClass_UStructCookedMetaData_Statics::NewProp_StructMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStructCookedMetaData_Statics::NewProp_StructMetaData_MetaData)) }; // 660604660
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStructCookedMetaData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStructCookedMetaData_Statics::NewProp_StructMetaData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStructCookedMetaData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStructCookedMetaData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStructCookedMetaData_Statics::ClassParams = {
		&UStructCookedMetaData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStructCookedMetaData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStructCookedMetaData_Statics::PropPointers),
		0,
		0x001000B0u,
		METADATA_PARAMS(Z_Construct_UClass_UStructCookedMetaData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStructCookedMetaData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStructCookedMetaData()
	{
		if (!Z_Registration_Info_UClass_UStructCookedMetaData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStructCookedMetaData.OuterSingleton, Z_Construct_UClass_UStructCookedMetaData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStructCookedMetaData.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UStructCookedMetaData>()
	{
		return UStructCookedMetaData::StaticClass();
	}
	UStructCookedMetaData::UStructCookedMetaData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStructCookedMetaData);
	UStructCookedMetaData::~UStructCookedMetaData() {}
	void UClassCookedMetaData::StaticRegisterNativesUClassCookedMetaData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClassCookedMetaData);
	UClass* Z_Construct_UClass_UClassCookedMetaData_NoRegister()
	{
		return UClassCookedMetaData::StaticClass();
	}
	struct Z_Construct_UClass_UClassCookedMetaData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassMetaData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClassMetaData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FunctionsMetaData_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionsMetaData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionsMetaData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FunctionsMetaData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClassCookedMetaData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassCookedMetaData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Cooked meta-data for a UClass, including its nested FProperty and UFunction data.\n */" },
		{ "IncludePath", "CookedMetaData.h" },
		{ "ModuleRelativePath", "Public/CookedMetaData.h" },
		{ "ToolTip", "Cooked meta-data for a UClass, including its nested FProperty and UFunction data." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassCookedMetaData_Statics::NewProp_ClassMetaData_MetaData[] = {
		{ "ModuleRelativePath", "Public/CookedMetaData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClassCookedMetaData_Statics::NewProp_ClassMetaData = { "ClassMetaData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClassCookedMetaData, ClassMetaData), Z_Construct_UScriptStruct_FStructCookedMetaDataStore, METADATA_PARAMS(Z_Construct_UClass_UClassCookedMetaData_Statics::NewProp_ClassMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClassCookedMetaData_Statics::NewProp_ClassMetaData_MetaData)) }; // 660604660
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClassCookedMetaData_Statics::NewProp_FunctionsMetaData_ValueProp = { "FunctionsMetaData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FStructCookedMetaDataStore, METADATA_PARAMS(nullptr, 0) }; // 660604660
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UClassCookedMetaData_Statics::NewProp_FunctionsMetaData_Key_KeyProp = { "FunctionsMetaData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassCookedMetaData_Statics::NewProp_FunctionsMetaData_MetaData[] = {
		{ "ModuleRelativePath", "Public/CookedMetaData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UClassCookedMetaData_Statics::NewProp_FunctionsMetaData = { "FunctionsMetaData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClassCookedMetaData, FunctionsMetaData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClassCookedMetaData_Statics::NewProp_FunctionsMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClassCookedMetaData_Statics::NewProp_FunctionsMetaData_MetaData)) }; // 660604660
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClassCookedMetaData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassCookedMetaData_Statics::NewProp_ClassMetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassCookedMetaData_Statics::NewProp_FunctionsMetaData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassCookedMetaData_Statics::NewProp_FunctionsMetaData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassCookedMetaData_Statics::NewProp_FunctionsMetaData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClassCookedMetaData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClassCookedMetaData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClassCookedMetaData_Statics::ClassParams = {
		&UClassCookedMetaData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClassCookedMetaData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UClassCookedMetaData_Statics::PropPointers),
		0,
		0x001000B0u,
		METADATA_PARAMS(Z_Construct_UClass_UClassCookedMetaData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClassCookedMetaData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClassCookedMetaData()
	{
		if (!Z_Registration_Info_UClass_UClassCookedMetaData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClassCookedMetaData.OuterSingleton, Z_Construct_UClass_UClassCookedMetaData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClassCookedMetaData.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UClassCookedMetaData>()
	{
		return UClassCookedMetaData::StaticClass();
	}
	UClassCookedMetaData::UClassCookedMetaData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClassCookedMetaData);
	UClassCookedMetaData::~UClassCookedMetaData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_Statics::ScriptStructInfo[] = {
		{ FObjectCookedMetaDataStore::StaticStruct, Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::NewStructOps, TEXT("ObjectCookedMetaDataStore"), &Z_Registration_Info_UScriptStruct_ObjectCookedMetaDataStore, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectCookedMetaDataStore), 3632229977U) },
		{ FFieldCookedMetaDataStore::StaticStruct, Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::NewStructOps, TEXT("FieldCookedMetaDataStore"), &Z_Registration_Info_UScriptStruct_FieldCookedMetaDataStore, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFieldCookedMetaDataStore), 3039146330U) },
		{ FStructCookedMetaDataStore::StaticStruct, Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::NewStructOps, TEXT("StructCookedMetaDataStore"), &Z_Registration_Info_UScriptStruct_StructCookedMetaDataStore, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStructCookedMetaDataStore), 660604660U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnumCookedMetaData, UEnumCookedMetaData::StaticClass, TEXT("UEnumCookedMetaData"), &Z_Registration_Info_UClass_UEnumCookedMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnumCookedMetaData), 514338208U) },
		{ Z_Construct_UClass_UStructCookedMetaData, UStructCookedMetaData::StaticClass, TEXT("UStructCookedMetaData"), &Z_Registration_Info_UClass_UStructCookedMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStructCookedMetaData), 489135605U) },
		{ Z_Construct_UClass_UClassCookedMetaData, UClassCookedMetaData::StaticClass, TEXT("UClassCookedMetaData"), &Z_Registration_Info_UClass_UClassCookedMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClassCookedMetaData), 3397457150U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_2181598899(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
