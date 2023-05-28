// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeSchema() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeSchema();
	STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeSchema_NoRegister();
	UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References
	void UStateTreeSchema::StaticRegisterNativesUStateTreeSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateTreeSchema);
	UClass* Z_Construct_UClass_UStateTreeSchema_NoRegister()
	{
		return UStateTreeSchema::StaticClass();
	}
	struct Z_Construct_UClass_UStateTreeSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStateTreeSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeSchema_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Schema describing which inputs, evaluators, and tasks a StateTree can contain.\n * Each StateTree asset saves the schema class name in asset data tags, which can be\n * used to limit which StatTree assets can be selected per use case, i.e.:\n *\n *\x09UPROPERTY(EditDefaultsOnly, Category = AI, meta=(RequiredAssetDataTags=\"Schema=StateTreeSchema_SupaDupa\"))\n *\x09UStateTree* StateTree;\n *\n */" },
		{ "IncludePath", "StateTreeSchema.h" },
		{ "ModuleRelativePath", "Public/StateTreeSchema.h" },
		{ "ToolTip", "Schema describing which inputs, evaluators, and tasks a StateTree can contain.\nEach StateTree asset saves the schema class name in asset data tags, which can be\nused to limit which StatTree assets can be selected per use case, i.e.:\n\n    UPROPERTY(EditDefaultsOnly, Category = AI, meta=(RequiredAssetDataTags=\"Schema=StateTreeSchema_SupaDupa\"))\n    UStateTree* StateTree;" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateTreeSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateTreeSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateTreeSchema_Statics::ClassParams = {
		&UStateTreeSchema::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UStateTreeSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStateTreeSchema()
	{
		if (!Z_Registration_Info_UClass_UStateTreeSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateTreeSchema.OuterSingleton, Z_Construct_UClass_UStateTreeSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStateTreeSchema.OuterSingleton;
	}
	template<> STATETREEMODULE_API UClass* StaticClass<UStateTreeSchema>()
	{
		return UStateTreeSchema::StaticClass();
	}
	UStateTreeSchema::UStateTreeSchema(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateTreeSchema);
	UStateTreeSchema::~UStateTreeSchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSchema_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStateTreeSchema, UStateTreeSchema::StaticClass, TEXT("UStateTreeSchema"), &Z_Registration_Info_UClass_UStateTreeSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateTreeSchema), 2555156782U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSchema_h_1071996463(TEXT("/Script/StateTreeModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSchema_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
