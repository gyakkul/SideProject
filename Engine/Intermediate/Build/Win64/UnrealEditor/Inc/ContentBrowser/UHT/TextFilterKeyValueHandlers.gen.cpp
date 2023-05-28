// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/TextFilterKeyValueHandlers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextFilterKeyValueHandlers() {}
// Cross Module References
	CONTENTBROWSER_API UClass* Z_Construct_UClass_UTextFilterKeyValueHandler_NoRegister();
	CONTENTBROWSER_API UClass* Z_Construct_UClass_UTextFilterKeyValueHandlers();
	CONTENTBROWSER_API UClass* Z_Construct_UClass_UTextFilterKeyValueHandlers_NoRegister();
	CONTENTBROWSER_API UScriptStruct* Z_Construct_UScriptStruct_FTextFilterKeyValueHandlerEntry();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ContentBrowser();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextFilterKeyValueHandlerEntry;
class UScriptStruct* FTextFilterKeyValueHandlerEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextFilterKeyValueHandlerEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextFilterKeyValueHandlerEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextFilterKeyValueHandlerEntry, (UObject*)Z_Construct_UPackage__Script_ContentBrowser(), TEXT("TextFilterKeyValueHandlerEntry"));
	}
	return Z_Registration_Info_UScriptStruct_TextFilterKeyValueHandlerEntry.OuterSingleton;
}
template<> CONTENTBROWSER_API UScriptStruct* StaticStruct<FTextFilterKeyValueHandlerEntry>()
{
	return FTextFilterKeyValueHandlerEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTextFilterKeyValueHandlerEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandlerClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_HandlerClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextFilterKeyValueHandlerEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/TextFilterKeyValueHandlers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextFilterKeyValueHandlerEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextFilterKeyValueHandlerEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextFilterKeyValueHandlerEntry_Statics::NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Private/TextFilterKeyValueHandlers.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTextFilterKeyValueHandlerEntry_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextFilterKeyValueHandlerEntry, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextFilterKeyValueHandlerEntry_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextFilterKeyValueHandlerEntry_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextFilterKeyValueHandlerEntry_Statics::NewProp_HandlerClass_MetaData[] = {
		{ "ModuleRelativePath", "Private/TextFilterKeyValueHandlers.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FTextFilterKeyValueHandlerEntry_Statics::NewProp_HandlerClass = { "HandlerClass", nullptr, (EPropertyFlags)0x0014000000004000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextFilterKeyValueHandlerEntry, HandlerClass), Z_Construct_UClass_UTextFilterKeyValueHandler_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextFilterKeyValueHandlerEntry_Statics::NewProp_HandlerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextFilterKeyValueHandlerEntry_Statics::NewProp_HandlerClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextFilterKeyValueHandlerEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextFilterKeyValueHandlerEntry_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextFilterKeyValueHandlerEntry_Statics::NewProp_HandlerClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextFilterKeyValueHandlerEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowser,
		nullptr,
		&NewStructOps,
		"TextFilterKeyValueHandlerEntry",
		sizeof(FTextFilterKeyValueHandlerEntry),
		alignof(FTextFilterKeyValueHandlerEntry),
		Z_Construct_UScriptStruct_FTextFilterKeyValueHandlerEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextFilterKeyValueHandlerEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTextFilterKeyValueHandlerEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextFilterKeyValueHandlerEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTextFilterKeyValueHandlerEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_TextFilterKeyValueHandlerEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextFilterKeyValueHandlerEntry.InnerSingleton, Z_Construct_UScriptStruct_FTextFilterKeyValueHandlerEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TextFilterKeyValueHandlerEntry.InnerSingleton;
	}
	void UTextFilterKeyValueHandlers::StaticRegisterNativesUTextFilterKeyValueHandlers()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextFilterKeyValueHandlers);
	UClass* Z_Construct_UClass_UTextFilterKeyValueHandlers_NoRegister()
	{
		return UTextFilterKeyValueHandlers::StaticClass();
	}
	struct Z_Construct_UClass_UTextFilterKeyValueHandlers_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextFilterKeyValueHandlers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextFilterKeyValueHandlers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TextFilterKeyValueHandlers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextFilterKeyValueHandlers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextFilterKeyValueHandlers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TextFilterKeyValueHandlers.h" },
		{ "ModuleRelativePath", "Private/TextFilterKeyValueHandlers.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextFilterKeyValueHandlers_Statics::NewProp_TextFilterKeyValueHandlers_Inner = { "TextFilterKeyValueHandlers", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTextFilterKeyValueHandlerEntry, METADATA_PARAMS(nullptr, 0) }; // 3611072378
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextFilterKeyValueHandlers_Statics::NewProp_TextFilterKeyValueHandlers_MetaData[] = {
		{ "ModuleRelativePath", "Private/TextFilterKeyValueHandlers.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTextFilterKeyValueHandlers_Statics::NewProp_TextFilterKeyValueHandlers = { "TextFilterKeyValueHandlers", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextFilterKeyValueHandlers, TextFilterKeyValueHandlers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTextFilterKeyValueHandlers_Statics::NewProp_TextFilterKeyValueHandlers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextFilterKeyValueHandlers_Statics::NewProp_TextFilterKeyValueHandlers_MetaData)) }; // 3611072378
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextFilterKeyValueHandlers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextFilterKeyValueHandlers_Statics::NewProp_TextFilterKeyValueHandlers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextFilterKeyValueHandlers_Statics::NewProp_TextFilterKeyValueHandlers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextFilterKeyValueHandlers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextFilterKeyValueHandlers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextFilterKeyValueHandlers_Statics::ClassParams = {
		&UTextFilterKeyValueHandlers::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTextFilterKeyValueHandlers_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextFilterKeyValueHandlers_Statics::PropPointers),
		0,
		0x000000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UTextFilterKeyValueHandlers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextFilterKeyValueHandlers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextFilterKeyValueHandlers()
	{
		if (!Z_Registration_Info_UClass_UTextFilterKeyValueHandlers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextFilterKeyValueHandlers.OuterSingleton, Z_Construct_UClass_UTextFilterKeyValueHandlers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextFilterKeyValueHandlers.OuterSingleton;
	}
	template<> CONTENTBROWSER_API UClass* StaticClass<UTextFilterKeyValueHandlers>()
	{
		return UTextFilterKeyValueHandlers::StaticClass();
	}
	UTextFilterKeyValueHandlers::UTextFilterKeyValueHandlers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextFilterKeyValueHandlers);
	UTextFilterKeyValueHandlers::~UTextFilterKeyValueHandlers() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Private_TextFilterKeyValueHandlers_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Private_TextFilterKeyValueHandlers_h_Statics::ScriptStructInfo[] = {
		{ FTextFilterKeyValueHandlerEntry::StaticStruct, Z_Construct_UScriptStruct_FTextFilterKeyValueHandlerEntry_Statics::NewStructOps, TEXT("TextFilterKeyValueHandlerEntry"), &Z_Registration_Info_UScriptStruct_TextFilterKeyValueHandlerEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextFilterKeyValueHandlerEntry), 3611072378U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Private_TextFilterKeyValueHandlers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextFilterKeyValueHandlers, UTextFilterKeyValueHandlers::StaticClass, TEXT("UTextFilterKeyValueHandlers"), &Z_Registration_Info_UClass_UTextFilterKeyValueHandlers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextFilterKeyValueHandlers), 560980469U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Private_TextFilterKeyValueHandlers_h_670386285(TEXT("/Script/ContentBrowser"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Private_TextFilterKeyValueHandlers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Private_TextFilterKeyValueHandlers_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Private_TextFilterKeyValueHandlers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Private_TextFilterKeyValueHandlers_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
