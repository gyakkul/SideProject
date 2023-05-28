// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Donut.h"
#include "../../AIModule/Classes/DataProviders/AIDataProvider.h"
#include "../../AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_Donut() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_Donut();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_Donut_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderIntValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvDirection();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UEnvQueryGenerator_Donut::StaticRegisterNativesUEnvQueryGenerator_Donut()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryGenerator_Donut);
	UClass* Z_Construct_UClass_UEnvQueryGenerator_Donut_NoRegister()
	{
		return UEnvQueryGenerator_Donut::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerRadius_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InnerRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OuterRadius_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OuterRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfRings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NumberOfRings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointsPerRing_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointsPerRing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArcDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArcDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArcAngle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArcAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSpiralPattern_MetaData[];
#endif
		static void NewProp_bUseSpiralPattern_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSpiralPattern;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefineArc_MetaData[];
#endif
		static void NewProp_bDefineArc_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefineArc;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Points: Donut" },
		{ "IncludePath", "EnvironmentQuery/Generators/EnvQueryGenerator_Donut.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Donut.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_InnerRadius_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** min distance between point and context */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Donut.h" },
		{ "ToolTip", "min distance between point and context" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_InnerRadius = { "InnerRadius", nullptr, (EPropertyFlags)0x0010008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_Donut, InnerRadius), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_InnerRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_InnerRadius_MetaData)) }; // 2399041136
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_OuterRadius_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** max distance between point and context */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Donut.h" },
		{ "ToolTip", "max distance between point and context" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_OuterRadius = { "OuterRadius", nullptr, (EPropertyFlags)0x0010008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_Donut, OuterRadius), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_OuterRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_OuterRadius_MetaData)) }; // 2399041136
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_NumberOfRings_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** number of rings to generate */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Donut.h" },
		{ "ToolTip", "number of rings to generate" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_NumberOfRings = { "NumberOfRings", nullptr, (EPropertyFlags)0x0010008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_Donut, NumberOfRings), Z_Construct_UScriptStruct_FAIDataProviderIntValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_NumberOfRings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_NumberOfRings_MetaData)) }; // 2109449233
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_PointsPerRing_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** number of items to generate for each ring */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Donut.h" },
		{ "ToolTip", "number of items to generate for each ring" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_PointsPerRing = { "PointsPerRing", nullptr, (EPropertyFlags)0x0010008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_Donut, PointsPerRing), Z_Construct_UScriptStruct_FAIDataProviderIntValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_PointsPerRing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_PointsPerRing_MetaData)) }; // 2109449233
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_ArcDirection_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** If you generate items on a piece of circle you define direction of Arc cut here */" },
		{ "EditCondition", "bDefineArc" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Donut.h" },
		{ "ToolTip", "If you generate items on a piece of circle you define direction of Arc cut here" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_ArcDirection = { "ArcDirection", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_Donut, ArcDirection), Z_Construct_UScriptStruct_FEnvDirection, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_ArcDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_ArcDirection_MetaData)) }; // 3711099915
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_ArcAngle_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** If you generate items on a piece of circle you define angle of Arc cut here */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Donut.h" },
		{ "ToolTip", "If you generate items on a piece of circle you define angle of Arc cut here" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_ArcAngle = { "ArcAngle", nullptr, (EPropertyFlags)0x0010008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_Donut, ArcAngle), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_ArcAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_ArcAngle_MetaData)) }; // 2399041136
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_bUseSpiralPattern_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** If true, the rings of the wheel will be rotated in a spiral pattern.  If false, they will all be at a zero\n\x09  * rotation, looking more like the spokes on a wheel.  */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Donut.h" },
		{ "ToolTip", "If true, the rings of the wheel will be rotated in a spiral pattern.  If false, they will all be at a zero\nrotation, looking more like the spokes on a wheel." },
	};
#endif
	void Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_bUseSpiralPattern_SetBit(void* Obj)
	{
		((UEnvQueryGenerator_Donut*)Obj)->bUseSpiralPattern = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_bUseSpiralPattern = { "bUseSpiralPattern", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEnvQueryGenerator_Donut), &Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_bUseSpiralPattern_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_bUseSpiralPattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_bUseSpiralPattern_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** context */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Donut.h" },
		{ "ToolTip", "context" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_Donut, Center), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_bDefineArc_MetaData[] = {
		{ "Category", "Generator" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Donut.h" },
	};
#endif
	void Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_bDefineArc_SetBit(void* Obj)
	{
		((UEnvQueryGenerator_Donut*)Obj)->bDefineArc = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_bDefineArc = { "bDefineArc", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEnvQueryGenerator_Donut), &Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_bDefineArc_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_bDefineArc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_bDefineArc_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_InnerRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_OuterRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_NumberOfRings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_PointsPerRing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_ArcDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_ArcAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_bUseSpiralPattern,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_bDefineArc,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryGenerator_Donut>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::ClassParams = {
		&UEnvQueryGenerator_Donut::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryGenerator_Donut()
	{
		if (!Z_Registration_Info_UClass_UEnvQueryGenerator_Donut.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryGenerator_Donut.OuterSingleton, Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnvQueryGenerator_Donut.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryGenerator_Donut>()
	{
		return UEnvQueryGenerator_Donut::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_Donut);
	UEnvQueryGenerator_Donut::~UEnvQueryGenerator_Donut() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_Donut_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_Donut_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryGenerator_Donut, UEnvQueryGenerator_Donut::StaticClass, TEXT("UEnvQueryGenerator_Donut"), &Z_Registration_Info_UClass_UEnvQueryGenerator_Donut, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryGenerator_Donut), 3485878635U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_Donut_h_1955180756(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_Donut_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_Donut_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
