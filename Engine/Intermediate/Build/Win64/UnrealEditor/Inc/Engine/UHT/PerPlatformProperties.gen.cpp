// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/PerPlatformProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerPlatformProperties() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFreezablePerPlatformInt();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformBool();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFrameRate();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PerPlatformInt;
class UScriptStruct* FPerPlatformInt::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PerPlatformInt.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PerPlatformInt.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerPlatformInt, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PerPlatformInt"));
	}
	return Z_Registration_Info_UScriptStruct_PerPlatformInt.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPerPlatformInt>()
{
	return FPerPlatformInt::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPerPlatformInt_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Default;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FIntPropertyParams NewProp_PerPlatform_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PerPlatform_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerPlatform_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PerPlatform;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerPlatformInt_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** FPerPlatformInt - int32 property with per-platform overrides */" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
		{ "ToolTip", "FPerPlatformInt - int32 property with per-platform overrides" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerPlatformInt>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "PerPlatform" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPerPlatformInt, Default), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_Default_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_PerPlatform_ValueProp = { "PerPlatform", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_PerPlatform_Key_KeyProp = { "PerPlatform_Key", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_PerPlatform_MetaData[] = {
		{ "Category", "PerPlatform" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_PerPlatform = { "PerPlatform", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPerPlatformInt, PerPlatform), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_PerPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_PerPlatform_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerPlatformInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_Default,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_PerPlatform_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_PerPlatform_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_PerPlatform,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerPlatformInt_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PerPlatformInt",
		sizeof(FPerPlatformInt),
		alignof(FPerPlatformInt),
		Z_Construct_UScriptStruct_FPerPlatformInt_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformInt_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerPlatformInt_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformInt_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt()
	{
		if (!Z_Registration_Info_UScriptStruct_PerPlatformInt.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PerPlatformInt.InnerSingleton, Z_Construct_UScriptStruct_FPerPlatformInt_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PerPlatformInt.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FreezablePerPlatformInt;
class UScriptStruct* FFreezablePerPlatformInt::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FreezablePerPlatformInt.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FreezablePerPlatformInt.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFreezablePerPlatformInt, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("FreezablePerPlatformInt"));
	}
	return Z_Registration_Info_UScriptStruct_FreezablePerPlatformInt.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FFreezablePerPlatformInt>()
{
	return FFreezablePerPlatformInt::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFreezablePerPlatformInt_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFreezablePerPlatformInt_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFreezablePerPlatformInt_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFreezablePerPlatformInt>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFreezablePerPlatformInt_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"FreezablePerPlatformInt",
		sizeof(FFreezablePerPlatformInt),
		alignof(FFreezablePerPlatformInt),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFreezablePerPlatformInt_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFreezablePerPlatformInt_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFreezablePerPlatformInt()
	{
		if (!Z_Registration_Info_UScriptStruct_FreezablePerPlatformInt.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FreezablePerPlatformInt.InnerSingleton, Z_Construct_UScriptStruct_FFreezablePerPlatformInt_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FreezablePerPlatformInt.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PerPlatformFloat;
class UScriptStruct* FPerPlatformFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PerPlatformFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PerPlatformFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerPlatformFloat, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PerPlatformFloat"));
	}
	return Z_Registration_Info_UScriptStruct_PerPlatformFloat.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPerPlatformFloat>()
{
	return FPerPlatformFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPerPlatformFloat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Default;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PerPlatform_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PerPlatform_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerPlatform_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PerPlatform;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::Struct_MetaDataParams[] = {
		{ "CanFlattenStruct", "" },
		{ "Comment", "/** FPerPlatformFloat - float property with per-platform overrides */" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
		{ "ToolTip", "FPerPlatformFloat - float property with per-platform overrides" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerPlatformFloat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "PerPlatform" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPerPlatformFloat, Default), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_Default_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_PerPlatform_ValueProp = { "PerPlatform", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_PerPlatform_Key_KeyProp = { "PerPlatform_Key", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_PerPlatform_MetaData[] = {
		{ "Category", "PerPlatform" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_PerPlatform = { "PerPlatform", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPerPlatformFloat, PerPlatform), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_PerPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_PerPlatform_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_Default,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_PerPlatform_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_PerPlatform_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_PerPlatform,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PerPlatformFloat",
		sizeof(FPerPlatformFloat),
		alignof(FPerPlatformFloat),
		Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_PerPlatformFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PerPlatformFloat.InnerSingleton, Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PerPlatformFloat.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PerPlatformBool;
class UScriptStruct* FPerPlatformBool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PerPlatformBool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PerPlatformBool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerPlatformBool, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PerPlatformBool"));
	}
	return Z_Registration_Info_UScriptStruct_PerPlatformBool.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPerPlatformBool>()
{
	return FPerPlatformBool::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPerPlatformBool_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static void NewProp_Default_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Default;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PerPlatform_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PerPlatform_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerPlatform_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PerPlatform;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerPlatformBool_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** FPerPlatformBool - bool property with per-platform overrides */" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
		{ "ToolTip", "FPerPlatformBool - bool property with per-platform overrides" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerPlatformBool>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "PerPlatform" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_Default_SetBit(void* Obj)
	{
		((FPerPlatformBool*)Obj)->Default = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPerPlatformBool), &Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_Default_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_Default_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_PerPlatform_ValueProp = { "PerPlatform", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_PerPlatform_Key_KeyProp = { "PerPlatform_Key", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_PerPlatform_MetaData[] = {
		{ "Category", "PerPlatform" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_PerPlatform = { "PerPlatform", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPerPlatformBool, PerPlatform), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_PerPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_PerPlatform_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerPlatformBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_Default,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_PerPlatform_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_PerPlatform_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_PerPlatform,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerPlatformBool_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PerPlatformBool",
		sizeof(FPerPlatformBool),
		alignof(FPerPlatformBool),
		Z_Construct_UScriptStruct_FPerPlatformBool_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformBool_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerPlatformBool_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformBool_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformBool()
	{
		if (!Z_Registration_Info_UScriptStruct_PerPlatformBool.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PerPlatformBool.InnerSingleton, Z_Construct_UScriptStruct_FPerPlatformBool_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PerPlatformBool.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PerPlatformFrameRate;
class UScriptStruct* FPerPlatformFrameRate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PerPlatformFrameRate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PerPlatformFrameRate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerPlatformFrameRate, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PerPlatformFrameRate"));
	}
	return Z_Registration_Info_UScriptStruct_PerPlatformFrameRate.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPerPlatformFrameRate>()
{
	return FPerPlatformFrameRate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Default;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerPlatform_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PerPlatform_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerPlatform_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PerPlatform;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** FPerPlatformFrameRate - FFrameRate property with per-platform overrides */" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
		{ "ToolTip", "FPerPlatformFrameRate - FFrameRate property with per-platform overrides" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerPlatformFrameRate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "PerPlatform" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPerPlatformFrameRate, Default), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::NewProp_Default_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::NewProp_PerPlatform_ValueProp = { "PerPlatform", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::NewProp_PerPlatform_Key_KeyProp = { "PerPlatform_Key", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::NewProp_PerPlatform_MetaData[] = {
		{ "Category", "PerPlatform" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::NewProp_PerPlatform = { "PerPlatform", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPerPlatformFrameRate, PerPlatform), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::NewProp_PerPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::NewProp_PerPlatform_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::NewProp_Default,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::NewProp_PerPlatform_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::NewProp_PerPlatform_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::NewProp_PerPlatform,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PerPlatformFrameRate",
		sizeof(FPerPlatformFrameRate),
		alignof(FPerPlatformFrameRate),
		Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFrameRate()
	{
		if (!Z_Registration_Info_UScriptStruct_PerPlatformFrameRate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PerPlatformFrameRate.InnerSingleton, Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PerPlatformFrameRate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PerPlatformProperties_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PerPlatformProperties_h_Statics::ScriptStructInfo[] = {
		{ FPerPlatformInt::StaticStruct, Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewStructOps, TEXT("PerPlatformInt"), &Z_Registration_Info_UScriptStruct_PerPlatformInt, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerPlatformInt), 1463691826U) },
		{ FFreezablePerPlatformInt::StaticStruct, Z_Construct_UScriptStruct_FFreezablePerPlatformInt_Statics::NewStructOps, TEXT("FreezablePerPlatformInt"), &Z_Registration_Info_UScriptStruct_FreezablePerPlatformInt, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFreezablePerPlatformInt), 2376489370U) },
		{ FPerPlatformFloat::StaticStruct, Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewStructOps, TEXT("PerPlatformFloat"), &Z_Registration_Info_UScriptStruct_PerPlatformFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerPlatformFloat), 167720259U) },
		{ FPerPlatformBool::StaticStruct, Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewStructOps, TEXT("PerPlatformBool"), &Z_Registration_Info_UScriptStruct_PerPlatformBool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerPlatformBool), 3656766386U) },
		{ FPerPlatformFrameRate::StaticStruct, Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::NewStructOps, TEXT("PerPlatformFrameRate"), &Z_Registration_Info_UScriptStruct_PerPlatformFrameRate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerPlatformFrameRate), 2764605983U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PerPlatformProperties_h_3295813316(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PerPlatformProperties_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PerPlatformProperties_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
