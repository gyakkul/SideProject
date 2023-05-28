// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraValidationRule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraValidationRule() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraValidationRule();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraValidationRule_NoRegister();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraValidationSeverity();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraValidationSeverity;
	static UEnum* ENiagaraValidationSeverity_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraValidationSeverity.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraValidationSeverity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraValidationSeverity, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraValidationSeverity"));
		}
		return Z_Registration_Info_UEnum_ENiagaraValidationSeverity.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraValidationSeverity>()
	{
		return ENiagaraValidationSeverity_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraValidationSeverity_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraValidationSeverity_Statics::Enumerators[] = {
		{ "ENiagaraValidationSeverity::Info", (int64)ENiagaraValidationSeverity::Info },
		{ "ENiagaraValidationSeverity::Warning", (int64)ENiagaraValidationSeverity::Warning },
		{ "ENiagaraValidationSeverity::Error", (int64)ENiagaraValidationSeverity::Error },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraValidationSeverity_Statics::Enum_MetaDataParams[] = {
		{ "Error.Comment", "/** A problem that must be fixed for the content to be valid. */" },
		{ "Error.Name", "ENiagaraValidationSeverity::Error" },
		{ "Error.ToolTip", "A problem that must be fixed for the content to be valid." },
		{ "Info.Comment", "/** Just an info message for the user. */" },
		{ "Info.Name", "ENiagaraValidationSeverity::Info" },
		{ "Info.ToolTip", "Just an info message for the user." },
		{ "ModuleRelativePath", "Classes/NiagaraValidationRule.h" },
		{ "Warning.Comment", "/** Could be a potential problem, for example bad performance. */" },
		{ "Warning.Name", "ENiagaraValidationSeverity::Warning" },
		{ "Warning.ToolTip", "Could be a potential problem, for example bad performance." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraValidationSeverity_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraValidationSeverity",
		"ENiagaraValidationSeverity",
		Z_Construct_UEnum_Niagara_ENiagaraValidationSeverity_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraValidationSeverity_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraValidationSeverity_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraValidationSeverity_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraValidationSeverity()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraValidationSeverity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraValidationSeverity.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraValidationSeverity_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraValidationSeverity.InnerSingleton;
	}
	void UNiagaraValidationRule::StaticRegisterNativesUNiagaraValidationRule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraValidationRule);
	UClass* Z_Construct_UClass_UNiagaraValidationRule_NoRegister()
	{
		return UNiagaraValidationRule::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraValidationRule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraValidationRule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRule_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\nBase class for system validation logic. \nThese allow Niagara systems to be inspected for content validation either at save time or from a commandlet.\n*/" },
		{ "IncludePath", "NiagaraValidationRule.h" },
		{ "ModuleRelativePath", "Classes/NiagaraValidationRule.h" },
		{ "ToolTip", "Base class for system validation logic.\nThese allow Niagara systems to be inspected for content validation either at save time or from a commandlet." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraValidationRule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraValidationRule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraValidationRule_Statics::ClassParams = {
		&UNiagaraValidationRule::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraValidationRule()
	{
		if (!Z_Registration_Info_UClass_UNiagaraValidationRule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraValidationRule.OuterSingleton, Z_Construct_UClass_UNiagaraValidationRule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraValidationRule.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraValidationRule>()
	{
		return UNiagaraValidationRule::StaticClass();
	}
	UNiagaraValidationRule::UNiagaraValidationRule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraValidationRule);
	UNiagaraValidationRule::~UNiagaraValidationRule() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRule_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRule_h_Statics::EnumInfo[] = {
		{ ENiagaraValidationSeverity_StaticEnum, TEXT("ENiagaraValidationSeverity"), &Z_Registration_Info_UEnum_ENiagaraValidationSeverity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4193151901U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraValidationRule, UNiagaraValidationRule::StaticClass, TEXT("UNiagaraValidationRule"), &Z_Registration_Info_UClass_UNiagaraValidationRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraValidationRule), 3821932940U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRule_h_3335802768(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRule_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRule_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRule_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
