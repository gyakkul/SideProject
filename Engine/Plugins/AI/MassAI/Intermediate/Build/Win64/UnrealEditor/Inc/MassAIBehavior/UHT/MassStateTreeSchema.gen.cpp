// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassStateTreeSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassStateTreeSchema() {}
// Cross Module References
	MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassStateTreeSchema();
	MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassStateTreeSchema_NoRegister();
	STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeSchema();
	UPackage* Z_Construct_UPackage__Script_MassAIBehavior();
// End Cross Module References
	void UMassStateTreeSchema::StaticRegisterNativesUMassStateTreeSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassStateTreeSchema);
	UClass* Z_Construct_UClass_UMassStateTreeSchema_NoRegister()
	{
		return UMassStateTreeSchema::StaticClass();
	}
	struct Z_Construct_UClass_UMassStateTreeSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassStateTreeSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStateTreeSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassStateTreeSchema_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * StateTree for Mass behaviors.\n */" },
		{ "CommonSchema", "" },
		{ "DisplayName", "Mass Behavior" },
		{ "IncludePath", "MassStateTreeSchema.h" },
		{ "ModuleRelativePath", "Public/MassStateTreeSchema.h" },
		{ "ToolTip", "StateTree for Mass behaviors." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassStateTreeSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassStateTreeSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassStateTreeSchema_Statics::ClassParams = {
		&UMassStateTreeSchema::StaticClass,
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
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassStateTreeSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassStateTreeSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassStateTreeSchema()
	{
		if (!Z_Registration_Info_UClass_UMassStateTreeSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassStateTreeSchema.OuterSingleton, Z_Construct_UClass_UMassStateTreeSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassStateTreeSchema.OuterSingleton;
	}
	template<> MASSAIBEHAVIOR_API UClass* StaticClass<UMassStateTreeSchema>()
	{
		return UMassStateTreeSchema::StaticClass();
	}
	UMassStateTreeSchema::UMassStateTreeSchema(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassStateTreeSchema);
	UMassStateTreeSchema::~UMassStateTreeSchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeSchema_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassStateTreeSchema, UMassStateTreeSchema::StaticClass, TEXT("UMassStateTreeSchema"), &Z_Registration_Info_UClass_UMassStateTreeSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassStateTreeSchema), 4175867747U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeSchema_h_2791924149(TEXT("/Script/MassAIBehavior"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeSchema_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
