// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Debug/ReporterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReporterBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UReporterBase();
	ENGINE_API UClass* Z_Construct_UClass_UReporterBase_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EReporterLineStyle();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EReporterLineStyle;
	static UEnum* EReporterLineStyle_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EReporterLineStyle.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EReporterLineStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EReporterLineStyle, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EReporterLineStyle"));
		}
		return Z_Registration_Info_UEnum_EReporterLineStyle.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EReporterLineStyle::Type>()
	{
		return EReporterLineStyle_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EReporterLineStyle_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EReporterLineStyle_Statics::Enumerators[] = {
		{ "EReporterLineStyle::Line", (int64)EReporterLineStyle::Line },
		{ "EReporterLineStyle::Dash", (int64)EReporterLineStyle::Dash },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EReporterLineStyle_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Draw styles for lines. */" },
		{ "Dash.Name", "EReporterLineStyle::Dash" },
		{ "Line.Name", "EReporterLineStyle::Line" },
		{ "ModuleRelativePath", "Classes/Debug/ReporterBase.h" },
		{ "ToolTip", "Draw styles for lines." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EReporterLineStyle_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EReporterLineStyle",
		"EReporterLineStyle::Type",
		Z_Construct_UEnum_Engine_EReporterLineStyle_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EReporterLineStyle_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EReporterLineStyle_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EReporterLineStyle_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EReporterLineStyle()
	{
		if (!Z_Registration_Info_UEnum_EReporterLineStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EReporterLineStyle.InnerSingleton, Z_Construct_UEnum_Engine_EReporterLineStyle_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EReporterLineStyle.InnerSingleton;
	}
	void UReporterBase::StaticRegisterNativesUReporterBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReporterBase);
	UClass* Z_Construct_UClass_UReporterBase_NoRegister()
	{
		return UReporterBase::StaticClass();
	}
	struct Z_Construct_UClass_UReporterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReporterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReporterBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Debug/ReporterBase.h" },
		{ "ModuleRelativePath", "Classes/Debug/ReporterBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReporterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReporterBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReporterBase_Statics::ClassParams = {
		&UReporterBase::StaticClass,
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
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UReporterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReporterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReporterBase()
	{
		if (!Z_Registration_Info_UClass_UReporterBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReporterBase.OuterSingleton, Z_Construct_UClass_UReporterBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReporterBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UReporterBase>()
	{
		return UReporterBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReporterBase);
	UReporterBase::~UReporterBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_Statics::EnumInfo[] = {
		{ EReporterLineStyle_StaticEnum, TEXT("EReporterLineStyle"), &Z_Registration_Info_UEnum_EReporterLineStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 886038855U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReporterBase, UReporterBase::StaticClass, TEXT("UReporterBase"), &Z_Registration_Info_UClass_UReporterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReporterBase), 1845424656U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_2849402177(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
