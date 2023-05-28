// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CodeEditorCustomization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCodeEditorCustomization() {}
// Cross Module References
	CODEEDITOR_API UClass* Z_Construct_UClass_UCodeEditorCustomization();
	CODEEDITOR_API UClass* Z_Construct_UClass_UCodeEditorCustomization_NoRegister();
	CODEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCodeEditorControlCustomization();
	CODEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCodeEditorTextCustomization();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UPackage* Z_Construct_UPackage__Script_CodeEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CodeEditorTextCustomization;
class UScriptStruct* FCodeEditorTextCustomization::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CodeEditorTextCustomization.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CodeEditorTextCustomization.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCodeEditorTextCustomization, (UObject*)Z_Construct_UPackage__Script_CodeEditor(), TEXT("CodeEditorTextCustomization"));
	}
	return Z_Registration_Info_UScriptStruct_CodeEditorTextCustomization.OuterSingleton;
}
template<> CODEEDITOR_API UScriptStruct* StaticStruct<FCodeEditorTextCustomization>()
{
	return FCodeEditorTextCustomization::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCodeEditorTextCustomization_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Font;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCodeEditorTextCustomization_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/CodeEditorCustomization.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCodeEditorTextCustomization_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCodeEditorTextCustomization>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCodeEditorTextCustomization_Statics::NewProp_Font_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Private/CodeEditorCustomization.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCodeEditorTextCustomization_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCodeEditorTextCustomization, Font), METADATA_PARAMS(Z_Construct_UScriptStruct_FCodeEditorTextCustomization_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCodeEditorTextCustomization_Statics::NewProp_Font_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCodeEditorTextCustomization_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Private/CodeEditorCustomization.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCodeEditorTextCustomization_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCodeEditorTextCustomization, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FCodeEditorTextCustomization_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCodeEditorTextCustomization_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCodeEditorTextCustomization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCodeEditorTextCustomization_Statics::NewProp_Font,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCodeEditorTextCustomization_Statics::NewProp_Color,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCodeEditorTextCustomization_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CodeEditor,
		nullptr,
		&NewStructOps,
		"CodeEditorTextCustomization",
		sizeof(FCodeEditorTextCustomization),
		alignof(FCodeEditorTextCustomization),
		Z_Construct_UScriptStruct_FCodeEditorTextCustomization_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCodeEditorTextCustomization_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCodeEditorTextCustomization_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCodeEditorTextCustomization_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCodeEditorTextCustomization()
	{
		if (!Z_Registration_Info_UScriptStruct_CodeEditorTextCustomization.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CodeEditorTextCustomization.InnerSingleton, Z_Construct_UScriptStruct_FCodeEditorTextCustomization_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CodeEditorTextCustomization.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CodeEditorControlCustomization;
class UScriptStruct* FCodeEditorControlCustomization::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CodeEditorControlCustomization.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CodeEditorControlCustomization.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCodeEditorControlCustomization, (UObject*)Z_Construct_UPackage__Script_CodeEditor(), TEXT("CodeEditorControlCustomization"));
	}
	return Z_Registration_Info_UScriptStruct_CodeEditorControlCustomization.OuterSingleton;
}
template<> CODEEDITOR_API UScriptStruct* StaticStruct<FCodeEditorControlCustomization>()
{
	return FCodeEditorControlCustomization::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCodeEditorControlCustomization_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCodeEditorControlCustomization_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/CodeEditorCustomization.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCodeEditorControlCustomization_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCodeEditorControlCustomization>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCodeEditorControlCustomization_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Controls" },
		{ "ModuleRelativePath", "Private/CodeEditorCustomization.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCodeEditorControlCustomization_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCodeEditorControlCustomization, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FCodeEditorControlCustomization_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCodeEditorControlCustomization_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCodeEditorControlCustomization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCodeEditorControlCustomization_Statics::NewProp_Color,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCodeEditorControlCustomization_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CodeEditor,
		nullptr,
		&NewStructOps,
		"CodeEditorControlCustomization",
		sizeof(FCodeEditorControlCustomization),
		alignof(FCodeEditorControlCustomization),
		Z_Construct_UScriptStruct_FCodeEditorControlCustomization_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCodeEditorControlCustomization_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCodeEditorControlCustomization_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCodeEditorControlCustomization_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCodeEditorControlCustomization()
	{
		if (!Z_Registration_Info_UScriptStruct_CodeEditorControlCustomization.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CodeEditorControlCustomization.InnerSingleton, Z_Construct_UScriptStruct_FCodeEditorControlCustomization_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CodeEditorControlCustomization.InnerSingleton;
	}
	void UCodeEditorCustomization::StaticRegisterNativesUCodeEditorCustomization()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCodeEditorCustomization);
	UClass* Z_Construct_UClass_UCodeEditorCustomization_NoRegister()
	{
		return UCodeEditorCustomization::StaticClass();
	}
	struct Z_Construct_UClass_UCodeEditorCustomization_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Controls_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Controls_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Controls;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Text_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCodeEditorCustomization_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CodeEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCodeEditorCustomization_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CodeEditorCustomization.h" },
		{ "ModuleRelativePath", "Private/CodeEditorCustomization.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCodeEditorCustomization_Statics::NewProp_Controls_Inner = { "Controls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCodeEditorControlCustomization, METADATA_PARAMS(nullptr, 0) }; // 1557558954
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCodeEditorCustomization_Statics::NewProp_Controls_MetaData[] = {
		{ "Category", "Controls" },
		{ "ModuleRelativePath", "Private/CodeEditorCustomization.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCodeEditorCustomization_Statics::NewProp_Controls = { "Controls", nullptr, (EPropertyFlags)0x0040000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCodeEditorCustomization, Controls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCodeEditorCustomization_Statics::NewProp_Controls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCodeEditorCustomization_Statics::NewProp_Controls_MetaData)) }; // 1557558954
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCodeEditorCustomization_Statics::NewProp_Text_Inner = { "Text", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCodeEditorTextCustomization, METADATA_PARAMS(nullptr, 0) }; // 1524424486
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCodeEditorCustomization_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Text" },
		{ "ModuleRelativePath", "Private/CodeEditorCustomization.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCodeEditorCustomization_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0040000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCodeEditorCustomization, Text), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCodeEditorCustomization_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCodeEditorCustomization_Statics::NewProp_Text_MetaData)) }; // 1524424486
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCodeEditorCustomization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCodeEditorCustomization_Statics::NewProp_Controls_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCodeEditorCustomization_Statics::NewProp_Controls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCodeEditorCustomization_Statics::NewProp_Text_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCodeEditorCustomization_Statics::NewProp_Text,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCodeEditorCustomization_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCodeEditorCustomization>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCodeEditorCustomization_Statics::ClassParams = {
		&UCodeEditorCustomization::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCodeEditorCustomization_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCodeEditorCustomization_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCodeEditorCustomization_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCodeEditorCustomization_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCodeEditorCustomization()
	{
		if (!Z_Registration_Info_UClass_UCodeEditorCustomization.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCodeEditorCustomization.OuterSingleton, Z_Construct_UClass_UCodeEditorCustomization_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCodeEditorCustomization.OuterSingleton;
	}
	template<> CODEEDITOR_API UClass* StaticClass<UCodeEditorCustomization>()
	{
		return UCodeEditorCustomization::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCodeEditorCustomization);
	UCodeEditorCustomization::~UCodeEditorCustomization() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeEditorCustomization_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeEditorCustomization_h_Statics::ScriptStructInfo[] = {
		{ FCodeEditorTextCustomization::StaticStruct, Z_Construct_UScriptStruct_FCodeEditorTextCustomization_Statics::NewStructOps, TEXT("CodeEditorTextCustomization"), &Z_Registration_Info_UScriptStruct_CodeEditorTextCustomization, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCodeEditorTextCustomization), 1524424486U) },
		{ FCodeEditorControlCustomization::StaticStruct, Z_Construct_UScriptStruct_FCodeEditorControlCustomization_Statics::NewStructOps, TEXT("CodeEditorControlCustomization"), &Z_Registration_Info_UScriptStruct_CodeEditorControlCustomization, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCodeEditorControlCustomization), 1557558954U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeEditorCustomization_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCodeEditorCustomization, UCodeEditorCustomization::StaticClass, TEXT("UCodeEditorCustomization"), &Z_Registration_Info_UClass_UCodeEditorCustomization, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCodeEditorCustomization), 1514425768U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeEditorCustomization_h_666144232(TEXT("/Script/CodeEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeEditorCustomization_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeEditorCustomization_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeEditorCustomization_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeEditorCustomization_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
