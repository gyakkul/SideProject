// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassEntityConfigAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassEntityConfigAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityConfigAsset();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityConfigAsset_NoRegister();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase_NoRegister();
	MASSSPAWNER_API UScriptStruct* Z_Construct_UScriptStruct_FMassEntityConfig();
	UPackage* Z_Construct_UPackage__Script_MassSpawner();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassEntityConfig;
class UScriptStruct* FMassEntityConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassEntityConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassEntityConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassEntityConfig, (UObject*)Z_Construct_UPackage__Script_MassSpawner(), TEXT("MassEntityConfig"));
	}
	return Z_Registration_Info_UScriptStruct_MassEntityConfig.OuterSingleton;
}
template<> MASSSPAWNER_API UScriptStruct* StaticStruct<FMassEntityConfig>()
{
	return FMassEntityConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassEntityConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Traits_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Traits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Traits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Traits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassEntityConfig_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Describes a Mass agent to spawn. The struct can be embedded to allow last minute changes to the agent (i.e. for debugging).\n * The agent config describes a unique list of features which are used to create an entity template.\n * Derived configs can override parent features.\n */" },
		{ "ModuleRelativePath", "Public/MassEntityConfigAsset.h" },
		{ "ToolTip", "Describes a Mass agent to spawn. The struct can be embedded to allow last minute changes to the agent (i.e. for debugging).\nThe agent config describes a unique list of features which are used to create an entity template.\nDerived configs can override parent features." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassEntityConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassEntityConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassEntityConfig_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "Derived Traits" },
		{ "Comment", "/** Reference to parent config asset */" },
		{ "ModuleRelativePath", "Public/MassEntityConfigAsset.h" },
		{ "ToolTip", "Reference to parent config asset" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMassEntityConfig_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassEntityConfig, Parent), Z_Construct_UClass_UMassEntityConfigAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassEntityConfig_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntityConfig_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassEntityConfig_Statics::NewProp_Traits_Inner_MetaData[] = {
		{ "Category", "Traits" },
		{ "Comment", "/** Array of unique traits of this config */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassEntityConfigAsset.h" },
		{ "ToolTip", "Array of unique traits of this config" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMassEntityConfig_Statics::NewProp_Traits_Inner = { "Traits", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMassEntityTraitBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassEntityConfig_Statics::NewProp_Traits_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntityConfig_Statics::NewProp_Traits_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassEntityConfig_Statics::NewProp_Traits_MetaData[] = {
		{ "Category", "Traits" },
		{ "Comment", "/** Array of unique traits of this config */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassEntityConfigAsset.h" },
		{ "ToolTip", "Array of unique traits of this config" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassEntityConfig_Statics::NewProp_Traits = { "Traits", nullptr, (EPropertyFlags)0x0024088000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassEntityConfig, Traits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassEntityConfig_Statics::NewProp_Traits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntityConfig_Statics::NewProp_Traits_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassEntityConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassEntityConfig_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassEntityConfig_Statics::NewProp_Traits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassEntityConfig_Statics::NewProp_Traits,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassEntityConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassSpawner,
		nullptr,
		&NewStructOps,
		"MassEntityConfig",
		sizeof(FMassEntityConfig),
		alignof(FMassEntityConfig),
		Z_Construct_UScriptStruct_FMassEntityConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntityConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassEntityConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntityConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassEntityConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_MassEntityConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassEntityConfig.InnerSingleton, Z_Construct_UScriptStruct_FMassEntityConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassEntityConfig.InnerSingleton;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UMassEntityConfigAsset::execValidateEntityConfig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ValidateEntityConfig();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UMassEntityConfigAsset::StaticRegisterNativesUMassEntityConfigAsset()
	{
#if WITH_EDITOR
		UClass* Class = UMassEntityConfigAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ValidateEntityConfig", &UMassEntityConfigAsset::execValidateEntityConfig },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UMassEntityConfigAsset_ValidateEntityConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassEntityConfigAsset_ValidateEntityConfig_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Entity Config" },
		{ "ModuleRelativePath", "Public/MassEntityConfigAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassEntityConfigAsset_ValidateEntityConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassEntityConfigAsset, nullptr, "ValidateEntityConfig", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMassEntityConfigAsset_ValidateEntityConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassEntityConfigAsset_ValidateEntityConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMassEntityConfigAsset_ValidateEntityConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassEntityConfigAsset_ValidateEntityConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassEntityConfigAsset);
	UClass* Z_Construct_UClass_UMassEntityConfigAsset_NoRegister()
	{
		return UMassEntityConfigAsset::StaticClass();
	}
	struct Z_Construct_UClass_UMassEntityConfigAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassEntityConfigAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_MassSpawner,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UMassEntityConfigAsset_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UMassEntityConfigAsset_ValidateEntityConfig, "ValidateEntityConfig" }, // 3162878282
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassEntityConfigAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Agent Config asset allows to create shared configs that can be used as base for derived configs.\n * The asset can be used as is i.e. on a spawner, or you can use FMassEntityConfig to allow last minute changes at use site.\n */" },
		{ "IncludePath", "MassEntityConfigAsset.h" },
		{ "ModuleRelativePath", "Public/MassEntityConfigAsset.h" },
		{ "ToolTip", "Agent Config asset allows to create shared configs that can be used as base for derived configs.\nThe asset can be used as is i.e. on a spawner, or you can use FMassEntityConfig to allow last minute changes at use site." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassEntityConfigAsset_Statics::NewProp_Config_MetaData[] = {
		{ "Category", "Entity Config" },
		{ "Comment", "/** The config described in this asset. */" },
		{ "ModuleRelativePath", "Public/MassEntityConfigAsset.h" },
		{ "ToolTip", "The config described in this asset." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassEntityConfigAsset_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0020088000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassEntityConfigAsset, Config), Z_Construct_UScriptStruct_FMassEntityConfig, METADATA_PARAMS(Z_Construct_UClass_UMassEntityConfigAsset_Statics::NewProp_Config_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassEntityConfigAsset_Statics::NewProp_Config_MetaData)) }; // 1558737933
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassEntityConfigAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassEntityConfigAsset_Statics::NewProp_Config,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassEntityConfigAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassEntityConfigAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassEntityConfigAsset_Statics::ClassParams = {
		&UMassEntityConfigAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UMassEntityConfigAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassEntityConfigAsset_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassEntityConfigAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassEntityConfigAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassEntityConfigAsset()
	{
		if (!Z_Registration_Info_UClass_UMassEntityConfigAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassEntityConfigAsset.OuterSingleton, Z_Construct_UClass_UMassEntityConfigAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassEntityConfigAsset.OuterSingleton;
	}
	template<> MASSSPAWNER_API UClass* StaticClass<UMassEntityConfigAsset>()
	{
		return UMassEntityConfigAsset::StaticClass();
	}
	UMassEntityConfigAsset::UMassEntityConfigAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassEntityConfigAsset);
	UMassEntityConfigAsset::~UMassEntityConfigAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_Statics::ScriptStructInfo[] = {
		{ FMassEntityConfig::StaticStruct, Z_Construct_UScriptStruct_FMassEntityConfig_Statics::NewStructOps, TEXT("MassEntityConfig"), &Z_Registration_Info_UScriptStruct_MassEntityConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassEntityConfig), 1558737933U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassEntityConfigAsset, UMassEntityConfigAsset::StaticClass, TEXT("UMassEntityConfigAsset"), &Z_Registration_Info_UClass_UMassEntityConfigAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassEntityConfigAsset), 4102580704U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_2026396070(TEXT("/Script/MassSpawner"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
