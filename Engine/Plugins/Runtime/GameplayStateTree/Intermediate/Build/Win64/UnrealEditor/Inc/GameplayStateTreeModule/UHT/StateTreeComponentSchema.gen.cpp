// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/StateTreeComponentSchema.h"
#include "StateTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeComponentSchema() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYSTATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeComponentSchema();
	GAMEPLAYSTATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeComponentSchema_NoRegister();
	STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeSchema();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeExternalDataDesc();
	UPackage* Z_Construct_UPackage__Script_GameplayStateTreeModule();
// End Cross Module References
	void UStateTreeComponentSchema::StaticRegisterNativesUStateTreeComponentSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateTreeComponentSchema);
	UClass* Z_Construct_UClass_UStateTreeComponentSchema_NoRegister()
	{
		return UStateTreeComponentSchema::StaticClass();
	}
	struct Z_Construct_UClass_UStateTreeComponentSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ContextActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextActorDataDesc_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContextActorDataDesc;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStateTreeComponentSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStateTreeSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayStateTreeModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeComponentSchema_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * StateTree for Actors with StateTree component. \n */" },
		{ "CommonSchema", "" },
		{ "DisplayName", "StateTree Component" },
		{ "IncludePath", "Components/StateTreeComponentSchema.h" },
		{ "ModuleRelativePath", "Public/Components/StateTreeComponentSchema.h" },
		{ "ToolTip", "StateTree for Actors with StateTree component." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeComponentSchema_Statics::NewProp_ContextActorClass_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** Actor class the StateTree is expected to run on. Allows to bind to specific Actor class' properties. */" },
		{ "ModuleRelativePath", "Public/Components/StateTreeComponentSchema.h" },
		{ "ToolTip", "Actor class the StateTree is expected to run on. Allows to bind to specific Actor class' properties." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UStateTreeComponentSchema_Statics::NewProp_ContextActorClass = { "ContextActorClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTreeComponentSchema, ContextActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStateTreeComponentSchema_Statics::NewProp_ContextActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeComponentSchema_Statics::NewProp_ContextActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeComponentSchema_Statics::NewProp_ContextActorDataDesc_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/StateTreeComponentSchema.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTreeComponentSchema_Statics::NewProp_ContextActorDataDesc = { "ContextActorDataDesc", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTreeComponentSchema, ContextActorDataDesc), Z_Construct_UScriptStruct_FStateTreeExternalDataDesc, METADATA_PARAMS(Z_Construct_UClass_UStateTreeComponentSchema_Statics::NewProp_ContextActorDataDesc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeComponentSchema_Statics::NewProp_ContextActorDataDesc_MetaData)) }; // 2405474714
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateTreeComponentSchema_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeComponentSchema_Statics::NewProp_ContextActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeComponentSchema_Statics::NewProp_ContextActorDataDesc,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateTreeComponentSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateTreeComponentSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateTreeComponentSchema_Statics::ClassParams = {
		&UStateTreeComponentSchema::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStateTreeComponentSchema_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeComponentSchema_Statics::PropPointers),
		0,
		0x000030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStateTreeComponentSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeComponentSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStateTreeComponentSchema()
	{
		if (!Z_Registration_Info_UClass_UStateTreeComponentSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateTreeComponentSchema.OuterSingleton, Z_Construct_UClass_UStateTreeComponentSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStateTreeComponentSchema.OuterSingleton;
	}
	template<> GAMEPLAYSTATETREEMODULE_API UClass* StaticClass<UStateTreeComponentSchema>()
	{
		return UStateTreeComponentSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateTreeComponentSchema);
	UStateTreeComponentSchema::~UStateTreeComponentSchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponentSchema_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponentSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStateTreeComponentSchema, UStateTreeComponentSchema::StaticClass, TEXT("UStateTreeComponentSchema"), &Z_Registration_Info_UClass_UStateTreeComponentSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateTreeComponentSchema), 3920362461U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponentSchema_h_1542783821(TEXT("/Script/GameplayStateTreeModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponentSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponentSchema_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
