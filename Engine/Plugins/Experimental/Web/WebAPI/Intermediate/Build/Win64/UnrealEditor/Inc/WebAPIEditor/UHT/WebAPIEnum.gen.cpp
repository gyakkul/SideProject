// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dom/WebAPIEnum.h"
#include "Dom/WebAPISchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebAPIEnum() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WebAPIEditor();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIEnum();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIEnum_NoRegister();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIEnumValue();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIEnumValue_NoRegister();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIModelBase();
	WEBAPIEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWebAPINameVariant();
	WEBAPIEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWebAPITypeNameVariant();
// End Cross Module References
	void UWebAPIEnumValue::StaticRegisterNativesUWebAPIEnumValue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPIEnumValue);
	UClass* Z_Construct_UClass_UWebAPIEnumValue_NoRegister()
	{
		return UWebAPIEnumValue::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPIEnumValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPIEnumValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWebAPIModelBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIEnumValue_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Describes a single value within a enum. */" },
		{ "IncludePath", "Dom/WebAPIEnum.h" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIEnum.h" },
		{ "ToolTip", "Describes a single value within a enum." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIEnumValue_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Name of the EnumValue. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIEnum.h" },
		{ "ToolTip", "Name of the EnumValue." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWebAPIEnumValue_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIEnumValue, Name), Z_Construct_UScriptStruct_FWebAPINameVariant, METADATA_PARAMS(Z_Construct_UClass_UWebAPIEnumValue_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIEnumValue_Statics::NewProp_Name_MetaData)) }; // 61858727
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebAPIEnumValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIEnumValue_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPIEnumValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPIEnumValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPIEnumValue_Statics::ClassParams = {
		&UWebAPIEnumValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWebAPIEnumValue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIEnumValue_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPIEnumValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIEnumValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPIEnumValue()
	{
		if (!Z_Registration_Info_UClass_UWebAPIEnumValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPIEnumValue.OuterSingleton, Z_Construct_UClass_UWebAPIEnumValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPIEnumValue.OuterSingleton;
	}
	template<> WEBAPIEDITOR_API UClass* StaticClass<UWebAPIEnumValue>()
	{
		return UWebAPIEnumValue::StaticClass();
	}
	UWebAPIEnumValue::UWebAPIEnumValue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPIEnumValue);
	UWebAPIEnumValue::~UWebAPIEnumValue() {}
	void UWebAPIEnum::StaticRegisterNativesUWebAPIEnum()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPIEnum);
	UClass* Z_Construct_UClass_UWebAPIEnum_NoRegister()
	{
		return UWebAPIEnum::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPIEnum_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerate_MetaData[];
#endif
		static void NewProp_bGenerate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedCodeText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GeneratedCodeText;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPIEnum_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWebAPIModelBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIEnum_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Describes a (usually) API-specific class representing an enum. */" },
		{ "IncludePath", "Dom/WebAPIEnum.h" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIEnum.h" },
		{ "ToolTip", "Describes a (usually) API-specific class representing an enum." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Name of the Enum. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIEnum.h" },
		{ "ToolTip", "Name of the Enum." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIEnum, Name), Z_Construct_UScriptStruct_FWebAPITypeNameVariant, METADATA_PARAMS(Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_Name_MetaData)) }; // 4040585277
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_bGenerate_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Will be set based on dependent operations. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIEnum.h" },
		{ "ToolTip", "Will be set based on dependent operations." },
	};
#endif
	void Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_bGenerate_SetBit(void* Obj)
	{
		((UWebAPIEnum*)Obj)->bGenerate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_bGenerate = { "bGenerate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWebAPIEnum), &Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_bGenerate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_bGenerate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_bGenerate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** The enum base type, always uint8. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIEnum.h" },
		{ "ToolTip", "The enum base type, always uint8." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIEnum, Type), METADATA_PARAMS(Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Current or Default Value of the Enum. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIEnum.h" },
		{ "ToolTip", "Current or Default Value of the Enum." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIEnum, DefaultValue), METADATA_PARAMS(Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWebAPIEnumValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_Values_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Values within the Enum. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIEnum.h" },
		{ "ToolTip", "Values within the Enum." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIEnum, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_Values_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_GeneratedCodeText_MetaData[] = {
		{ "Comment", "/** The last generated code as text for debugging. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIEnum.h" },
		{ "ToolTip", "The last generated code as text for debugging." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_GeneratedCodeText = { "GeneratedCodeText", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIEnum, GeneratedCodeText), METADATA_PARAMS(Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_GeneratedCodeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_GeneratedCodeText_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebAPIEnum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_bGenerate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_Values,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIEnum_Statics::NewProp_GeneratedCodeText,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPIEnum_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPIEnum>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPIEnum_Statics::ClassParams = {
		&UWebAPIEnum::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWebAPIEnum_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIEnum_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPIEnum_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIEnum_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPIEnum()
	{
		if (!Z_Registration_Info_UClass_UWebAPIEnum.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPIEnum.OuterSingleton, Z_Construct_UClass_UWebAPIEnum_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPIEnum.OuterSingleton;
	}
	template<> WEBAPIEDITOR_API UClass* StaticClass<UWebAPIEnum>()
	{
		return UWebAPIEnum::StaticClass();
	}
	UWebAPIEnum::UWebAPIEnum(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPIEnum);
	UWebAPIEnum::~UWebAPIEnum() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIEnum_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIEnum_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebAPIEnumValue, UWebAPIEnumValue::StaticClass, TEXT("UWebAPIEnumValue"), &Z_Registration_Info_UClass_UWebAPIEnumValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPIEnumValue), 3802845187U) },
		{ Z_Construct_UClass_UWebAPIEnum, UWebAPIEnum::StaticClass, TEXT("UWebAPIEnum"), &Z_Registration_Info_UClass_UWebAPIEnum, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPIEnum), 928656704U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIEnum_h_850362926(TEXT("/Script/WebAPIEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIEnum_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIEnum_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
