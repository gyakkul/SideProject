// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/EnvironmentQuery/Generators/EnvQueryGenerator_ActorsOfClass.h"
#include "../../AIModule/Classes/DataProviders/AIDataProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_ActorsOfClass() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderBoolValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UEnvQueryGenerator_ActorsOfClass::StaticRegisterNativesUEnvQueryGenerator_ActorsOfClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryGenerator_ActorsOfClass);
	UClass* Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_NoRegister()
	{
		return UEnvQueryGenerator_ActorsOfClass::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchedActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SearchedActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenerateOnlyActorsInRadius_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GenerateOnlyActorsInRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchRadius_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SearchRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchCenter_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SearchCenter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Actors Of Class" },
		{ "IncludePath", "EnvironmentQuery/Generators/EnvQueryGenerator_ActorsOfClass.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_ActorsOfClass.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics::NewProp_SearchedActorClass_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_ActorsOfClass.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics::NewProp_SearchedActorClass = { "SearchedActorClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_ActorsOfClass, SearchedActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics::NewProp_SearchedActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics::NewProp_SearchedActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics::NewProp_GenerateOnlyActorsInRadius_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** If true, this will only returns actors of the specified class within the SearchRadius of the SearchCenter context.  If false, it will return ALL actors of the specified class in the world. */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_ActorsOfClass.h" },
		{ "ToolTip", "If true, this will only returns actors of the specified class within the SearchRadius of the SearchCenter context.  If false, it will return ALL actors of the specified class in the world." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics::NewProp_GenerateOnlyActorsInRadius = { "GenerateOnlyActorsInRadius", nullptr, (EPropertyFlags)0x0010008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_ActorsOfClass, GenerateOnlyActorsInRadius), Z_Construct_UScriptStruct_FAIDataProviderBoolValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics::NewProp_GenerateOnlyActorsInRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics::NewProp_GenerateOnlyActorsInRadius_MetaData)) }; // 309611824
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics::NewProp_SearchRadius_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** Max distance of path between point and context.  NOTE: Zero and negative values will never return any results if\n\x09  * UseRadius is true.  \"Within\" requires Distance < Radius.  Actors ON the circle (Distance == Radius) are excluded.\n\x09  */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_ActorsOfClass.h" },
		{ "ToolTip", "Max distance of path between point and context.  NOTE: Zero and negative values will never return any results if\nUseRadius is true.  \"Within\" requires Distance < Radius.  Actors ON the circle (Distance == Radius) are excluded." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics::NewProp_SearchRadius = { "SearchRadius", nullptr, (EPropertyFlags)0x0010008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_ActorsOfClass, SearchRadius), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics::NewProp_SearchRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics::NewProp_SearchRadius_MetaData)) }; // 2399041136
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics::NewProp_SearchCenter_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** context */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_ActorsOfClass.h" },
		{ "ToolTip", "context" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics::NewProp_SearchCenter = { "SearchCenter", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_ActorsOfClass, SearchCenter), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics::NewProp_SearchCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics::NewProp_SearchCenter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics::NewProp_SearchedActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics::NewProp_GenerateOnlyActorsInRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics::NewProp_SearchRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics::NewProp_SearchCenter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryGenerator_ActorsOfClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics::ClassParams = {
		&UEnvQueryGenerator_ActorsOfClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass()
	{
		if (!Z_Registration_Info_UClass_UEnvQueryGenerator_ActorsOfClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryGenerator_ActorsOfClass.OuterSingleton, Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnvQueryGenerator_ActorsOfClass.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryGenerator_ActorsOfClass>()
	{
		return UEnvQueryGenerator_ActorsOfClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_ActorsOfClass);
	UEnvQueryGenerator_ActorsOfClass::~UEnvQueryGenerator_ActorsOfClass() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_ActorsOfClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_ActorsOfClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass, UEnvQueryGenerator_ActorsOfClass::StaticClass, TEXT("UEnvQueryGenerator_ActorsOfClass"), &Z_Registration_Info_UClass_UEnvQueryGenerator_ActorsOfClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryGenerator_ActorsOfClass), 4051566764U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_ActorsOfClass_h_4050847052(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_ActorsOfClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_ActorsOfClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
