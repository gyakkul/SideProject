// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_TunnelBoundary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_TunnelBoundary() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_TunnelBoundary();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_TunnelBoundary_NoRegister();
	BLUEPRINTGRAPH_API UEnum* Z_Construct_UEnum_BlueprintGraph_ETunnelBoundaryType();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETunnelBoundaryType;
	static UEnum* ETunnelBoundaryType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETunnelBoundaryType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETunnelBoundaryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlueprintGraph_ETunnelBoundaryType, (UObject*)Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("ETunnelBoundaryType"));
		}
		return Z_Registration_Info_UEnum_ETunnelBoundaryType.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UEnum* StaticEnum<ETunnelBoundaryType>()
	{
		return ETunnelBoundaryType_StaticEnum();
	}
	struct Z_Construct_UEnum_BlueprintGraph_ETunnelBoundaryType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BlueprintGraph_ETunnelBoundaryType_Statics::Enumerators[] = {
		{ "ETunnelBoundaryType::Unknown", (int64)ETunnelBoundaryType::Unknown },
		{ "ETunnelBoundaryType::EntrySite", (int64)ETunnelBoundaryType::EntrySite },
		{ "ETunnelBoundaryType::InputSite", (int64)ETunnelBoundaryType::InputSite },
		{ "ETunnelBoundaryType::OutputSite", (int64)ETunnelBoundaryType::OutputSite },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BlueprintGraph_ETunnelBoundaryType_Statics::Enum_MetaDataParams[] = {
		{ "EntrySite.Name", "ETunnelBoundaryType::EntrySite" },
		{ "InputSite.Name", "ETunnelBoundaryType::InputSite" },
		{ "ModuleRelativePath", "Classes/K2Node_TunnelBoundary.h" },
		{ "OutputSite.Name", "ETunnelBoundaryType::OutputSite" },
		{ "Unknown.Name", "ETunnelBoundaryType::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlueprintGraph_ETunnelBoundaryType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BlueprintGraph,
		nullptr,
		"ETunnelBoundaryType",
		"ETunnelBoundaryType",
		Z_Construct_UEnum_BlueprintGraph_ETunnelBoundaryType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintGraph_ETunnelBoundaryType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BlueprintGraph_ETunnelBoundaryType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintGraph_ETunnelBoundaryType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BlueprintGraph_ETunnelBoundaryType()
	{
		if (!Z_Registration_Info_UEnum_ETunnelBoundaryType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETunnelBoundaryType.InnerSingleton, Z_Construct_UEnum_BlueprintGraph_ETunnelBoundaryType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETunnelBoundaryType.InnerSingleton;
	}
	void UK2Node_TunnelBoundary::StaticRegisterNativesUK2Node_TunnelBoundary()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_TunnelBoundary);
	UClass* Z_Construct_UClass_UK2Node_TunnelBoundary_NoRegister()
	{
		return UK2Node_TunnelBoundary::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_TunnelBoundary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BaseName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TunnelBoundaryType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TunnelBoundaryType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TunnelBoundaryType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_TunnelBoundary.h" },
		{ "ModuleRelativePath", "Classes/K2Node_TunnelBoundary.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::NewProp_BaseName_MetaData[] = {
		{ "Comment", "/** Base Name */" },
		{ "ModuleRelativePath", "Classes/K2Node_TunnelBoundary.h" },
		{ "ToolTip", "Base Name" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::NewProp_BaseName = { "BaseName", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_TunnelBoundary, BaseName), METADATA_PARAMS(Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::NewProp_BaseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::NewProp_BaseName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::NewProp_TunnelBoundaryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::NewProp_TunnelBoundaryType_MetaData[] = {
		{ "Comment", "/** Node Type */" },
		{ "ModuleRelativePath", "Classes/K2Node_TunnelBoundary.h" },
		{ "ToolTip", "Node Type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::NewProp_TunnelBoundaryType = { "TunnelBoundaryType", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_TunnelBoundary, TunnelBoundaryType), Z_Construct_UEnum_BlueprintGraph_ETunnelBoundaryType, METADATA_PARAMS(Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::NewProp_TunnelBoundaryType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::NewProp_TunnelBoundaryType_MetaData)) }; // 3041065269
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::NewProp_BaseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::NewProp_TunnelBoundaryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::NewProp_TunnelBoundaryType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_TunnelBoundary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::ClassParams = {
		&UK2Node_TunnelBoundary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_TunnelBoundary()
	{
		if (!Z_Registration_Info_UClass_UK2Node_TunnelBoundary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_TunnelBoundary.OuterSingleton, Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_TunnelBoundary.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_TunnelBoundary>()
	{
		return UK2Node_TunnelBoundary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_TunnelBoundary);
	UK2Node_TunnelBoundary::~UK2Node_TunnelBoundary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_TunnelBoundary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_TunnelBoundary_h_Statics::EnumInfo[] = {
		{ ETunnelBoundaryType_StaticEnum, TEXT("ETunnelBoundaryType"), &Z_Registration_Info_UEnum_ETunnelBoundaryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3041065269U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_TunnelBoundary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_TunnelBoundary, UK2Node_TunnelBoundary::StaticClass, TEXT("UK2Node_TunnelBoundary"), &Z_Registration_Info_UClass_UK2Node_TunnelBoundary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_TunnelBoundary), 222933921U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_TunnelBoundary_h_2791121948(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_TunnelBoundary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_TunnelBoundary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_TunnelBoundary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_TunnelBoundary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
