// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScriptBlueprintGeneratedClass.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScriptBlueprintGeneratedClass() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UProperty();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass();
	SCRIPTPLUGIN_API UClass* Z_Construct_UClass_UScriptBlueprintGeneratedClass();
	SCRIPTPLUGIN_API UClass* Z_Construct_UClass_UScriptBlueprintGeneratedClass_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ScriptPlugin();
// End Cross Module References
	void UScriptBlueprintGeneratedClass::StaticRegisterNativesUScriptBlueprintGeneratedClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScriptBlueprintGeneratedClass);
	UClass* Z_Construct_UClass_UScriptBlueprintGeneratedClass_NoRegister()
	{
		return UScriptBlueprintGeneratedClass::StaticClass();
	}
	struct Z_Construct_UClass_UScriptBlueprintGeneratedClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ByteCode_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ByteCode_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ByteCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceCode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceCode;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ScriptProperties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptProperties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScriptProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScriptBlueprintGeneratedClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintGeneratedClass,
		(UObject* (*)())Z_Construct_UPackage__Script_ScriptPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptBlueprintGeneratedClass_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Script generated class\n*/" },
		{ "DevelopmentStatus", "EarlyAccess" },
		{ "IncludePath", "ScriptBlueprintGeneratedClass.h" },
		{ "ModuleRelativePath", "Classes/ScriptBlueprintGeneratedClass.h" },
		{ "ToolTip", "Script generated class" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UScriptBlueprintGeneratedClass_Statics::NewProp_ByteCode_Inner = { "ByteCode", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptBlueprintGeneratedClass_Statics::NewProp_ByteCode_MetaData[] = {
		{ "Comment", "/** Generated script bytecode */" },
		{ "ModuleRelativePath", "Classes/ScriptBlueprintGeneratedClass.h" },
		{ "ToolTip", "Generated script bytecode" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UScriptBlueprintGeneratedClass_Statics::NewProp_ByteCode = { "ByteCode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScriptBlueprintGeneratedClass, ByteCode), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UScriptBlueprintGeneratedClass_Statics::NewProp_ByteCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptBlueprintGeneratedClass_Statics::NewProp_ByteCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptBlueprintGeneratedClass_Statics::NewProp_SourceCode_MetaData[] = {
		{ "Comment", "/** Script source code. @todo: this should be editor-only */" },
		{ "ModuleRelativePath", "Classes/ScriptBlueprintGeneratedClass.h" },
		{ "ToolTip", "Script source code. @todo: this should be editor-only" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UScriptBlueprintGeneratedClass_Statics::NewProp_SourceCode = { "SourceCode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScriptBlueprintGeneratedClass, SourceCode), METADATA_PARAMS(Z_Construct_UClass_UScriptBlueprintGeneratedClass_Statics::NewProp_SourceCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptBlueprintGeneratedClass_Statics::NewProp_SourceCode_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UScriptBlueprintGeneratedClass_Statics::NewProp_ScriptProperties_Inner = { "ScriptProperties", nullptr, (EPropertyFlags)0x0004000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UProperty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptBlueprintGeneratedClass_Statics::NewProp_ScriptProperties_MetaData[] = {
		{ "Comment", "/** Script-generated properties */" },
		{ "ModuleRelativePath", "Classes/ScriptBlueprintGeneratedClass.h" },
		{ "ToolTip", "Script-generated properties" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UScriptBlueprintGeneratedClass_Statics::NewProp_ScriptProperties = { "ScriptProperties", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScriptBlueprintGeneratedClass, ScriptProperties_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UScriptBlueprintGeneratedClass_Statics::NewProp_ScriptProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptBlueprintGeneratedClass_Statics::NewProp_ScriptProperties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScriptBlueprintGeneratedClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptBlueprintGeneratedClass_Statics::NewProp_ByteCode_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptBlueprintGeneratedClass_Statics::NewProp_ByteCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptBlueprintGeneratedClass_Statics::NewProp_SourceCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptBlueprintGeneratedClass_Statics::NewProp_ScriptProperties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptBlueprintGeneratedClass_Statics::NewProp_ScriptProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScriptBlueprintGeneratedClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScriptBlueprintGeneratedClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScriptBlueprintGeneratedClass_Statics::ClassParams = {
		&UScriptBlueprintGeneratedClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UScriptBlueprintGeneratedClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UScriptBlueprintGeneratedClass_Statics::PropPointers),
		0,
		0x009200A0u,
		METADATA_PARAMS(Z_Construct_UClass_UScriptBlueprintGeneratedClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptBlueprintGeneratedClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScriptBlueprintGeneratedClass()
	{
		if (!Z_Registration_Info_UClass_UScriptBlueprintGeneratedClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScriptBlueprintGeneratedClass.OuterSingleton, Z_Construct_UClass_UScriptBlueprintGeneratedClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScriptBlueprintGeneratedClass.OuterSingleton;
	}
	template<> SCRIPTPLUGIN_API UClass* StaticClass<UScriptBlueprintGeneratedClass>()
	{
		return UScriptBlueprintGeneratedClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScriptBlueprintGeneratedClass);
	UScriptBlueprintGeneratedClass::~UScriptBlueprintGeneratedClass() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UScriptBlueprintGeneratedClass)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprintGeneratedClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprintGeneratedClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UScriptBlueprintGeneratedClass, UScriptBlueprintGeneratedClass::StaticClass, TEXT("UScriptBlueprintGeneratedClass"), &Z_Registration_Info_UClass_UScriptBlueprintGeneratedClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScriptBlueprintGeneratedClass), 1202475324U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprintGeneratedClass_h_2315460305(TEXT("/Script/ScriptPlugin"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprintGeneratedClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprintGeneratedClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
