// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Debug/ReporterGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReporterGraph() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UReporterBase();
	ENGINE_API UClass* Z_Construct_UClass_UReporterGraph();
	ENGINE_API UClass* Z_Construct_UClass_UReporterGraph_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EGraphAxisStyle();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EGraphDataStyle();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELegendPosition();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGraphAxisStyle;
	static UEnum* EGraphAxisStyle_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGraphAxisStyle.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGraphAxisStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EGraphAxisStyle, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EGraphAxisStyle"));
		}
		return Z_Registration_Info_UEnum_EGraphAxisStyle.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EGraphAxisStyle::Type>()
	{
		return EGraphAxisStyle_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EGraphAxisStyle_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EGraphAxisStyle_Statics::Enumerators[] = {
		{ "EGraphAxisStyle::Lines", (int64)EGraphAxisStyle::Lines },
		{ "EGraphAxisStyle::Notches", (int64)EGraphAxisStyle::Notches },
		{ "EGraphAxisStyle::Grid", (int64)EGraphAxisStyle::Grid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EGraphAxisStyle_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Draw styles for axes. */" },
		{ "Grid.Name", "EGraphAxisStyle::Grid" },
		{ "Lines.Name", "EGraphAxisStyle::Lines" },
		{ "ModuleRelativePath", "Classes/Debug/ReporterGraph.h" },
		{ "Notches.Name", "EGraphAxisStyle::Notches" },
		{ "ToolTip", "Draw styles for axes." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EGraphAxisStyle_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EGraphAxisStyle",
		"EGraphAxisStyle::Type",
		Z_Construct_UEnum_Engine_EGraphAxisStyle_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EGraphAxisStyle_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EGraphAxisStyle_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EGraphAxisStyle_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EGraphAxisStyle()
	{
		if (!Z_Registration_Info_UEnum_EGraphAxisStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGraphAxisStyle.InnerSingleton, Z_Construct_UEnum_Engine_EGraphAxisStyle_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGraphAxisStyle.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGraphDataStyle;
	static UEnum* EGraphDataStyle_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGraphDataStyle.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGraphDataStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EGraphDataStyle, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EGraphDataStyle"));
		}
		return Z_Registration_Info_UEnum_EGraphDataStyle.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EGraphDataStyle::Type>()
	{
		return EGraphDataStyle_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EGraphDataStyle_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EGraphDataStyle_Statics::Enumerators[] = {
		{ "EGraphDataStyle::Lines", (int64)EGraphDataStyle::Lines },
		{ "EGraphDataStyle::Filled", (int64)EGraphDataStyle::Filled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EGraphDataStyle_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Draw styles for data. */" },
		{ "Filled.Name", "EGraphDataStyle::Filled" },
		{ "Lines.Name", "EGraphDataStyle::Lines" },
		{ "ModuleRelativePath", "Classes/Debug/ReporterGraph.h" },
		{ "ToolTip", "Draw styles for data." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EGraphDataStyle_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EGraphDataStyle",
		"EGraphDataStyle::Type",
		Z_Construct_UEnum_Engine_EGraphDataStyle_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EGraphDataStyle_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EGraphDataStyle_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EGraphDataStyle_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EGraphDataStyle()
	{
		if (!Z_Registration_Info_UEnum_EGraphDataStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGraphDataStyle.InnerSingleton, Z_Construct_UEnum_Engine_EGraphDataStyle_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGraphDataStyle.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELegendPosition;
	static UEnum* ELegendPosition_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELegendPosition.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELegendPosition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELegendPosition, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ELegendPosition"));
		}
		return Z_Registration_Info_UEnum_ELegendPosition.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ELegendPosition::Type>()
	{
		return ELegendPosition_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ELegendPosition_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ELegendPosition_Statics::Enumerators[] = {
		{ "ELegendPosition::Outside", (int64)ELegendPosition::Outside },
		{ "ELegendPosition::Inside", (int64)ELegendPosition::Inside },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ELegendPosition_Statics::Enum_MetaDataParams[] = {
		{ "Inside.Name", "ELegendPosition::Inside" },
		{ "ModuleRelativePath", "Classes/Debug/ReporterGraph.h" },
		{ "Outside.Name", "ELegendPosition::Outside" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ELegendPosition_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ELegendPosition",
		"ELegendPosition::Type",
		Z_Construct_UEnum_Engine_ELegendPosition_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELegendPosition_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ELegendPosition_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELegendPosition_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ELegendPosition()
	{
		if (!Z_Registration_Info_UEnum_ELegendPosition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELegendPosition.InnerSingleton, Z_Construct_UEnum_Engine_ELegendPosition_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELegendPosition.InnerSingleton;
	}
	void UReporterGraph::StaticRegisterNativesUReporterGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReporterGraph);
	UClass* Z_Construct_UClass_UReporterGraph_NoRegister()
	{
		return UReporterGraph::StaticClass();
	}
	struct Z_Construct_UClass_UReporterGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReporterGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReporterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReporterGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Debug/ReporterGraph.h" },
		{ "ModuleRelativePath", "Classes/Debug/ReporterGraph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReporterGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReporterGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReporterGraph_Statics::ClassParams = {
		&UReporterGraph::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UReporterGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReporterGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReporterGraph()
	{
		if (!Z_Registration_Info_UClass_UReporterGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReporterGraph.OuterSingleton, Z_Construct_UClass_UReporterGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReporterGraph.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UReporterGraph>()
	{
		return UReporterGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReporterGraph);
	UReporterGraph::~UReporterGraph() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_Statics::EnumInfo[] = {
		{ EGraphAxisStyle_StaticEnum, TEXT("EGraphAxisStyle"), &Z_Registration_Info_UEnum_EGraphAxisStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3731355382U) },
		{ EGraphDataStyle_StaticEnum, TEXT("EGraphDataStyle"), &Z_Registration_Info_UEnum_EGraphDataStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3634877179U) },
		{ ELegendPosition_StaticEnum, TEXT("ELegendPosition"), &Z_Registration_Info_UEnum_ELegendPosition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1410522893U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReporterGraph, UReporterGraph::StaticClass, TEXT("UReporterGraph"), &Z_Registration_Info_UClass_UReporterGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReporterGraph), 4150679679U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_3823456746(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
