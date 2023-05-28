// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetasoundEditorGraphMemberDefaults.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasoundEditorGraphMemberDefaults() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBool();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBool_NoRegister();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBoolArray();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBoolArray_NoRegister();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_NoRegister();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloatArray();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloatArray_NoRegister();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultInt();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultInt_NoRegister();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultIntArray();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultIntArray_NoRegister();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultLiteral();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObject();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObject_NoRegister();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObjectArray();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObjectArray_NoRegister();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultString();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultString_NoRegister();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultStringArray();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultStringArray_NoRegister();
	METASOUNDEDITOR_API UEnum* Z_Construct_UEnum_MetasoundEditor_EMetasoundMemberDefaultWidget();
	METASOUNDEDITOR_API UEnum* Z_Construct_UEnum_MetasoundEditor_EMetasoundMemberDefaultWidgetValueType();
	METASOUNDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultBoolRef();
	METASOUNDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultIntRef();
	METASOUNDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultObjectRef();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EOrientation();
	UPackage* Z_Construct_UPackage__Script_MetasoundEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundEditorGraphMemberDefaultBoolRef;
class UScriptStruct* FMetasoundEditorGraphMemberDefaultBoolRef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundEditorGraphMemberDefaultBoolRef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundEditorGraphMemberDefaultBoolRef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultBoolRef, (UObject*)Z_Construct_UPackage__Script_MetasoundEditor(), TEXT("MetasoundEditorGraphMemberDefaultBoolRef"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundEditorGraphMemberDefaultBoolRef.OuterSingleton;
}
template<> METASOUNDEDITOR_API UScriptStruct* StaticStruct<FMetasoundEditorGraphMemberDefaultBoolRef>()
{
	return FMetasoundEditorGraphMemberDefaultBoolRef::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultBoolRef_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultBoolRef_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Broken out to be able to customize and swap enum behavior for basic integer literal behavior\n" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
		{ "ToolTip", "Broken out to be able to customize and swap enum behavior for basic integer literal behavior" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultBoolRef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundEditorGraphMemberDefaultBoolRef>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultBoolRef_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "DefaultValue" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultBoolRef_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((FMetasoundEditorGraphMemberDefaultBoolRef*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultBoolRef_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMetasoundEditorGraphMemberDefaultBoolRef), &Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultBoolRef_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultBoolRef_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultBoolRef_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultBoolRef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultBoolRef_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultBoolRef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
		nullptr,
		&NewStructOps,
		"MetasoundEditorGraphMemberDefaultBoolRef",
		sizeof(FMetasoundEditorGraphMemberDefaultBoolRef),
		alignof(FMetasoundEditorGraphMemberDefaultBoolRef),
		Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultBoolRef_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultBoolRef_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultBoolRef_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultBoolRef_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultBoolRef()
	{
		if (!Z_Registration_Info_UScriptStruct_MetasoundEditorGraphMemberDefaultBoolRef.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundEditorGraphMemberDefaultBoolRef.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultBoolRef_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MetasoundEditorGraphMemberDefaultBoolRef.InnerSingleton;
	}
	void UMetasoundEditorGraphMemberDefaultBool::StaticRegisterNativesUMetasoundEditorGraphMemberDefaultBool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetasoundEditorGraphMemberDefaultBool);
	UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBool_NoRegister()
	{
		return UMetasoundEditorGraphMemberDefaultBool::StaticClass();
	}
	struct Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Default;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultLiteral,
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MetasoundEditorGraphMemberDefaults.h" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBool_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "DefaultValue" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBool_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorGraphMemberDefaultBool, Default), Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultBoolRef, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBool_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBool_Statics::NewProp_Default_MetaData)) }; // 3815263510
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBool_Statics::NewProp_Default,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetasoundEditorGraphMemberDefaultBool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBool_Statics::ClassParams = {
		&UMetasoundEditorGraphMemberDefaultBool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBool_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBool()
	{
		if (!Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultBool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultBool.OuterSingleton, Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultBool.OuterSingleton;
	}
	template<> METASOUNDEDITOR_API UClass* StaticClass<UMetasoundEditorGraphMemberDefaultBool>()
	{
		return UMetasoundEditorGraphMemberDefaultBool::StaticClass();
	}
	UMetasoundEditorGraphMemberDefaultBool::UMetasoundEditorGraphMemberDefaultBool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetasoundEditorGraphMemberDefaultBool);
	void UMetasoundEditorGraphMemberDefaultBoolArray::StaticRegisterNativesUMetasoundEditorGraphMemberDefaultBoolArray()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetasoundEditorGraphMemberDefaultBoolArray);
	UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBoolArray_NoRegister()
	{
		return UMetasoundEditorGraphMemberDefaultBoolArray::StaticClass();
	}
	struct Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBoolArray_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Default_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Default;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBoolArray_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultLiteral,
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBoolArray_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MetasoundEditorGraphMemberDefaults.h" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBoolArray_Statics::NewProp_Default_Inner = { "Default", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultBoolRef, METADATA_PARAMS(nullptr, 0) }; // 3815263510
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBoolArray_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "DefaultValue" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBoolArray_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorGraphMemberDefaultBoolArray, Default), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBoolArray_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBoolArray_Statics::NewProp_Default_MetaData)) }; // 3815263510
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBoolArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBoolArray_Statics::NewProp_Default_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBoolArray_Statics::NewProp_Default,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBoolArray_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetasoundEditorGraphMemberDefaultBoolArray>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBoolArray_Statics::ClassParams = {
		&UMetasoundEditorGraphMemberDefaultBoolArray::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBoolArray_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBoolArray_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBoolArray_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBoolArray_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBoolArray()
	{
		if (!Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultBoolArray.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultBoolArray.OuterSingleton, Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBoolArray_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultBoolArray.OuterSingleton;
	}
	template<> METASOUNDEDITOR_API UClass* StaticClass<UMetasoundEditorGraphMemberDefaultBoolArray>()
	{
		return UMetasoundEditorGraphMemberDefaultBoolArray::StaticClass();
	}
	UMetasoundEditorGraphMemberDefaultBoolArray::UMetasoundEditorGraphMemberDefaultBoolArray(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetasoundEditorGraphMemberDefaultBoolArray);
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundEditorGraphMemberDefaultIntRef;
class UScriptStruct* FMetasoundEditorGraphMemberDefaultIntRef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundEditorGraphMemberDefaultIntRef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundEditorGraphMemberDefaultIntRef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultIntRef, (UObject*)Z_Construct_UPackage__Script_MetasoundEditor(), TEXT("MetasoundEditorGraphMemberDefaultIntRef"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundEditorGraphMemberDefaultIntRef.OuterSingleton;
}
template<> METASOUNDEDITOR_API UScriptStruct* StaticStruct<FMetasoundEditorGraphMemberDefaultIntRef>()
{
	return FMetasoundEditorGraphMemberDefaultIntRef::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultIntRef_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultIntRef_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Broken out to be able to customize and swap enum behavior for basic integer literal behavior\n" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
		{ "ToolTip", "Broken out to be able to customize and swap enum behavior for basic integer literal behavior" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultIntRef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundEditorGraphMemberDefaultIntRef>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultIntRef_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "DefaultValue" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultIntRef_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMetasoundEditorGraphMemberDefaultIntRef, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultIntRef_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultIntRef_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultIntRef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultIntRef_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultIntRef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
		nullptr,
		&NewStructOps,
		"MetasoundEditorGraphMemberDefaultIntRef",
		sizeof(FMetasoundEditorGraphMemberDefaultIntRef),
		alignof(FMetasoundEditorGraphMemberDefaultIntRef),
		Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultIntRef_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultIntRef_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultIntRef_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultIntRef_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultIntRef()
	{
		if (!Z_Registration_Info_UScriptStruct_MetasoundEditorGraphMemberDefaultIntRef.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundEditorGraphMemberDefaultIntRef.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultIntRef_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MetasoundEditorGraphMemberDefaultIntRef.InnerSingleton;
	}
	void UMetasoundEditorGraphMemberDefaultInt::StaticRegisterNativesUMetasoundEditorGraphMemberDefaultInt()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetasoundEditorGraphMemberDefaultInt);
	UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultInt_NoRegister()
	{
		return UMetasoundEditorGraphMemberDefaultInt::StaticClass();
	}
	struct Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultInt_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Default;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultInt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultLiteral,
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultInt_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MetasoundEditorGraphMemberDefaults.h" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultInt_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "DefaultValue" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultInt_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorGraphMemberDefaultInt, Default), Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultIntRef, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultInt_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultInt_Statics::NewProp_Default_MetaData)) }; // 3954809378
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultInt_Statics::NewProp_Default,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultInt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetasoundEditorGraphMemberDefaultInt>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultInt_Statics::ClassParams = {
		&UMetasoundEditorGraphMemberDefaultInt::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultInt_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultInt_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultInt_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultInt_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultInt()
	{
		if (!Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultInt.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultInt.OuterSingleton, Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultInt_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultInt.OuterSingleton;
	}
	template<> METASOUNDEDITOR_API UClass* StaticClass<UMetasoundEditorGraphMemberDefaultInt>()
	{
		return UMetasoundEditorGraphMemberDefaultInt::StaticClass();
	}
	UMetasoundEditorGraphMemberDefaultInt::UMetasoundEditorGraphMemberDefaultInt(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetasoundEditorGraphMemberDefaultInt);
	void UMetasoundEditorGraphMemberDefaultIntArray::StaticRegisterNativesUMetasoundEditorGraphMemberDefaultIntArray()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetasoundEditorGraphMemberDefaultIntArray);
	UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultIntArray_NoRegister()
	{
		return UMetasoundEditorGraphMemberDefaultIntArray::StaticClass();
	}
	struct Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultIntArray_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Default_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Default;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultIntArray_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultLiteral,
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultIntArray_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MetasoundEditorGraphMemberDefaults.h" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultIntArray_Statics::NewProp_Default_Inner = { "Default", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultIntRef, METADATA_PARAMS(nullptr, 0) }; // 3954809378
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultIntArray_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "DefaultValue" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultIntArray_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorGraphMemberDefaultIntArray, Default), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultIntArray_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultIntArray_Statics::NewProp_Default_MetaData)) }; // 3954809378
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultIntArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultIntArray_Statics::NewProp_Default_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultIntArray_Statics::NewProp_Default,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultIntArray_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetasoundEditorGraphMemberDefaultIntArray>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultIntArray_Statics::ClassParams = {
		&UMetasoundEditorGraphMemberDefaultIntArray::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultIntArray_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultIntArray_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultIntArray_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultIntArray_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultIntArray()
	{
		if (!Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultIntArray.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultIntArray.OuterSingleton, Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultIntArray_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultIntArray.OuterSingleton;
	}
	template<> METASOUNDEDITOR_API UClass* StaticClass<UMetasoundEditorGraphMemberDefaultIntArray>()
	{
		return UMetasoundEditorGraphMemberDefaultIntArray::StaticClass();
	}
	UMetasoundEditorGraphMemberDefaultIntArray::UMetasoundEditorGraphMemberDefaultIntArray(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetasoundEditorGraphMemberDefaultIntArray);
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMetasoundMemberDefaultWidgetValueType;
	static UEnum* EMetasoundMemberDefaultWidgetValueType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMetasoundMemberDefaultWidgetValueType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMetasoundMemberDefaultWidgetValueType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MetasoundEditor_EMetasoundMemberDefaultWidgetValueType, (UObject*)Z_Construct_UPackage__Script_MetasoundEditor(), TEXT("EMetasoundMemberDefaultWidgetValueType"));
		}
		return Z_Registration_Info_UEnum_EMetasoundMemberDefaultWidgetValueType.OuterSingleton;
	}
	template<> METASOUNDEDITOR_API UEnum* StaticEnum<EMetasoundMemberDefaultWidgetValueType>()
	{
		return EMetasoundMemberDefaultWidgetValueType_StaticEnum();
	}
	struct Z_Construct_UEnum_MetasoundEditor_EMetasoundMemberDefaultWidgetValueType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MetasoundEditor_EMetasoundMemberDefaultWidgetValueType_Statics::Enumerators[] = {
		{ "EMetasoundMemberDefaultWidgetValueType::Linear", (int64)EMetasoundMemberDefaultWidgetValueType::Linear },
		{ "EMetasoundMemberDefaultWidgetValueType::Frequency", (int64)EMetasoundMemberDefaultWidgetValueType::Frequency },
		{ "EMetasoundMemberDefaultWidgetValueType::Volume", (int64)EMetasoundMemberDefaultWidgetValueType::Volume },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MetasoundEditor_EMetasoundMemberDefaultWidgetValueType_Statics::Enum_MetaDataParams[] = {
		{ "Frequency.DisplayName", "Frequency (Log)" },
		{ "Frequency.Name", "EMetasoundMemberDefaultWidgetValueType::Frequency" },
		{ "Linear.Name", "EMetasoundMemberDefaultWidgetValueType::Linear" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
		{ "Volume.Name", "EMetasoundMemberDefaultWidgetValueType::Volume" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MetasoundEditor_EMetasoundMemberDefaultWidgetValueType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MetasoundEditor,
		nullptr,
		"EMetasoundMemberDefaultWidgetValueType",
		"EMetasoundMemberDefaultWidgetValueType",
		Z_Construct_UEnum_MetasoundEditor_EMetasoundMemberDefaultWidgetValueType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MetasoundEditor_EMetasoundMemberDefaultWidgetValueType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MetasoundEditor_EMetasoundMemberDefaultWidgetValueType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MetasoundEditor_EMetasoundMemberDefaultWidgetValueType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MetasoundEditor_EMetasoundMemberDefaultWidgetValueType()
	{
		if (!Z_Registration_Info_UEnum_EMetasoundMemberDefaultWidgetValueType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMetasoundMemberDefaultWidgetValueType.InnerSingleton, Z_Construct_UEnum_MetasoundEditor_EMetasoundMemberDefaultWidgetValueType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMetasoundMemberDefaultWidgetValueType.InnerSingleton;
	}
	void UMetasoundEditorGraphMemberDefaultFloat::StaticRegisterNativesUMetasoundEditorGraphMemberDefaultFloat()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetasoundEditorGraphMemberDefaultFloat);
	UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_NoRegister()
	{
		return UMetasoundEditorGraphMemberDefaultFloat::StaticClass();
	}
	struct Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Default;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClampDefault_MetaData[];
#endif
		static void NewProp_ClampDefault_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ClampDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WidgetType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WidgetType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetOrientation_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_WidgetOrientation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WidgetValueType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetValueType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WidgetValueType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeWidgetUseLinearOutput_MetaData[];
#endif
		static void NewProp_VolumeWidgetUseLinearOutput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_VolumeWidgetUseLinearOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeWidgetDecibelRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VolumeWidgetDecibelRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultLiteral,
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MetasoundEditorGraphMemberDefaults.h" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "DefaultValue" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorGraphMemberDefaultFloat, Default), METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_Default_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_ClampDefault_MetaData[] = {
		{ "Category", "DefaultValue" },
		{ "EditCondition", "WidgetType == EMetasoundMemberDefaultWidget::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
	};
#endif
	void Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_ClampDefault_SetBit(void* Obj)
	{
		((UMetasoundEditorGraphMemberDefaultFloat*)Obj)->ClampDefault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_ClampDefault = { "ClampDefault", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMetasoundEditorGraphMemberDefaultFloat), &Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_ClampDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_ClampDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_ClampDefault_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_Range_MetaData[] = {
		{ "Category", "DefaultValue" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorGraphMemberDefaultFloat, Range), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_Range_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_WidgetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_WidgetType_MetaData[] = {
		{ "Category", "Widget" },
		{ "DisplayName", "Widget" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_WidgetType = { "WidgetType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorGraphMemberDefaultFloat, WidgetType), Z_Construct_UEnum_MetasoundEditor_EMetasoundMemberDefaultWidget, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_WidgetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_WidgetType_MetaData)) }; // 3347092090
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_WidgetOrientation_MetaData[] = {
		{ "Category", "Widget" },
		{ "DisplayName", "Orientation" },
		{ "EditCondition", "WidgetType == EMetasoundMemberDefaultWidget::Slider" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_WidgetOrientation = { "WidgetOrientation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorGraphMemberDefaultFloat, WidgetOrientation), Z_Construct_UEnum_SlateCore_EOrientation, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_WidgetOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_WidgetOrientation_MetaData)) }; // 3412645699
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_WidgetValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_WidgetValueType_MetaData[] = {
		{ "Category", "Widget" },
		{ "DisplayName", "Value Type" },
		{ "EditCondition", "WidgetType != EMetasoundMemberDefaultWidget::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_WidgetValueType = { "WidgetValueType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorGraphMemberDefaultFloat, WidgetValueType), Z_Construct_UEnum_MetasoundEditor_EMetasoundMemberDefaultWidgetValueType, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_WidgetValueType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_WidgetValueType_MetaData)) }; // 2330980541
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_VolumeWidgetUseLinearOutput_MetaData[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** If true, output linear value. Otherwise, output dB value. The volume widget itself will always display the value in dB. The Default Value and Range are linear. */" },
		{ "DisplayName", "Output Linear" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
		{ "ToolTip", "If true, output linear value. Otherwise, output dB value. The volume widget itself will always display the value in dB. The Default Value and Range are linear." },
	};
#endif
	void Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_VolumeWidgetUseLinearOutput_SetBit(void* Obj)
	{
		((UMetasoundEditorGraphMemberDefaultFloat*)Obj)->VolumeWidgetUseLinearOutput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_VolumeWidgetUseLinearOutput = { "VolumeWidgetUseLinearOutput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMetasoundEditorGraphMemberDefaultFloat), &Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_VolumeWidgetUseLinearOutput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_VolumeWidgetUseLinearOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_VolumeWidgetUseLinearOutput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_VolumeWidgetDecibelRange_MetaData[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Range in decibels. This will be converted to the linear range in the Default Value category. */" },
		{ "DisplayName", "Range in dB" },
		{ "EditCondition", "VolumeWidgetUseLinearOutput" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
		{ "ToolTip", "Range in decibels. This will be converted to the linear range in the Default Value category." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_VolumeWidgetDecibelRange = { "VolumeWidgetDecibelRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorGraphMemberDefaultFloat, VolumeWidgetDecibelRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_VolumeWidgetDecibelRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_VolumeWidgetDecibelRange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_Default,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_ClampDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_Range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_WidgetType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_WidgetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_WidgetOrientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_WidgetValueType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_WidgetValueType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_VolumeWidgetUseLinearOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::NewProp_VolumeWidgetDecibelRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetasoundEditorGraphMemberDefaultFloat>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::ClassParams = {
		&UMetasoundEditorGraphMemberDefaultFloat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat()
	{
		if (!Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultFloat.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultFloat.OuterSingleton, Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultFloat.OuterSingleton;
	}
	template<> METASOUNDEDITOR_API UClass* StaticClass<UMetasoundEditorGraphMemberDefaultFloat>()
	{
		return UMetasoundEditorGraphMemberDefaultFloat::StaticClass();
	}
	UMetasoundEditorGraphMemberDefaultFloat::UMetasoundEditorGraphMemberDefaultFloat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetasoundEditorGraphMemberDefaultFloat);
	void UMetasoundEditorGraphMemberDefaultFloatArray::StaticRegisterNativesUMetasoundEditorGraphMemberDefaultFloatArray()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetasoundEditorGraphMemberDefaultFloatArray);
	UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloatArray_NoRegister()
	{
		return UMetasoundEditorGraphMemberDefaultFloatArray::StaticClass();
	}
	struct Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloatArray_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Default_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Default;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloatArray_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultLiteral,
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloatArray_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MetasoundEditorGraphMemberDefaults.h" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloatArray_Statics::NewProp_Default_Inner = { "Default", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloatArray_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "DefaultValue" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloatArray_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorGraphMemberDefaultFloatArray, Default), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloatArray_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloatArray_Statics::NewProp_Default_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloatArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloatArray_Statics::NewProp_Default_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloatArray_Statics::NewProp_Default,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloatArray_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetasoundEditorGraphMemberDefaultFloatArray>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloatArray_Statics::ClassParams = {
		&UMetasoundEditorGraphMemberDefaultFloatArray::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloatArray_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloatArray_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloatArray_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloatArray_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloatArray()
	{
		if (!Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultFloatArray.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultFloatArray.OuterSingleton, Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloatArray_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultFloatArray.OuterSingleton;
	}
	template<> METASOUNDEDITOR_API UClass* StaticClass<UMetasoundEditorGraphMemberDefaultFloatArray>()
	{
		return UMetasoundEditorGraphMemberDefaultFloatArray::StaticClass();
	}
	UMetasoundEditorGraphMemberDefaultFloatArray::UMetasoundEditorGraphMemberDefaultFloatArray(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetasoundEditorGraphMemberDefaultFloatArray);
	void UMetasoundEditorGraphMemberDefaultString::StaticRegisterNativesUMetasoundEditorGraphMemberDefaultString()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetasoundEditorGraphMemberDefaultString);
	UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultString_NoRegister()
	{
		return UMetasoundEditorGraphMemberDefaultString::StaticClass();
	}
	struct Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultString_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Default;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultString_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultLiteral,
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultString_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MetasoundEditorGraphMemberDefaults.h" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultString_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "DefaultValue" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultString_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorGraphMemberDefaultString, Default), METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultString_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultString_Statics::NewProp_Default_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultString_Statics::NewProp_Default,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultString_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetasoundEditorGraphMemberDefaultString>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultString_Statics::ClassParams = {
		&UMetasoundEditorGraphMemberDefaultString::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultString_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultString_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultString_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultString_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultString()
	{
		if (!Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultString.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultString.OuterSingleton, Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultString_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultString.OuterSingleton;
	}
	template<> METASOUNDEDITOR_API UClass* StaticClass<UMetasoundEditorGraphMemberDefaultString>()
	{
		return UMetasoundEditorGraphMemberDefaultString::StaticClass();
	}
	UMetasoundEditorGraphMemberDefaultString::UMetasoundEditorGraphMemberDefaultString(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetasoundEditorGraphMemberDefaultString);
	void UMetasoundEditorGraphMemberDefaultStringArray::StaticRegisterNativesUMetasoundEditorGraphMemberDefaultStringArray()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetasoundEditorGraphMemberDefaultStringArray);
	UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultStringArray_NoRegister()
	{
		return UMetasoundEditorGraphMemberDefaultStringArray::StaticClass();
	}
	struct Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultStringArray_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Default_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Default;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultStringArray_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultLiteral,
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultStringArray_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MetasoundEditorGraphMemberDefaults.h" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultStringArray_Statics::NewProp_Default_Inner = { "Default", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultStringArray_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "DefaultValue" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultStringArray_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorGraphMemberDefaultStringArray, Default), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultStringArray_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultStringArray_Statics::NewProp_Default_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultStringArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultStringArray_Statics::NewProp_Default_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultStringArray_Statics::NewProp_Default,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultStringArray_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetasoundEditorGraphMemberDefaultStringArray>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultStringArray_Statics::ClassParams = {
		&UMetasoundEditorGraphMemberDefaultStringArray::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultStringArray_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultStringArray_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultStringArray_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultStringArray_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultStringArray()
	{
		if (!Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultStringArray.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultStringArray.OuterSingleton, Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultStringArray_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultStringArray.OuterSingleton;
	}
	template<> METASOUNDEDITOR_API UClass* StaticClass<UMetasoundEditorGraphMemberDefaultStringArray>()
	{
		return UMetasoundEditorGraphMemberDefaultStringArray::StaticClass();
	}
	UMetasoundEditorGraphMemberDefaultStringArray::UMetasoundEditorGraphMemberDefaultStringArray(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetasoundEditorGraphMemberDefaultStringArray);
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundEditorGraphMemberDefaultObjectRef;
class UScriptStruct* FMetasoundEditorGraphMemberDefaultObjectRef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundEditorGraphMemberDefaultObjectRef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundEditorGraphMemberDefaultObjectRef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultObjectRef, (UObject*)Z_Construct_UPackage__Script_MetasoundEditor(), TEXT("MetasoundEditorGraphMemberDefaultObjectRef"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundEditorGraphMemberDefaultObjectRef.OuterSingleton;
}
template<> METASOUNDEDITOR_API UScriptStruct* StaticStruct<FMetasoundEditorGraphMemberDefaultObjectRef>()
{
	return FMetasoundEditorGraphMemberDefaultObjectRef::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultObjectRef_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultObjectRef_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Broken out to be able to customize and swap AllowedClass based on provided object proxy\n" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
		{ "ToolTip", "Broken out to be able to customize and swap AllowedClass based on provided object proxy" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultObjectRef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundEditorGraphMemberDefaultObjectRef>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultObjectRef_Statics::NewProp_Object_MetaData[] = {
		{ "Category", "DefaultValue" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultObjectRef_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMetasoundEditorGraphMemberDefaultObjectRef, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultObjectRef_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultObjectRef_Statics::NewProp_Object_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultObjectRef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultObjectRef_Statics::NewProp_Object,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultObjectRef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
		nullptr,
		&NewStructOps,
		"MetasoundEditorGraphMemberDefaultObjectRef",
		sizeof(FMetasoundEditorGraphMemberDefaultObjectRef),
		alignof(FMetasoundEditorGraphMemberDefaultObjectRef),
		Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultObjectRef_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultObjectRef_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultObjectRef_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultObjectRef_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultObjectRef()
	{
		if (!Z_Registration_Info_UScriptStruct_MetasoundEditorGraphMemberDefaultObjectRef.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundEditorGraphMemberDefaultObjectRef.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultObjectRef_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MetasoundEditorGraphMemberDefaultObjectRef.InnerSingleton;
	}
	void UMetasoundEditorGraphMemberDefaultObject::StaticRegisterNativesUMetasoundEditorGraphMemberDefaultObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetasoundEditorGraphMemberDefaultObject);
	UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObject_NoRegister()
	{
		return UMetasoundEditorGraphMemberDefaultObject::StaticClass();
	}
	struct Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Default;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultLiteral,
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MetasoundEditorGraphMemberDefaults.h" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObject_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "DefaultValue" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObject_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorGraphMemberDefaultObject, Default), Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultObjectRef, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObject_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObject_Statics::NewProp_Default_MetaData)) }; // 3408310068
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObject_Statics::NewProp_Default,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetasoundEditorGraphMemberDefaultObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObject_Statics::ClassParams = {
		&UMetasoundEditorGraphMemberDefaultObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObject_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObject()
	{
		if (!Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultObject.OuterSingleton, Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultObject.OuterSingleton;
	}
	template<> METASOUNDEDITOR_API UClass* StaticClass<UMetasoundEditorGraphMemberDefaultObject>()
	{
		return UMetasoundEditorGraphMemberDefaultObject::StaticClass();
	}
	UMetasoundEditorGraphMemberDefaultObject::UMetasoundEditorGraphMemberDefaultObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetasoundEditorGraphMemberDefaultObject);
	void UMetasoundEditorGraphMemberDefaultObjectArray::StaticRegisterNativesUMetasoundEditorGraphMemberDefaultObjectArray()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetasoundEditorGraphMemberDefaultObjectArray);
	UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObjectArray_NoRegister()
	{
		return UMetasoundEditorGraphMemberDefaultObjectArray::StaticClass();
	}
	struct Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObjectArray_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Default_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Default;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObjectArray_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultLiteral,
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObjectArray_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MetasoundEditorGraphMemberDefaults.h" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObjectArray_Statics::NewProp_Default_Inner = { "Default", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultObjectRef, METADATA_PARAMS(nullptr, 0) }; // 3408310068
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObjectArray_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "DefaultValue" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphMemberDefaults.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObjectArray_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorGraphMemberDefaultObjectArray, Default), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObjectArray_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObjectArray_Statics::NewProp_Default_MetaData)) }; // 3408310068
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObjectArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObjectArray_Statics::NewProp_Default_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObjectArray_Statics::NewProp_Default,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObjectArray_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetasoundEditorGraphMemberDefaultObjectArray>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObjectArray_Statics::ClassParams = {
		&UMetasoundEditorGraphMemberDefaultObjectArray::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObjectArray_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObjectArray_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObjectArray_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObjectArray_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObjectArray()
	{
		if (!Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultObjectArray.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultObjectArray.OuterSingleton, Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObjectArray_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultObjectArray.OuterSingleton;
	}
	template<> METASOUNDEDITOR_API UClass* StaticClass<UMetasoundEditorGraphMemberDefaultObjectArray>()
	{
		return UMetasoundEditorGraphMemberDefaultObjectArray::StaticClass();
	}
	UMetasoundEditorGraphMemberDefaultObjectArray::UMetasoundEditorGraphMemberDefaultObjectArray(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetasoundEditorGraphMemberDefaultObjectArray);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphMemberDefaults_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphMemberDefaults_h_Statics::EnumInfo[] = {
		{ EMetasoundMemberDefaultWidgetValueType_StaticEnum, TEXT("EMetasoundMemberDefaultWidgetValueType"), &Z_Registration_Info_UEnum_EMetasoundMemberDefaultWidgetValueType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2330980541U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphMemberDefaults_h_Statics::ScriptStructInfo[] = {
		{ FMetasoundEditorGraphMemberDefaultBoolRef::StaticStruct, Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultBoolRef_Statics::NewStructOps, TEXT("MetasoundEditorGraphMemberDefaultBoolRef"), &Z_Registration_Info_UScriptStruct_MetasoundEditorGraphMemberDefaultBoolRef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundEditorGraphMemberDefaultBoolRef), 3815263510U) },
		{ FMetasoundEditorGraphMemberDefaultIntRef::StaticStruct, Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultIntRef_Statics::NewStructOps, TEXT("MetasoundEditorGraphMemberDefaultIntRef"), &Z_Registration_Info_UScriptStruct_MetasoundEditorGraphMemberDefaultIntRef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundEditorGraphMemberDefaultIntRef), 3954809378U) },
		{ FMetasoundEditorGraphMemberDefaultObjectRef::StaticStruct, Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberDefaultObjectRef_Statics::NewStructOps, TEXT("MetasoundEditorGraphMemberDefaultObjectRef"), &Z_Registration_Info_UScriptStruct_MetasoundEditorGraphMemberDefaultObjectRef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundEditorGraphMemberDefaultObjectRef), 3408310068U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphMemberDefaults_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBool, UMetasoundEditorGraphMemberDefaultBool::StaticClass, TEXT("UMetasoundEditorGraphMemberDefaultBool"), &Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultBool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetasoundEditorGraphMemberDefaultBool), 3815137683U) },
		{ Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultBoolArray, UMetasoundEditorGraphMemberDefaultBoolArray::StaticClass, TEXT("UMetasoundEditorGraphMemberDefaultBoolArray"), &Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultBoolArray, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetasoundEditorGraphMemberDefaultBoolArray), 4285519894U) },
		{ Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultInt, UMetasoundEditorGraphMemberDefaultInt::StaticClass, TEXT("UMetasoundEditorGraphMemberDefaultInt"), &Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultInt, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetasoundEditorGraphMemberDefaultInt), 720209242U) },
		{ Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultIntArray, UMetasoundEditorGraphMemberDefaultIntArray::StaticClass, TEXT("UMetasoundEditorGraphMemberDefaultIntArray"), &Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultIntArray, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetasoundEditorGraphMemberDefaultIntArray), 1174441685U) },
		{ Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloat, UMetasoundEditorGraphMemberDefaultFloat::StaticClass, TEXT("UMetasoundEditorGraphMemberDefaultFloat"), &Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultFloat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetasoundEditorGraphMemberDefaultFloat), 2660066568U) },
		{ Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultFloatArray, UMetasoundEditorGraphMemberDefaultFloatArray::StaticClass, TEXT("UMetasoundEditorGraphMemberDefaultFloatArray"), &Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultFloatArray, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetasoundEditorGraphMemberDefaultFloatArray), 2692284828U) },
		{ Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultString, UMetasoundEditorGraphMemberDefaultString::StaticClass, TEXT("UMetasoundEditorGraphMemberDefaultString"), &Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultString, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetasoundEditorGraphMemberDefaultString), 1336583413U) },
		{ Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultStringArray, UMetasoundEditorGraphMemberDefaultStringArray::StaticClass, TEXT("UMetasoundEditorGraphMemberDefaultStringArray"), &Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultStringArray, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetasoundEditorGraphMemberDefaultStringArray), 3581181138U) },
		{ Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObject, UMetasoundEditorGraphMemberDefaultObject::StaticClass, TEXT("UMetasoundEditorGraphMemberDefaultObject"), &Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetasoundEditorGraphMemberDefaultObject), 1041605750U) },
		{ Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultObjectArray, UMetasoundEditorGraphMemberDefaultObjectArray::StaticClass, TEXT("UMetasoundEditorGraphMemberDefaultObjectArray"), &Z_Registration_Info_UClass_UMetasoundEditorGraphMemberDefaultObjectArray, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetasoundEditorGraphMemberDefaultObjectArray), 174077576U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphMemberDefaults_h_1031861569(TEXT("/Script/MetasoundEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphMemberDefaults_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphMemberDefaults_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphMemberDefaults_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphMemberDefaults_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphMemberDefaults_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphMemberDefaults_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
