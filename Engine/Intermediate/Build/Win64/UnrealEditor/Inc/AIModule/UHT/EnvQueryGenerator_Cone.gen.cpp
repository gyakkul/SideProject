// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h"
#include "../../AIModule/Classes/DataProviders/AIDataProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_Cone() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_Cone();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_Cone_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UEnvQueryGenerator_Cone::StaticRegisterNativesUEnvQueryGenerator_Cone()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryGenerator_Cone);
	UClass* Z_Construct_UClass_UEnvQueryGenerator_Cone_NoRegister()
	{
		return UEnvQueryGenerator_Cone::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlignedPointsDistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlignedPointsDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConeDegrees_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConeDegrees;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngleStep_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngleStep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterActor_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CenterActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeContextLocation_MetaData[];
#endif
		static void NewProp_bIncludeContextLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeContextLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Points: Cone" },
		{ "IncludePath", "EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_AlignedPointsDistance_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** Distance between each point of the same angle */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h" },
		{ "ToolTip", "Distance between each point of the same angle" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_AlignedPointsDistance = { "AlignedPointsDistance", nullptr, (EPropertyFlags)0x0020088000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_Cone, AlignedPointsDistance), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_AlignedPointsDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_AlignedPointsDistance_MetaData)) }; // 2399041136
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_ConeDegrees_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** Maximum degrees of the generated cone */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h" },
		{ "ToolTip", "Maximum degrees of the generated cone" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_ConeDegrees = { "ConeDegrees", nullptr, (EPropertyFlags)0x0020088000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_Cone, ConeDegrees), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_ConeDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_ConeDegrees_MetaData)) }; // 2399041136
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_AngleStep_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** The step of the angle increase. Angle step must be >=1\n\x09 *  Smaller values generate less items\n\x09 */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h" },
		{ "ToolTip", "The step of the angle increase. Angle step must be >=1\nSmaller values generate less items" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_AngleStep = { "AngleStep", nullptr, (EPropertyFlags)0x0020088000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_Cone, AngleStep), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_AngleStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_AngleStep_MetaData)) }; // 2399041136
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_Range_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** Generation distance */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h" },
		{ "ToolTip", "Generation distance" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0020088000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_Cone, Range), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_Range_MetaData)) }; // 2399041136
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_CenterActor_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** The actor (or actors) that will generate a cone in their facing direction */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h" },
		{ "ToolTip", "The actor (or actors) that will generate a cone in their facing direction" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_CenterActor = { "CenterActor", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_Cone, CenterActor), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_CenterActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_CenterActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_bIncludeContextLocation_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** Whether to include CenterActors' locations when generating items. \n\x09 *\x09Note that this option skips the MinAngledPointsDistance parameter. */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h" },
		{ "ToolTip", "Whether to include CenterActors' locations when generating items.\n    Note that this option skips the MinAngledPointsDistance parameter." },
	};
#endif
	void Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_bIncludeContextLocation_SetBit(void* Obj)
	{
		((UEnvQueryGenerator_Cone*)Obj)->bIncludeContextLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_bIncludeContextLocation = { "bIncludeContextLocation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEnvQueryGenerator_Cone), &Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_bIncludeContextLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_bIncludeContextLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_bIncludeContextLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_AlignedPointsDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_ConeDegrees,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_AngleStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_Range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_CenterActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_bIncludeContextLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryGenerator_Cone>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::ClassParams = {
		&UEnvQueryGenerator_Cone::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryGenerator_Cone()
	{
		if (!Z_Registration_Info_UClass_UEnvQueryGenerator_Cone.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryGenerator_Cone.OuterSingleton, Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnvQueryGenerator_Cone.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryGenerator_Cone>()
	{
		return UEnvQueryGenerator_Cone::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_Cone);
	UEnvQueryGenerator_Cone::~UEnvQueryGenerator_Cone() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_Cone_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_Cone_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryGenerator_Cone, UEnvQueryGenerator_Cone::StaticClass, TEXT("UEnvQueryGenerator_Cone"), &Z_Registration_Info_UClass_UEnvQueryGenerator_Cone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryGenerator_Cone), 2996051453U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_Cone_h_1077716777(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_Cone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_Cone_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
