// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/HLOD/HLODBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODBuilder() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UHLODBuilder();
	ENGINE_API UClass* Z_Construct_UClass_UHLODBuilder_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHLODBuilderSettings();
	ENGINE_API UClass* Z_Construct_UClass_UHLODBuilderSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNullHLODBuilder();
	ENGINE_API UClass* Z_Construct_UClass_UNullHLODBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UHLODBuilderSettings::StaticRegisterNativesUHLODBuilderSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHLODBuilderSettings);
	UClass* Z_Construct_UClass_UHLODBuilderSettings_NoRegister()
	{
		return UHLODBuilderSettings::StaticClass();
	}
	struct Z_Construct_UClass_UHLODBuilderSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHLODBuilderSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODBuilderSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all HLOD Builder settings\n */" },
		{ "IncludePath", "WorldPartition/HLOD/HLODBuilder.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODBuilder.h" },
		{ "ToolTip", "Base class for all HLOD Builder settings" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHLODBuilderSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHLODBuilderSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHLODBuilderSettings_Statics::ClassParams = {
		&UHLODBuilderSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHLODBuilderSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODBuilderSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHLODBuilderSettings()
	{
		if (!Z_Registration_Info_UClass_UHLODBuilderSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHLODBuilderSettings.OuterSingleton, Z_Construct_UClass_UHLODBuilderSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHLODBuilderSettings.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UHLODBuilderSettings>()
	{
		return UHLODBuilderSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHLODBuilderSettings);
	UHLODBuilderSettings::~UHLODBuilderSettings() {}
	void UHLODBuilder::StaticRegisterNativesUHLODBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHLODBuilder);
	UClass* Z_Construct_UClass_UHLODBuilder_NoRegister()
	{
		return UHLODBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UHLODBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HLODBuilderSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HLODBuilderSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHLODBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all HLOD builders\n * This class takes as input a group of components, and should return component(s) that will be included in the HLOD actor.\n */" },
		{ "IncludePath", "WorldPartition/HLOD/HLODBuilder.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODBuilder.h" },
		{ "ToolTip", "Base class for all HLOD builders\nThis class takes as input a group of components, and should return component(s) that will be included in the HLOD actor." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODBuilder_Statics::NewProp_HLODBuilderSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODBuilder.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UHLODBuilder_Statics::NewProp_HLODBuilderSettings = { "HLODBuilderSettings", nullptr, (EPropertyFlags)0x0024080800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHLODBuilder, HLODBuilderSettings), Z_Construct_UClass_UHLODBuilderSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHLODBuilder_Statics::NewProp_HLODBuilderSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODBuilder_Statics::NewProp_HLODBuilderSettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHLODBuilder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODBuilder_Statics::NewProp_HLODBuilderSettings,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHLODBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHLODBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHLODBuilder_Statics::ClassParams = {
		&UHLODBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UHLODBuilder_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UHLODBuilder_Statics::PropPointers), 0),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UHLODBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHLODBuilder()
	{
		if (!Z_Registration_Info_UClass_UHLODBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHLODBuilder.OuterSingleton, Z_Construct_UClass_UHLODBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHLODBuilder.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UHLODBuilder>()
	{
		return UHLODBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHLODBuilder);
	UHLODBuilder::~UHLODBuilder() {}
	void UNullHLODBuilder::StaticRegisterNativesUNullHLODBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNullHLODBuilder);
	UClass* Z_Construct_UClass_UNullHLODBuilder_NoRegister()
	{
		return UNullHLODBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UNullHLODBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNullHLODBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHLODBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNullHLODBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Null HLOD builder that ignores it's input and generate no component.\n */" },
		{ "IncludePath", "WorldPartition/HLOD/HLODBuilder.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODBuilder.h" },
		{ "ToolTip", "Null HLOD builder that ignores it's input and generate no component." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNullHLODBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNullHLODBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNullHLODBuilder_Statics::ClassParams = {
		&UNullHLODBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x041000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNullHLODBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNullHLODBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNullHLODBuilder()
	{
		if (!Z_Registration_Info_UClass_UNullHLODBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNullHLODBuilder.OuterSingleton, Z_Construct_UClass_UNullHLODBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNullHLODBuilder.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UNullHLODBuilder>()
	{
		return UNullHLODBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNullHLODBuilder);
	UNullHLODBuilder::~UNullHLODBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHLODBuilderSettings, UHLODBuilderSettings::StaticClass, TEXT("UHLODBuilderSettings"), &Z_Registration_Info_UClass_UHLODBuilderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHLODBuilderSettings), 2605104915U) },
		{ Z_Construct_UClass_UHLODBuilder, UHLODBuilder::StaticClass, TEXT("UHLODBuilder"), &Z_Registration_Info_UClass_UHLODBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHLODBuilder), 4194725405U) },
		{ Z_Construct_UClass_UNullHLODBuilder, UNullHLODBuilder::StaticClass, TEXT("UNullHLODBuilder"), &Z_Registration_Info_UClass_UNullHLODBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNullHLODBuilder), 1517428750U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h_2359365721(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
