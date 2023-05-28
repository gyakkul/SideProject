// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintRuntimeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintRuntimeSettings() {}
// Cross Module References
	BLUEPRINTRUNTIME_API UClass* Z_Construct_UClass_UBlueprintRuntimeSettings();
	BLUEPRINTRUNTIME_API UClass* Z_Construct_UClass_UBlueprintRuntimeSettings_NoRegister();
	BLUEPRINTRUNTIME_API UEnum* Z_Construct_UEnum_BlueprintRuntime_EBlueprintWarningBehavior();
	BLUEPRINTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintWarningSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_BlueprintRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlueprintWarningBehavior;
	static UEnum* EBlueprintWarningBehavior_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBlueprintWarningBehavior.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBlueprintWarningBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlueprintRuntime_EBlueprintWarningBehavior, (UObject*)Z_Construct_UPackage__Script_BlueprintRuntime(), TEXT("EBlueprintWarningBehavior"));
		}
		return Z_Registration_Info_UEnum_EBlueprintWarningBehavior.OuterSingleton;
	}
	template<> BLUEPRINTRUNTIME_API UEnum* StaticEnum<EBlueprintWarningBehavior>()
	{
		return EBlueprintWarningBehavior_StaticEnum();
	}
	struct Z_Construct_UEnum_BlueprintRuntime_EBlueprintWarningBehavior_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BlueprintRuntime_EBlueprintWarningBehavior_Statics::Enumerators[] = {
		{ "EBlueprintWarningBehavior::Warn", (int64)EBlueprintWarningBehavior::Warn },
		{ "EBlueprintWarningBehavior::Error", (int64)EBlueprintWarningBehavior::Error },
		{ "EBlueprintWarningBehavior::Suppress", (int64)EBlueprintWarningBehavior::Suppress },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BlueprintRuntime_EBlueprintWarningBehavior_Statics::Enum_MetaDataParams[] = {
		{ "Error.Name", "EBlueprintWarningBehavior::Error" },
		{ "ModuleRelativePath", "Public/BlueprintRuntimeSettings.h" },
		{ "Suppress.Name", "EBlueprintWarningBehavior::Suppress" },
		{ "Warn.Name", "EBlueprintWarningBehavior::Warn" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlueprintRuntime_EBlueprintWarningBehavior_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BlueprintRuntime,
		nullptr,
		"EBlueprintWarningBehavior",
		"EBlueprintWarningBehavior",
		Z_Construct_UEnum_BlueprintRuntime_EBlueprintWarningBehavior_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintRuntime_EBlueprintWarningBehavior_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BlueprintRuntime_EBlueprintWarningBehavior_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintRuntime_EBlueprintWarningBehavior_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BlueprintRuntime_EBlueprintWarningBehavior()
	{
		if (!Z_Registration_Info_UEnum_EBlueprintWarningBehavior.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlueprintWarningBehavior.InnerSingleton, Z_Construct_UEnum_BlueprintRuntime_EBlueprintWarningBehavior_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBlueprintWarningBehavior.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintWarningSettings;
class UScriptStruct* FBlueprintWarningSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintWarningSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintWarningSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintWarningSettings, (UObject*)Z_Construct_UPackage__Script_BlueprintRuntime(), TEXT("BlueprintWarningSettings"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintWarningSettings.OuterSingleton;
}
template<> BLUEPRINTRUNTIME_API UScriptStruct* StaticStruct<FBlueprintWarningSettings>()
{
	return FBlueprintWarningSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarningIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WarningIdentifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarningDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_WarningDescription;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WarningBehavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarningBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WarningBehavior;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintRuntimeSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintWarningSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningIdentifier_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintRuntimeSettings.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningIdentifier = { "WarningIdentifier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintWarningSettings, WarningIdentifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningIdentifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningDescription_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintRuntimeSettings.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningDescription = { "WarningDescription", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintWarningSettings, WarningDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningDescription_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintRuntimeSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningBehavior = { "WarningBehavior", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintWarningSettings, WarningBehavior), Z_Construct_UEnum_BlueprintRuntime_EBlueprintWarningBehavior, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningBehavior_MetaData)) }; // 1117366890
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningBehavior,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintRuntime,
		nullptr,
		&NewStructOps,
		"BlueprintWarningSettings",
		sizeof(FBlueprintWarningSettings),
		alignof(FBlueprintWarningSettings),
		Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintWarningSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_BlueprintWarningSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintWarningSettings.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlueprintWarningSettings.InnerSingleton;
	}
	void UBlueprintRuntimeSettings::StaticRegisterNativesUBlueprintRuntimeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintRuntimeSettings);
	UClass* Z_Construct_UClass_UBlueprintRuntimeSettings_NoRegister()
	{
		return UBlueprintRuntimeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintRuntimeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WarningSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarningSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WarningSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Implements the settings for the BlueprintRuntime module\n*/" },
		{ "IncludePath", "BlueprintRuntimeSettings.h" },
		{ "ModuleRelativePath", "Public/BlueprintRuntimeSettings.h" },
		{ "ToolTip", "Implements the settings for the BlueprintRuntime module" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::NewProp_WarningSettings_Inner = { "WarningSettings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBlueprintWarningSettings, METADATA_PARAMS(nullptr, 0) }; // 1130677121
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::NewProp_WarningSettings_MetaData[] = {
		{ "Category", "Warnings" },
		{ "ModuleRelativePath", "Public/BlueprintRuntimeSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::NewProp_WarningSettings = { "WarningSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintRuntimeSettings, WarningSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::NewProp_WarningSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::NewProp_WarningSettings_MetaData)) }; // 1130677121
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::NewProp_WarningSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::NewProp_WarningSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintRuntimeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::ClassParams = {
		&UBlueprintRuntimeSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintRuntimeSettings()
	{
		if (!Z_Registration_Info_UClass_UBlueprintRuntimeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintRuntimeSettings.OuterSingleton, Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintRuntimeSettings.OuterSingleton;
	}
	template<> BLUEPRINTRUNTIME_API UClass* StaticClass<UBlueprintRuntimeSettings>()
	{
		return UBlueprintRuntimeSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintRuntimeSettings);
	UBlueprintRuntimeSettings::~UBlueprintRuntimeSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_Statics::EnumInfo[] = {
		{ EBlueprintWarningBehavior_StaticEnum, TEXT("EBlueprintWarningBehavior"), &Z_Registration_Info_UEnum_EBlueprintWarningBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1117366890U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_Statics::ScriptStructInfo[] = {
		{ FBlueprintWarningSettings::StaticStruct, Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewStructOps, TEXT("BlueprintWarningSettings"), &Z_Registration_Info_UScriptStruct_BlueprintWarningSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintWarningSettings), 1130677121U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintRuntimeSettings, UBlueprintRuntimeSettings::StaticClass, TEXT("UBlueprintRuntimeSettings"), &Z_Registration_Info_UClass_UBlueprintRuntimeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintRuntimeSettings), 3481711252U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_2783082589(TEXT("/Script/BlueprintRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
