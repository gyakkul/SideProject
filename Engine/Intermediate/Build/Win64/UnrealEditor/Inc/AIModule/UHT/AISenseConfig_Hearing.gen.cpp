// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/Perception/AISenseConfig_Hearing.h"
#include "../../AIModule/Classes/Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISenseConfig_Hearing() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Hearing_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Hearing();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Hearing_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAISenseAffiliationFilter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UAISenseConfig_Hearing::StaticRegisterNativesUAISenseConfig_Hearing()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISenseConfig_Hearing);
	UClass* Z_Construct_UClass_UAISenseConfig_Hearing_NoRegister()
	{
		return UAISenseConfig_Hearing::StaticClass();
	}
	struct Z_Construct_UClass_UAISenseConfig_Hearing_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Implementation_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Implementation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HearingRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HearingRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoSHearingRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LoSHearingRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLoSHearing_MetaData[];
#endif
		static void NewProp_bUseLoSHearing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLoSHearing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetectionByAffiliation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DetectionByAffiliation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISenseConfig_Hearing_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISenseConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Hearing_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "AI Hearing config" },
		{ "IncludePath", "Perception/AISenseConfig_Hearing.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Hearing.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_Implementation_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Hearing.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_Implementation = { "Implementation", nullptr, (EPropertyFlags)0x0014000002014015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISenseConfig_Hearing, Implementation), Z_Construct_UClass_UClass, Z_Construct_UClass_UAISense_Hearing_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_Implementation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_Implementation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_HearingRange_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Hearing.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_HearingRange = { "HearingRange", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISenseConfig_Hearing, HearingRange), METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_HearingRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_HearingRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_LoSHearingRange_MetaData[] = {
		{ "Category", "Sense" },
		{ "EditCondition", "bUseLoSHearing" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Hearing.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_LoSHearingRange = { "LoSHearingRange", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISenseConfig_Hearing, LoSHearingRange), METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_LoSHearingRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_LoSHearingRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_bUseLoSHearing_MetaData[] = {
		{ "Category", "Sense" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Hearing.h" },
	};
#endif
	void Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_bUseLoSHearing_SetBit(void* Obj)
	{
		((UAISenseConfig_Hearing*)Obj)->bUseLoSHearing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_bUseLoSHearing = { "bUseLoSHearing", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAISenseConfig_Hearing), &Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_bUseLoSHearing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_bUseLoSHearing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_bUseLoSHearing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_DetectionByAffiliation_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Hearing.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_DetectionByAffiliation = { "DetectionByAffiliation", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISenseConfig_Hearing, DetectionByAffiliation), Z_Construct_UScriptStruct_FAISenseAffiliationFilter, METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_DetectionByAffiliation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_DetectionByAffiliation_MetaData)) }; // 1809039249
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISenseConfig_Hearing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_Implementation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_HearingRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_LoSHearingRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_bUseLoSHearing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_DetectionByAffiliation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISenseConfig_Hearing_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISenseConfig_Hearing>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISenseConfig_Hearing_Statics::ClassParams = {
		&UAISenseConfig_Hearing::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISenseConfig_Hearing_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Hearing_Statics::PropPointers),
		0,
		0x001010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Hearing_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Hearing_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISenseConfig_Hearing()
	{
		if (!Z_Registration_Info_UClass_UAISenseConfig_Hearing.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISenseConfig_Hearing.OuterSingleton, Z_Construct_UClass_UAISenseConfig_Hearing_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAISenseConfig_Hearing.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UAISenseConfig_Hearing>()
	{
		return UAISenseConfig_Hearing::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseConfig_Hearing);
	UAISenseConfig_Hearing::~UAISenseConfig_Hearing() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Hearing_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Hearing_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAISenseConfig_Hearing, UAISenseConfig_Hearing::StaticClass, TEXT("UAISenseConfig_Hearing"), &Z_Registration_Info_UClass_UAISenseConfig_Hearing, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISenseConfig_Hearing), 4136055160U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Hearing_h_1395754873(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Hearing_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Hearing_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
