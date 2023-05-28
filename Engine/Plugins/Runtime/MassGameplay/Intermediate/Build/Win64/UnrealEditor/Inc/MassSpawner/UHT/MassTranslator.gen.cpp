// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTranslator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTranslator() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassTranslator();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassTranslator_NoRegister();
	MASSSPAWNER_API UEnum* Z_Construct_UEnum_MassSpawner_EMassTranslationDirection();
	UPackage* Z_Construct_UPackage__Script_MassSpawner();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMassTranslationDirection;
	static UEnum* EMassTranslationDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMassTranslationDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMassTranslationDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassSpawner_EMassTranslationDirection, (UObject*)Z_Construct_UPackage__Script_MassSpawner(), TEXT("EMassTranslationDirection"));
		}
		return Z_Registration_Info_UEnum_EMassTranslationDirection.OuterSingleton;
	}
	template<> MASSSPAWNER_API UEnum* StaticEnum<EMassTranslationDirection>()
	{
		return EMassTranslationDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_MassSpawner_EMassTranslationDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MassSpawner_EMassTranslationDirection_Statics::Enumerators[] = {
		{ "EMassTranslationDirection::None", (int64)EMassTranslationDirection::None },
		{ "EMassTranslationDirection::InitializationOnly", (int64)EMassTranslationDirection::InitializationOnly },
		{ "EMassTranslationDirection::ActorToMass", (int64)EMassTranslationDirection::ActorToMass },
		{ "EMassTranslationDirection::MassToActor", (int64)EMassTranslationDirection::MassToActor },
		{ "EMassTranslationDirection::BothWays", (int64)EMassTranslationDirection::BothWays },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MassSpawner_EMassTranslationDirection_Statics::Enum_MetaDataParams[] = {
		{ "ActorToMass.Name", "EMassTranslationDirection::ActorToMass" },
		{ "BothWays.Name", "EMassTranslationDirection::BothWays" },
		{ "InitializationOnly.Name", "EMassTranslationDirection::InitializationOnly" },
		{ "MassToActor.Name", "EMassTranslationDirection::MassToActor" },
		{ "ModuleRelativePath", "Public/MassTranslator.h" },
		{ "None.Name", "EMassTranslationDirection::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassSpawner_EMassTranslationDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MassSpawner,
		nullptr,
		"EMassTranslationDirection",
		"EMassTranslationDirection",
		Z_Construct_UEnum_MassSpawner_EMassTranslationDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MassSpawner_EMassTranslationDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MassSpawner_EMassTranslationDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MassSpawner_EMassTranslationDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MassSpawner_EMassTranslationDirection()
	{
		if (!Z_Registration_Info_UEnum_EMassTranslationDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMassTranslationDirection.InnerSingleton, Z_Construct_UEnum_MassSpawner_EMassTranslationDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMassTranslationDirection.InnerSingleton;
	}
	void UMassTranslator::StaticRegisterNativesUMassTranslator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTranslator);
	UClass* Z_Construct_UClass_UMassTranslator_NoRegister()
	{
		return UMassTranslator::StaticClass();
	}
	struct Z_Construct_UClass_UMassTranslator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTranslator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassSpawner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTranslator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n *  A class that's responsible for translation between UObjects and Mass. A translator knows how to initialize \n *  fragments related to the UClass that the given translator cares about. It can also be used at runtime to \n *  copy values from UObjects to fragments and back.\n */" },
		{ "IncludePath", "MassTranslator.h" },
		{ "ModuleRelativePath", "Public/MassTranslator.h" },
		{ "ToolTip", "A class that's responsible for translation between UObjects and Mass. A translator knows how to initialize\nfragments related to the UClass that the given translator cares about. It can also be used at runtime to\ncopy values from UObjects to fragments and back." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTranslator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTranslator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTranslator_Statics::ClassParams = {
		&UMassTranslator::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x401030A7u,
		METADATA_PARAMS(Z_Construct_UClass_UMassTranslator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassTranslator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassTranslator()
	{
		if (!Z_Registration_Info_UClass_UMassTranslator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTranslator.OuterSingleton, Z_Construct_UClass_UMassTranslator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTranslator.OuterSingleton;
	}
	template<> MASSSPAWNER_API UClass* StaticClass<UMassTranslator>()
	{
		return UMassTranslator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTranslator);
	UMassTranslator::~UMassTranslator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_Statics::EnumInfo[] = {
		{ EMassTranslationDirection_StaticEnum, TEXT("EMassTranslationDirection"), &Z_Registration_Info_UEnum_EMassTranslationDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 702585311U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTranslator, UMassTranslator::StaticClass, TEXT("UMassTranslator"), &Z_Registration_Info_UClass_UMassTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTranslator), 615303978U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_763225151(TEXT("/Script/MassSpawner"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
