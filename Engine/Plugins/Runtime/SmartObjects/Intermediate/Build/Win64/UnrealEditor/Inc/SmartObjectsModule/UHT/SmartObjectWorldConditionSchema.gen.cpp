// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldConditions/SmartObjectWorldConditionSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectWorldConditionSchema() {}
// Cross Module References
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectWorldConditionSchema();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectWorldConditionSchema_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsModule();
	WORLDCONDITIONS_API UClass* Z_Construct_UClass_UWorldConditionSchema();
// End Cross Module References
	void USmartObjectWorldConditionSchema::StaticRegisterNativesUSmartObjectWorldConditionSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmartObjectWorldConditionSchema);
	UClass* Z_Construct_UClass_USmartObjectWorldConditionSchema_NoRegister()
	{
		return USmartObjectWorldConditionSchema::StaticClass();
	}
	struct Z_Construct_UClass_USmartObjectWorldConditionSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmartObjectWorldConditionSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldConditionSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectWorldConditionSchema_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * World Condition schema describing the data conditons and context data available for Smart Object conditions.\n */" },
		{ "IncludePath", "WorldConditions/SmartObjectWorldConditionSchema.h" },
		{ "ModuleRelativePath", "Public/WorldConditions/SmartObjectWorldConditionSchema.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "World Condition schema describing the data conditons and context data available for Smart Object conditions." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmartObjectWorldConditionSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartObjectWorldConditionSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USmartObjectWorldConditionSchema_Statics::ClassParams = {
		&USmartObjectWorldConditionSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USmartObjectWorldConditionSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectWorldConditionSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USmartObjectWorldConditionSchema()
	{
		if (!Z_Registration_Info_UClass_USmartObjectWorldConditionSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmartObjectWorldConditionSchema.OuterSingleton, Z_Construct_UClass_USmartObjectWorldConditionSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USmartObjectWorldConditionSchema.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UClass* StaticClass<USmartObjectWorldConditionSchema>()
	{
		return USmartObjectWorldConditionSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmartObjectWorldConditionSchema);
	USmartObjectWorldConditionSchema::~USmartObjectWorldConditionSchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_WorldConditions_SmartObjectWorldConditionSchema_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_WorldConditions_SmartObjectWorldConditionSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USmartObjectWorldConditionSchema, USmartObjectWorldConditionSchema::StaticClass, TEXT("USmartObjectWorldConditionSchema"), &Z_Registration_Info_UClass_USmartObjectWorldConditionSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmartObjectWorldConditionSchema), 434311105U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_WorldConditions_SmartObjectWorldConditionSchema_h_3081225605(TEXT("/Script/SmartObjectsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_WorldConditions_SmartObjectWorldConditionSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_WorldConditions_SmartObjectWorldConditionSchema_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
