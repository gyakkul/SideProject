// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraSystem.h"
#include "../Classes/NiagaraDataSetCompiledData.h"
#include "../Classes/NiagaraEffectType.h"
#include "../Classes/NiagaraEmitterHandle.h"
#include "../Classes/NiagaraParameterDefinitionsSubscriber.h"
#include "../Public/NiagaraCommon.h"
#include "../Public/NiagaraParameterStore.h"
#include "../Public/NiagaraTypes.h"
#include "../Public/NiagaraUserRedirectionParameterStore.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraSystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UFXSystemAsset();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERendererStencilMask();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBakerSettings_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelDefinitions_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEditorDataBase_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEditorParametersAdapterBase_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEffectType_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraMessageDataBase_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParameterCollectionInstance_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScript_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterHandle();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterStore();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemCompiledData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FParameterDefinitionsSubscription();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraEmitterCompiledData;
class UScriptStruct* FNiagaraEmitterCompiledData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEmitterCompiledData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraEmitterCompiledData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraEmitterCompiledData"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEmitterCompiledData.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraEmitterCompiledData>()
{
	return FNiagaraEmitterCompiledData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FNamePropertyParams NewProp_SpawnAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterSpawnIntervalVar_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterSpawnIntervalVar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterInterpSpawnStartDTVar_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterInterpSpawnStartDTVar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterSpawnGroupVar_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterSpawnGroupVar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterAgeVar_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterAgeVar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterRandomSeedVar_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterRandomSeedVar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterInstanceSeedVar_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterInstanceSeedVar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterTotalSpawnedParticlesVar_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterTotalSpawnedParticlesVar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataSetCompiledData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataSetCompiledData;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GPUCaptureDataSetCompiledData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GPUCaptureDataSetCompiledData;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEmitterCompiledData>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_SpawnAttributes_Inner = { "SpawnAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_SpawnAttributes_MetaData[] = {
		{ "Comment", "/** Attribute names in the data set that are driving each emitter's spawning. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Attribute names in the data set that are driving each emitter's spawning." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_SpawnAttributes = { "SpawnAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraEmitterCompiledData, SpawnAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_SpawnAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_SpawnAttributes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterSpawnIntervalVar_MetaData[] = {
		{ "Comment", "/** Explicit list of Niagara Variables to bind to Emitter instances. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Explicit list of Niagara Variables to bind to Emitter instances." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterSpawnIntervalVar = { "EmitterSpawnIntervalVar", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraEmitterCompiledData, EmitterSpawnIntervalVar), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterSpawnIntervalVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterSpawnIntervalVar_MetaData)) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterInterpSpawnStartDTVar_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterInterpSpawnStartDTVar = { "EmitterInterpSpawnStartDTVar", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraEmitterCompiledData, EmitterInterpSpawnStartDTVar), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterInterpSpawnStartDTVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterInterpSpawnStartDTVar_MetaData)) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterSpawnGroupVar_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterSpawnGroupVar = { "EmitterSpawnGroupVar", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraEmitterCompiledData, EmitterSpawnGroupVar), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterSpawnGroupVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterSpawnGroupVar_MetaData)) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterAgeVar_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterAgeVar = { "EmitterAgeVar", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraEmitterCompiledData, EmitterAgeVar), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterAgeVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterAgeVar_MetaData)) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterRandomSeedVar_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterRandomSeedVar = { "EmitterRandomSeedVar", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraEmitterCompiledData, EmitterRandomSeedVar), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterRandomSeedVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterRandomSeedVar_MetaData)) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterInstanceSeedVar_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterInstanceSeedVar = { "EmitterInstanceSeedVar", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraEmitterCompiledData, EmitterInstanceSeedVar), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterInstanceSeedVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterInstanceSeedVar_MetaData)) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterTotalSpawnedParticlesVar_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterTotalSpawnedParticlesVar = { "EmitterTotalSpawnedParticlesVar", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraEmitterCompiledData, EmitterTotalSpawnedParticlesVar), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterTotalSpawnedParticlesVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterTotalSpawnedParticlesVar_MetaData)) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_DataSetCompiledData_MetaData[] = {
		{ "Comment", "/** Per-Emitter DataSet Data. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Per-Emitter DataSet Data." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_DataSetCompiledData = { "DataSetCompiledData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraEmitterCompiledData, DataSetCompiledData), Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_DataSetCompiledData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_DataSetCompiledData_MetaData)) }; // 4253291051
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_GPUCaptureDataSetCompiledData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_GPUCaptureDataSetCompiledData = { "GPUCaptureDataSetCompiledData", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraEmitterCompiledData, GPUCaptureDataSetCompiledData), Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_GPUCaptureDataSetCompiledData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_GPUCaptureDataSetCompiledData_MetaData)) }; // 4253291051
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_SpawnAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_SpawnAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterSpawnIntervalVar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterInterpSpawnStartDTVar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterSpawnGroupVar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterAgeVar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterRandomSeedVar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterInstanceSeedVar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_EmitterTotalSpawnedParticlesVar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_DataSetCompiledData,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewProp_GPUCaptureDataSetCompiledData,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraEmitterCompiledData",
		sizeof(FNiagaraEmitterCompiledData),
		alignof(FNiagaraEmitterCompiledData),
		Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraEmitterCompiledData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraEmitterCompiledData.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraEmitterCompiledData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraParameterDataSetBinding;
class UScriptStruct* FNiagaraParameterDataSetBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraParameterDataSetBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraParameterDataSetBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraParameterDataSetBinding"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraParameterDataSetBinding.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraParameterDataSetBinding>()
{
	return FNiagaraParameterDataSetBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParameterOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataSetComponentOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DataSetComponentOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraParameterDataSetBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::NewProp_ParameterOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::NewProp_ParameterOffset = { "ParameterOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraParameterDataSetBinding, ParameterOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::NewProp_ParameterOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::NewProp_ParameterOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::NewProp_DataSetComponentOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::NewProp_DataSetComponentOffset = { "DataSetComponentOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraParameterDataSetBinding, DataSetComponentOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::NewProp_DataSetComponentOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::NewProp_DataSetComponentOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::NewProp_ParameterOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::NewProp_DataSetComponentOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraParameterDataSetBinding",
		sizeof(FNiagaraParameterDataSetBinding),
		alignof(FNiagaraParameterDataSetBinding),
		Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraParameterDataSetBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraParameterDataSetBinding.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraParameterDataSetBinding.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraParameterDataSetBindingCollection;
class UScriptStruct* FNiagaraParameterDataSetBindingCollection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraParameterDataSetBindingCollection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraParameterDataSetBindingCollection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraParameterDataSetBindingCollection"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraParameterDataSetBindingCollection.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraParameterDataSetBindingCollection>()
{
	return FNiagaraParameterDataSetBindingCollection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatOffsets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatOffsets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatOffsets;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Int32Offsets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32Offsets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Int32Offsets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraParameterDataSetBindingCollection>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_FloatOffsets_Inner = { "FloatOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding, METADATA_PARAMS(nullptr, 0) }; // 2640602045
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_FloatOffsets_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_FloatOffsets = { "FloatOffsets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraParameterDataSetBindingCollection, FloatOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_FloatOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_FloatOffsets_MetaData)) }; // 2640602045
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_Int32Offsets_Inner = { "Int32Offsets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding, METADATA_PARAMS(nullptr, 0) }; // 2640602045
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_Int32Offsets_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_Int32Offsets = { "Int32Offsets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraParameterDataSetBindingCollection, Int32Offsets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_Int32Offsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_Int32Offsets_MetaData)) }; // 2640602045
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_FloatOffsets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_FloatOffsets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_Int32Offsets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewProp_Int32Offsets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraParameterDataSetBindingCollection",
		sizeof(FNiagaraParameterDataSetBindingCollection),
		alignof(FNiagaraParameterDataSetBindingCollection),
		Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraParameterDataSetBindingCollection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraParameterDataSetBindingCollection.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraParameterDataSetBindingCollection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSystemCompiledData;
class UScriptStruct* FNiagaraSystemCompiledData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSystemCompiledData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSystemCompiledData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSystemCompiledData"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSystemCompiledData.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSystemCompiledData>()
{
	return FNiagaraSystemCompiledData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceParamStore_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceParamStore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataSetCompiledData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataSetCompiledData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnInstanceParamsDataSetCompiledData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnInstanceParamsDataSetCompiledData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateInstanceParamsDataSetCompiledData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateInstanceParamsDataSetCompiledData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnInstanceGlobalBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnInstanceGlobalBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnInstanceSystemBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnInstanceSystemBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnInstanceOwnerBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnInstanceOwnerBinding;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnInstanceEmitterBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnInstanceEmitterBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnInstanceEmitterBindings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateInstanceGlobalBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateInstanceGlobalBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateInstanceSystemBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateInstanceSystemBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateInstanceOwnerBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateInstanceOwnerBinding;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateInstanceEmitterBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateInstanceEmitterBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UpdateInstanceEmitterBindings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSystemCompiledData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_InstanceParamStore_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_InstanceParamStore = { "InstanceParamStore", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSystemCompiledData, InstanceParamStore), Z_Construct_UScriptStruct_FNiagaraParameterStore, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_InstanceParamStore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_InstanceParamStore_MetaData)) }; // 2939422465
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_DataSetCompiledData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_DataSetCompiledData = { "DataSetCompiledData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSystemCompiledData, DataSetCompiledData), Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_DataSetCompiledData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_DataSetCompiledData_MetaData)) }; // 4253291051
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceParamsDataSetCompiledData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceParamsDataSetCompiledData = { "SpawnInstanceParamsDataSetCompiledData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSystemCompiledData, SpawnInstanceParamsDataSetCompiledData), Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceParamsDataSetCompiledData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceParamsDataSetCompiledData_MetaData)) }; // 4253291051
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceParamsDataSetCompiledData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceParamsDataSetCompiledData = { "UpdateInstanceParamsDataSetCompiledData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSystemCompiledData, UpdateInstanceParamsDataSetCompiledData), Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceParamsDataSetCompiledData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceParamsDataSetCompiledData_MetaData)) }; // 4253291051
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceGlobalBinding_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceGlobalBinding = { "SpawnInstanceGlobalBinding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSystemCompiledData, SpawnInstanceGlobalBinding), Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceGlobalBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceGlobalBinding_MetaData)) }; // 2313891423
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceSystemBinding_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceSystemBinding = { "SpawnInstanceSystemBinding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSystemCompiledData, SpawnInstanceSystemBinding), Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceSystemBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceSystemBinding_MetaData)) }; // 2313891423
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceOwnerBinding_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceOwnerBinding = { "SpawnInstanceOwnerBinding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSystemCompiledData, SpawnInstanceOwnerBinding), Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceOwnerBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceOwnerBinding_MetaData)) }; // 2313891423
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceEmitterBindings_Inner = { "SpawnInstanceEmitterBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection, METADATA_PARAMS(nullptr, 0) }; // 2313891423
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceEmitterBindings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceEmitterBindings = { "SpawnInstanceEmitterBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSystemCompiledData, SpawnInstanceEmitterBindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceEmitterBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceEmitterBindings_MetaData)) }; // 2313891423
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceGlobalBinding_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceGlobalBinding = { "UpdateInstanceGlobalBinding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSystemCompiledData, UpdateInstanceGlobalBinding), Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceGlobalBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceGlobalBinding_MetaData)) }; // 2313891423
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceSystemBinding_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceSystemBinding = { "UpdateInstanceSystemBinding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSystemCompiledData, UpdateInstanceSystemBinding), Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceSystemBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceSystemBinding_MetaData)) }; // 2313891423
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceOwnerBinding_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceOwnerBinding = { "UpdateInstanceOwnerBinding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSystemCompiledData, UpdateInstanceOwnerBinding), Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceOwnerBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceOwnerBinding_MetaData)) }; // 2313891423
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceEmitterBindings_Inner = { "UpdateInstanceEmitterBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection, METADATA_PARAMS(nullptr, 0) }; // 2313891423
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceEmitterBindings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceEmitterBindings = { "UpdateInstanceEmitterBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSystemCompiledData, UpdateInstanceEmitterBindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceEmitterBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceEmitterBindings_MetaData)) }; // 2313891423
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_InstanceParamStore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_DataSetCompiledData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceParamsDataSetCompiledData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceParamsDataSetCompiledData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceGlobalBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceSystemBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceOwnerBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceEmitterBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_SpawnInstanceEmitterBindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceGlobalBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceSystemBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceOwnerBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceEmitterBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewProp_UpdateInstanceEmitterBindings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraSystemCompiledData",
		sizeof(FNiagaraSystemCompiledData),
		alignof(FNiagaraSystemCompiledData),
		Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemCompiledData()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraSystemCompiledData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSystemCompiledData.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraSystemCompiledData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSystemCompileRequest;
class UScriptStruct* FNiagaraSystemCompileRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSystemCompileRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSystemCompileRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSystemCompileRequest"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSystemCompileRequest.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSystemCompileRequest>()
{
	return FNiagaraSystemCompileRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RootObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSystemCompileRequest>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics::NewProp_RootObjects_Inner = { "RootObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics::NewProp_RootObjects_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics::NewProp_RootObjects = { "RootObjects", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSystemCompileRequest, RootObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics::NewProp_RootObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics::NewProp_RootObjects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics::NewProp_RootObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics::NewProp_RootObjects,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraSystemCompileRequest",
		sizeof(FNiagaraSystemCompileRequest),
		alignof(FNiagaraSystemCompileRequest),
		Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraSystemCompileRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSystemCompileRequest.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraSystemCompileRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilityOverrides;
class UScriptStruct* FNiagaraSystemScalabilityOverrides::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilityOverrides.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilityOverrides.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSystemScalabilityOverrides"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilityOverrides.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSystemScalabilityOverrides>()
{
	return FNiagaraSystemScalabilityOverrides::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Overrides_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Overrides_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Overrides;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Container struct for an array of system scalability overrides. Enables details customization and data validation. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Container struct for an array of system scalability overrides. Enables details customization and data validation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSystemScalabilityOverrides>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::NewProp_Overrides_Inner = { "Overrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride, METADATA_PARAMS(nullptr, 0) }; // 1508986335
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::NewProp_Overrides_MetaData[] = {
		{ "Category", "Override" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::NewProp_Overrides = { "Overrides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSystemScalabilityOverrides, Overrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::NewProp_Overrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::NewProp_Overrides_MetaData)) }; // 1508986335
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::NewProp_Overrides_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::NewProp_Overrides,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraSystemScalabilityOverrides",
		sizeof(FNiagaraSystemScalabilityOverrides),
		alignof(FNiagaraSystemScalabilityOverrides),
		Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilityOverrides.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilityOverrides.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilityOverrides.InnerSingleton;
	}
	void UNiagaraSystem::StaticRegisterNativesUNiagaraSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraSystem);
	UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister()
	{
		return UNiagaraSystem::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ThumbnailImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExposeToLibrary_MetaData[];
#endif
		static void NewProp_bExposeToLibrary_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExposeToLibrary;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LibraryVisibility_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LibraryVisibility_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LibraryVisibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsTemplateAsset_MetaData[];
#endif
		static void NewProp_bIsTemplateAsset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTemplateAsset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TemplateSpecification_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateSpecification_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TemplateSpecification;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateAssetDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TemplateAssetDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Category;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ScratchPadScripts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScratchPadScripts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScratchPadScripts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorOnlyAddedParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditorOnlyAddedParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompileForEdit_MetaData[];
#endif
		static void NewProp_bCompileForEdit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompileForEdit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBakeOutRapidIteration_MetaData[];
#endif
		static void NewProp_bBakeOutRapidIteration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeOutRapidIteration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBakeOutRapidIterationOnCook_MetaData[];
#endif
		static void NewProp_bBakeOutRapidIterationOnCook_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeOutRapidIterationOnCook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompressAttributes_MetaData[];
#endif
		static void NewProp_bCompressAttributes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompressAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTrimAttributes_MetaData[];
#endif
		static void NewProp_bTrimAttributes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTrimAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTrimAttributesOnCook_MetaData[];
#endif
		static void NewProp_bTrimAttributesOnCook_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTrimAttributesOnCook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreParticleReadsForAttributeTrim_MetaData[];
#endif
		static void NewProp_bIgnoreParticleReadsForAttributeTrim_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreParticleReadsForAttributeTrim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableDebugSwitches_MetaData[];
#endif
		static void NewProp_bDisableDebugSwitches_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableDebugSwitches;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableDebugSwitchesOnCook_MetaData[];
#endif
		static void NewProp_bDisableDebugSwitchesOnCook_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableDebugSwitchesOnCook;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterDefinitionsSubscriptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterDefinitionsSubscriptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterDefinitionsSubscriptions;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportLargeWorldCoordinates_MetaData[];
#endif
		static void NewProp_bSupportLargeWorldCoordinates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportLargeWorldCoordinates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCastShadow_MetaData[];
#endif
		static void NewProp_bOverrideCastShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCastShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideReceivesDecals_MetaData[];
#endif
		static void NewProp_bOverrideReceivesDecals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideReceivesDecals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideRenderCustomDepth_MetaData[];
#endif
		static void NewProp_bOverrideRenderCustomDepth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideRenderCustomDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCustomDepthStencilValue_MetaData[];
#endif
		static void NewProp_bOverrideCustomDepthStencilValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCustomDepthStencilValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCustomDepthStencilWriteMask_MetaData[];
#endif
		static void NewProp_bOverrideCustomDepthStencilWriteMask_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCustomDepthStencilWriteMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideTranslucencySortPriority_MetaData[];
#endif
		static void NewProp_bOverrideTranslucencySortPriority_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideTranslucencySortPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideTranslucencySortDistanceOffset_MetaData[];
#endif
		static void NewProp_bOverrideTranslucencySortDistanceOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideTranslucencySortDistanceOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadow_MetaData[];
#endif
		static void NewProp_bCastShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReceivesDecals_MetaData[];
#endif
		static void NewProp_bReceivesDecals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceivesDecals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderCustomDepth_MetaData[];
#endif
		static void NewProp_bRenderCustomDepth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderCustomDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableExperimentalVM_MetaData[];
#endif
		static void NewProp_bDisableExperimentalVM_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableExperimentalVM;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CustomDepthStencilWriteMask_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencilWriteMask_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CustomDepthStencilWriteMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencilValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CustomDepthStencilValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslucencySortPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TranslucencySortPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslucencySortDistanceOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TranslucencySortDistanceOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDumpDebugSystemInfo_MetaData[];
#endif
		static void NewProp_bDumpDebugSystemInfo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDumpDebugSystemInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDumpDebugEmitterInfo_MetaData[];
#endif
		static void NewProp_bDumpDebugEmitterInfo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDumpDebugEmitterInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequireCurrentFrameData_MetaData[];
#endif
		static void NewProp_bRequireCurrentFrameData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireCurrentFrameData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFixedBounds_MetaData[];
#endif
		static void NewProp_bFixedBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixedBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EffectType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideScalabilitySettings_MetaData[];
#endif
		static void NewProp_bOverrideScalabilitySettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideScalabilitySettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAllowCullingForLocalPlayers_MetaData[];
#endif
		static void NewProp_bOverrideAllowCullingForLocalPlayers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAllowCullingForLocalPlayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCullingForLocalPlayersOverride_MetaData[];
#endif
		static void NewProp_bAllowCullingForLocalPlayersOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCullingForLocalPlayersOverride;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalabilityOverrides_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalabilityOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalabilityOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemScalabilityOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SystemScalabilityOverrides;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterHandles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterHandles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EmitterHandles;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParameterCollectionOverrides_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterCollectionOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterCollectionOverrides;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveCompilations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveCompilations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveCompilations;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemSpawnScript_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SystemSpawnScript;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemUpdateScript_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SystemUpdateScript;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemCompiledData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SystemCompiledData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExposedParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExposedParameters;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorParameters_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorParameters;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixedBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FixedBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDeactivate_MetaData[];
#endif
		static void NewProp_bAutoDeactivate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDeactivate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeterminism_MetaData[];
#endif
		static void NewProp_bDeterminism_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeterminism;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarmupTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WarmupTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarmupTickCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WarmupTickCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarmupTickDelta_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WarmupTickDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFixedTickDelta_MetaData[];
#endif
		static void NewProp_bFixedTickDelta_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixedTickDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixedTickDeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FixedTickDeltaTime;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakerSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BakerSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakerGeneratedSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BakerGeneratedSettings;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasSystemScriptDIsWithPerInstanceData_MetaData[];
#endif
		static void NewProp_bHasSystemScriptDIsWithPerInstanceData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasSystemScriptDIsWithPerInstanceData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNeedsGPUContextInitForDataInterfaces_MetaData[];
#endif
		static void NewProp_bNeedsGPUContextInitForDataInterfaces_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedsGPUContextInitForDataInterfaces;
		static const UECodeGen_Private::FNamePropertyParams NewProp_UserDINamesReadInSystemScripts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserDINamesReadInSystemScripts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UserDINamesReadInSystemScripts;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReferencedDataChannelDefinitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedDataChannelDefinitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencedDataChannelDefinitions;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MessageKeyToMessageMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MessageKeyToMessageMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageKeyToMessageMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MessageKeyToMessageMap;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFXSystemAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A Niagara System contains multiple Niagara Emitters to create various effects.\n * Niagara Systems can be placed in the world, unlike Emitters, and expose User Parameters to configure an effect at runtime.*/" },
		{ "IncludePath", "NiagaraSystem.h" },
		{ "LoadBehavior", "LazyOnDemand" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "A Niagara System contains multiple Niagara Emitters to create various effects.\nNiagara Systems can be placed in the world, unlike Emitters, and expose User Parameters to configure an effect at runtime." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ThumbnailImage_MetaData[] = {
		{ "Comment", "/** Internal: The thumbnail image.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Internal: The thumbnail image." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ThumbnailImage = { "ThumbnailImage", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, ThumbnailImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ThumbnailImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ThumbnailImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bExposeToLibrary_MetaData[] = {
		{ "Comment", "/** Deprecated library exposure bool. Use the LibraryVisibility enum instead. FNiagaraEditorUtilities has accessor functions that takes deprecation into account */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Deprecated library exposure bool. Use the LibraryVisibility enum instead. FNiagaraEditorUtilities has accessor functions that takes deprecation into account" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bExposeToLibrary_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bExposeToLibrary_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bExposeToLibrary = { "bExposeToLibrary", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bExposeToLibrary_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bExposeToLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bExposeToLibrary_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_LibraryVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_LibraryVisibility_MetaData[] = {
		{ "Category", "Asset Options" },
		{ "Comment", "/** If this system is exposed to the library, or should be explicitly hidden. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "SkipSystemResetOnChange", "true" },
		{ "ToolTip", "If this system is exposed to the library, or should be explicitly hidden." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_LibraryVisibility = { "LibraryVisibility", nullptr, (EPropertyFlags)0x0010050800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, LibraryVisibility), Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_LibraryVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_LibraryVisibility_MetaData)) }; // 2823837420
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bIsTemplateAsset_MetaData[] = {
		{ "Comment", "/** Deprecated template asset bool. Use the TemplateSpecification enum instead. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Deprecated template asset bool. Use the TemplateSpecification enum instead." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bIsTemplateAsset_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bIsTemplateAsset_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bIsTemplateAsset = { "bIsTemplateAsset", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bIsTemplateAsset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bIsTemplateAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bIsTemplateAsset_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TemplateSpecification_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TemplateSpecification_MetaData[] = {
		{ "Category", "Asset Options" },
		{ "Comment", "/** If this system is a regular system, a template or a behavior example. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "SkipSystemResetOnChange", "true" },
		{ "ToolTip", "If this system is a regular system, a template or a behavior example." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TemplateSpecification = { "TemplateSpecification", nullptr, (EPropertyFlags)0x0010050800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, TemplateSpecification), Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TemplateSpecification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TemplateSpecification_MetaData)) }; // 295162963
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TemplateAssetDescription_MetaData[] = {
		{ "Category", "Asset Options" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "SkipSystemResetOnChange", "true" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TemplateAssetDescription = { "TemplateAssetDescription", nullptr, (EPropertyFlags)0x0010050800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, TemplateAssetDescription), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TemplateAssetDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TemplateAssetDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "Asset Options" },
		{ "Comment", "/** Category of this system. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "SkipSystemResetOnChange", "true" },
		{ "ToolTip", "Category of this system." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010050800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, Category), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_Category_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScratchPadScripts_Inner = { "ScratchPadScripts", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScratchPadScripts_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScratchPadScripts = { "ScratchPadScripts", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, ScratchPadScripts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScratchPadScripts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScratchPadScripts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EditorOnlyAddedParameters_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EditorOnlyAddedParameters = { "EditorOnlyAddedParameters", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, EditorOnlyAddedParameters), Z_Construct_UScriptStruct_FNiagaraParameterStore, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EditorOnlyAddedParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EditorOnlyAddedParameters_MetaData)) }; // 2939422465
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_UpdateContext_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_UpdateContext = { "UpdateContext", nullptr, (EPropertyFlags)0x0010008800002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, UpdateContext), Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_UpdateContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_UpdateContext_MetaData)) }; // 1401210665
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bCompileForEdit_MetaData[] = {
		{ "Comment", "/** When enabled we compile for the edit path, which can result in slower system performance but faster editor responsiveness. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "When enabled we compile for the edit path, which can result in slower system performance but faster editor responsiveness." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bCompileForEdit_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bCompileForEdit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bCompileForEdit = { "bCompileForEdit", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bCompileForEdit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bCompileForEdit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bCompileForEdit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bBakeOutRapidIteration_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** When enable constant values are baked into the scripts while editing the system, this will increase iteration times but improve performance. */" },
		{ "DisplayName", "Bake Rapid Iteration Parameters During Edit" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "When enable constant values are baked into the scripts while editing the system, this will increase iteration times but improve performance." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bBakeOutRapidIteration_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bBakeOutRapidIteration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bBakeOutRapidIteration = { "bBakeOutRapidIteration", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bBakeOutRapidIteration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bBakeOutRapidIteration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bBakeOutRapidIteration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bBakeOutRapidIterationOnCook_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** When enabled constant values are baked into scripts to improve performance. */" },
		{ "DisplayName", "Bake Rapid Iteration Parameters" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "When enabled constant values are baked into scripts to improve performance." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bBakeOutRapidIterationOnCook_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bBakeOutRapidIterationOnCook = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bBakeOutRapidIterationOnCook = { "bBakeOutRapidIterationOnCook", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bBakeOutRapidIterationOnCook_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bBakeOutRapidIterationOnCook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bBakeOutRapidIterationOnCook_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bCompressAttributes_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** Toggles whether or not emitters within this system will try and compress their particle attributes.\n\x09In some cases, this precision change can lead to perceivable differences, but memory costs and or performance (especially true for GPU emitters) can improve. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Toggles whether or not emitters within this system will try and compress their particle attributes.\n      In some cases, this precision change can lead to perceivable differences, but memory costs and or performance (especially true for GPU emitters) can improve." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bCompressAttributes_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bCompressAttributes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bCompressAttributes = { "bCompressAttributes", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bCompressAttributes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bCompressAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bCompressAttributes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bTrimAttributes_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** When enabled we trim particle attributes while editing the system. */" },
		{ "DisplayName", "Trim Attributes During Edit" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "When enabled we trim particle attributes while editing the system." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bTrimAttributes_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bTrimAttributes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bTrimAttributes = { "bTrimAttributes", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bTrimAttributes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bTrimAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bTrimAttributes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bTrimAttributesOnCook_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** If true Particle attributes will be removed from the DataSet if they are unnecessary (are never read by ParameterMap) */" },
		{ "DisplayName", "Trim Attributes" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "If true Particle attributes will be removed from the DataSet if they are unnecessary (are never read by ParameterMap)" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bTrimAttributesOnCook_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bTrimAttributesOnCook = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bTrimAttributesOnCook = { "bTrimAttributesOnCook", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bTrimAttributesOnCook_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bTrimAttributesOnCook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bTrimAttributesOnCook_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bIgnoreParticleReadsForAttributeTrim_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** If true ParticleReads will not absolutely prevent attribute trimming - User must ensure that the appropriate attributes are preserved on the source emitter! */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "If true ParticleReads will not absolutely prevent attribute trimming - User must ensure that the appropriate attributes are preserved on the source emitter!" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bIgnoreParticleReadsForAttributeTrim_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bIgnoreParticleReadsForAttributeTrim = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bIgnoreParticleReadsForAttributeTrim = { "bIgnoreParticleReadsForAttributeTrim", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bIgnoreParticleReadsForAttributeTrim_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bIgnoreParticleReadsForAttributeTrim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bIgnoreParticleReadsForAttributeTrim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDisableDebugSwitches_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** When enable debug switches are disabled while editing the system. */" },
		{ "DisplayName", "Disable Debug Switches During Edit" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "When enable debug switches are disabled while editing the system." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDisableDebugSwitches_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bDisableDebugSwitches = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDisableDebugSwitches = { "bDisableDebugSwitches", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDisableDebugSwitches_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDisableDebugSwitches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDisableDebugSwitches_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDisableDebugSwitchesOnCook_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** When enabled debug switches are disabled when compiling the system. */" },
		{ "DisplayName", "Disable Debug Switches" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "When enabled debug switches are disabled when compiling the system." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDisableDebugSwitchesOnCook_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bDisableDebugSwitchesOnCook = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDisableDebugSwitchesOnCook = { "bDisableDebugSwitchesOnCook", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDisableDebugSwitchesOnCook_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDisableDebugSwitchesOnCook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDisableDebugSwitchesOnCook_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ParameterDefinitionsSubscriptions_Inner = { "ParameterDefinitionsSubscriptions", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FParameterDefinitionsSubscription, METADATA_PARAMS(nullptr, 0) }; // 1729836513
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ParameterDefinitionsSubscriptions_MetaData[] = {
		{ "Comment", "/** Subscriptions to definitions of parameters. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Subscriptions to definitions of parameters." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ParameterDefinitionsSubscriptions = { "ParameterDefinitionsSubscriptions", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, ParameterDefinitionsSubscriptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ParameterDefinitionsSubscriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ParameterDefinitionsSubscriptions_MetaData)) }; // 1729836513
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bSupportLargeWorldCoordinates_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If true then position type values will be rebased on system activation to fit into a float precision vector. This needs to be turned off when using a custom data interface or renderer that does not support the rebasing. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "If true then position type values will be rebased on system activation to fit into a float precision vector. This needs to be turned off when using a custom data interface or renderer that does not support the rebasing." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bSupportLargeWorldCoordinates_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bSupportLargeWorldCoordinates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bSupportLargeWorldCoordinates = { "bSupportLargeWorldCoordinates", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bSupportLargeWorldCoordinates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bSupportLargeWorldCoordinates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bSupportLargeWorldCoordinates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCastShadow_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n// Various optional overrides for component properties when spawning a system\n" },
		{ "InlineEditConditionToggle", "bCastShadow" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Various optional overrides for component properties when spawning a system" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCastShadow_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bOverrideCastShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCastShadow = { "bOverrideCastShadow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCastShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCastShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCastShadow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideReceivesDecals_MetaData[] = {
		{ "Category", "Rendering" },
		{ "InlineEditConditionToggle", "bReceivesDecals" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideReceivesDecals_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bOverrideReceivesDecals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideReceivesDecals = { "bOverrideReceivesDecals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideReceivesDecals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideReceivesDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideReceivesDecals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideRenderCustomDepth_MetaData[] = {
		{ "Category", "Rendering" },
		{ "InlineEditConditionToggle", "bRenderCustomDepth" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideRenderCustomDepth_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bOverrideRenderCustomDepth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideRenderCustomDepth = { "bOverrideRenderCustomDepth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideRenderCustomDepth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideRenderCustomDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideRenderCustomDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCustomDepthStencilValue_MetaData[] = {
		{ "Category", "Rendering" },
		{ "InlineEditConditionToggle", "CustomDepthStencilValue" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCustomDepthStencilValue_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bOverrideCustomDepthStencilValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCustomDepthStencilValue = { "bOverrideCustomDepthStencilValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCustomDepthStencilValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCustomDepthStencilValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCustomDepthStencilValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCustomDepthStencilWriteMask_MetaData[] = {
		{ "Category", "Rendering" },
		{ "InlineEditConditionToggle", "CustomDepthStencilWriteMask" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCustomDepthStencilWriteMask_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bOverrideCustomDepthStencilWriteMask = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCustomDepthStencilWriteMask = { "bOverrideCustomDepthStencilWriteMask", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCustomDepthStencilWriteMask_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCustomDepthStencilWriteMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCustomDepthStencilWriteMask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideTranslucencySortPriority_MetaData[] = {
		{ "Category", "Rendering" },
		{ "InlineEditConditionToggle", "TranslucencySortPriority" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideTranslucencySortPriority_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bOverrideTranslucencySortPriority = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideTranslucencySortPriority = { "bOverrideTranslucencySortPriority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideTranslucencySortPriority_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideTranslucencySortPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideTranslucencySortPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideTranslucencySortDistanceOffset_MetaData[] = {
		{ "Category", "Rendering" },
		{ "InlineEditConditionToggle", "TranslucencySortDistanceOffset" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideTranslucencySortDistanceOffset_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bOverrideTranslucencySortDistanceOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideTranslucencySortDistanceOffset = { "bOverrideTranslucencySortDistanceOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideTranslucencySortDistanceOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideTranslucencySortDistanceOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideTranslucencySortDistanceOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bCastShadow_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09When enabled this is the default value set on the component.\n\x09""Controls whether the primitive component should cast a shadow or not.\n\x09*/" },
		{ "DisplayName", "Default Cast Shadows" },
		{ "EditCondition", "bOverrideCastShadow" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "When enabled this is the default value set on the component.\nControls whether the primitive component should cast a shadow or not." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bCastShadow_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bCastShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bCastShadow = { "bCastShadow", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bCastShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bCastShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bCastShadow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bReceivesDecals_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09When enabled this is the default value set on the component.\n\x09Whether the primitive receives decals.\n\x09*/" },
		{ "DisplayName", "Default Receives Decals" },
		{ "EditCondition", "bOverrideReceivesDecals" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "When enabled this is the default value set on the component.\nWhether the primitive receives decals." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bReceivesDecals_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bReceivesDecals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bReceivesDecals = { "bReceivesDecals", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bReceivesDecals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bReceivesDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bReceivesDecals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bRenderCustomDepth_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09When enabled this is the default value set on the component.\n\x09This primitive has bRenderCustomDepth enabled.\n\x09*/" },
		{ "DisplayName", "Default Render CustomDepth Pass" },
		{ "EditCondition", "bOverrideRenderCustomDepth" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "When enabled this is the default value set on the component.\nThis primitive has bRenderCustomDepth enabled." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bRenderCustomDepth_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bRenderCustomDepth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bRenderCustomDepth = { "bRenderCustomDepth", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bRenderCustomDepth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bRenderCustomDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bRenderCustomDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDisableExperimentalVM_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** If true, disables experimental VM, if available */" },
		{ "DisplayName", "Disable Experimental VM" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "If true, disables experimental VM, if available" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDisableExperimentalVM_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bDisableExperimentalVM = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDisableExperimentalVM = { "bDisableExperimentalVM", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDisableExperimentalVM_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDisableExperimentalVM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDisableExperimentalVM_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_CustomDepthStencilWriteMask_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_CustomDepthStencilWriteMask_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09When enabled this is the default value set on the component.\n\x09Mask used for stencil buffer writes.\n\x09*/" },
		{ "DisplayName", "Default CustomDepthStencil Write Mask" },
		{ "editcondition", "bOverrideCustomDepthStencilValue" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "When enabled this is the default value set on the component.\nMask used for stencil buffer writes." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_CustomDepthStencilWriteMask = { "CustomDepthStencilWriteMask", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, CustomDepthStencilWriteMask), Z_Construct_UEnum_Engine_ERendererStencilMask, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_CustomDepthStencilWriteMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_CustomDepthStencilWriteMask_MetaData)) }; // 2676219362
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_CustomDepthStencilValue_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09When enabled this is the default value set on the component.\n\x09Optionally write this 0-255 value to the stencil buffer in CustomDepth pass (Requires project setting or r.CustomDepth == 3)\n\x09*/" },
		{ "DisplayName", "Default CustomDepthStencil Value" },
		{ "editcondition", "bOverrideCustomDepthStencilWriteMask" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "When enabled this is the default value set on the component.\nOptionally write this 0-255 value to the stencil buffer in CustomDepth pass (Requires project setting or r.CustomDepth == 3)" },
		{ "UIMax", "255" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_CustomDepthStencilValue = { "CustomDepthStencilValue", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, CustomDepthStencilValue), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_CustomDepthStencilValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_CustomDepthStencilValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TranslucencySortPriority_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09When enabled this is the default value set on the component.\n\x09""Adjusts the translucent object sorting priority, see PrimitiveComponent description for more details.\n\x09*/" },
		{ "editcondition", "bOverrideTranslucencySortPriority" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "When enabled this is the default value set on the component.\nAdjusts the translucent object sorting priority, see PrimitiveComponent description for more details." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TranslucencySortPriority = { "TranslucencySortPriority", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, TranslucencySortPriority), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TranslucencySortPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TranslucencySortPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TranslucencySortDistanceOffset_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09When enabled this is the default value set on the component.\n\x09Modifies the sort distance for translucent objects, see PrimitiveComponent description for more details.\n\x09*/" },
		{ "editcondition", "bOverrideTranslucencySortDistanceOffset" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "When enabled this is the default value set on the component.\nModifies the sort distance for translucent objects, see PrimitiveComponent description for more details." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TranslucencySortDistanceOffset = { "TranslucencySortDistanceOffset", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, TranslucencySortDistanceOffset), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TranslucencySortDistanceOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TranslucencySortDistanceOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugSystemInfo_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugSystemInfo_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bDumpDebugSystemInfo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugSystemInfo = { "bDumpDebugSystemInfo", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugSystemInfo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugSystemInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugSystemInfo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugEmitterInfo_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugEmitterInfo_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bDumpDebugEmitterInfo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugEmitterInfo = { "bDumpDebugEmitterInfo", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugEmitterInfo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugEmitterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugEmitterInfo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bRequireCurrentFrameData_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** When enabled, we follow the settings on the UNiagaraComponent for tick order. When this option is disabled, we ignore any dependencies from data interfaces or other variables and instead fire off the simulation as early in the frame as possible. This greatly\n\x09reduces overhead and allows the game thread to run faster, but comes at a tradeoff if the dependencies might leave gaps or other visual artifacts.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "When enabled, we follow the settings on the UNiagaraComponent for tick order. When this option is disabled, we ignore any dependencies from data interfaces or other variables and instead fire off the simulation as early in the frame as possible. This greatly\n      reduces overhead and allows the game thread to run faster, but comes at a tradeoff if the dependencies might leave gaps or other visual artifacts." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bRequireCurrentFrameData_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bRequireCurrentFrameData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bRequireCurrentFrameData = { "bRequireCurrentFrameData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bRequireCurrentFrameData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bRequireCurrentFrameData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bRequireCurrentFrameData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bFixedBounds_MetaData[] = {
		{ "Category", "System" },
		{ "Comment", "/** Whether or not fixed bounds are enabled. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "SkipSystemResetOnChange", "true" },
		{ "ToolTip", "Whether or not fixed bounds are enabled." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bFixedBounds_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bFixedBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bFixedBounds = { "bFixedBounds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bFixedBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bFixedBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bFixedBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EffectType_MetaData[] = {
		{ "Category", "System" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EffectType = { "EffectType", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, EffectType), Z_Construct_UClass_UNiagaraEffectType_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EffectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EffectType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideScalabilitySettings_MetaData[] = {
		{ "Category", "Scalability" },
		{ "DisplayInScalabilityContext", "" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideScalabilitySettings_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bOverrideScalabilitySettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideScalabilitySettings = { "bOverrideScalabilitySettings", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideScalabilitySettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideScalabilitySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideScalabilitySettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideAllowCullingForLocalPlayers_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** Controls whether we should override the Effect Type value for bAllowCullingForLocalPlayers. */" },
		{ "EditCondition", "bOverrideScalabilitySettings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Controls whether we should override the Effect Type value for bAllowCullingForLocalPlayers." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideAllowCullingForLocalPlayers_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bOverrideAllowCullingForLocalPlayers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideAllowCullingForLocalPlayers = { "bOverrideAllowCullingForLocalPlayers", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideAllowCullingForLocalPlayers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideAllowCullingForLocalPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideAllowCullingForLocalPlayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bAllowCullingForLocalPlayersOverride_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** The override value for bAllowCullingForLocalPlayers from the Effect Type. */" },
		{ "EditCondition", "bOverrideAllowCullingForLocalPlayers" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "The override value for bAllowCullingForLocalPlayers from the Effect Type." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bAllowCullingForLocalPlayersOverride_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bAllowCullingForLocalPlayersOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bAllowCullingForLocalPlayersOverride = { "bAllowCullingForLocalPlayersOverride", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bAllowCullingForLocalPlayersOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bAllowCullingForLocalPlayersOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bAllowCullingForLocalPlayersOverride_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScalabilityOverrides_Inner = { "ScalabilityOverrides", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride, METADATA_PARAMS(nullptr, 0) }; // 1508986335
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScalabilityOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScalabilityOverrides = { "ScalabilityOverrides", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, ScalabilityOverrides_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScalabilityOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScalabilityOverrides_MetaData)) }; // 1508986335
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemScalabilityOverrides_MetaData[] = {
		{ "Category", "Scalability" },
		{ "DisplayInScalabilityContext", "" },
		{ "EditCondition", "bOverrideScalabilitySettings" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemScalabilityOverrides = { "SystemScalabilityOverrides", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, SystemScalabilityOverrides), Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemScalabilityOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemScalabilityOverrides_MetaData)) }; // 2778345621
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EmitterHandles_Inner = { "EmitterHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraEmitterHandle, METADATA_PARAMS(nullptr, 0) }; // 936216569
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EmitterHandles_MetaData[] = {
		{ "Comment", "/** Handles to the emitter this System will simulate. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Handles to the emitter this System will simulate." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EmitterHandles = { "EmitterHandles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, EmitterHandles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EmitterHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EmitterHandles_MetaData)) }; // 936216569
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ParameterCollectionOverrides_Inner = { "ParameterCollectionOverrides", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraParameterCollectionInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ParameterCollectionOverrides_MetaData[] = {
		{ "Category", "System" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ParameterCollectionOverrides = { "ParameterCollectionOverrides", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, ParameterCollectionOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ParameterCollectionOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ParameterCollectionOverrides_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ActiveCompilations_Inner = { "ActiveCompilations", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest, METADATA_PARAMS(nullptr, 0) }; // 3468348968
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ActiveCompilations_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ActiveCompilations = { "ActiveCompilations", nullptr, (EPropertyFlags)0x0020080800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, ActiveCompilations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ActiveCompilations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ActiveCompilations_MetaData)) }; // 3468348968
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemSpawnScript_MetaData[] = {
		{ "Comment", "/** The script which defines the System parameters, and which generates the bindings from System\n\x09\x09parameter to emitter parameter. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "The script which defines the System parameters, and which generates the bindings from System\n              parameter to emitter parameter." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemSpawnScript = { "SystemSpawnScript", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, SystemSpawnScript), Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemSpawnScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemSpawnScript_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemUpdateScript_MetaData[] = {
		{ "Comment", "/** The script which defines the System parameters, and which generates the bindings from System\n\x09parameter to emitter parameter. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "The script which defines the System parameters, and which generates the bindings from System\n      parameter to emitter parameter." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemUpdateScript = { "SystemUpdateScript", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, SystemUpdateScript), Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemUpdateScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemUpdateScript_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemCompiledData_MetaData[] = {
		{ "Comment", "//** Post compile generated data used for initializing System Instances during runtime. */\n" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "/ Post compile generated data used for initializing System Instances during runtime." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemCompiledData = { "SystemCompiledData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, SystemCompiledData), Z_Construct_UScriptStruct_FNiagaraSystemCompiledData, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemCompiledData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemCompiledData_MetaData)) }; // 4106127070
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ExposedParameters_MetaData[] = {
		{ "Comment", "/** Variables exposed to the outside work for tweaking*/" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Variables exposed to the outside work for tweaking" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ExposedParameters = { "ExposedParameters", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, ExposedParameters), Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ExposedParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ExposedParameters_MetaData)) }; // 2566035836
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EditorData_MetaData[] = {
		{ "Comment", "/** Data used by the editor to maintain UI state etc.. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Data used by the editor to maintain UI state etc.." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EditorData = { "EditorData", nullptr, (EPropertyFlags)0x0024080800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, EditorData), Z_Construct_UClass_UNiagaraEditorDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EditorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EditorData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EditorParameters_MetaData[] = {
		{ "Comment", "/** Wrapper for editor only parameters. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Wrapper for editor only parameters." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EditorParameters = { "EditorParameters", nullptr, (EPropertyFlags)0x0024080800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, EditorParameters), Z_Construct_UClass_UNiagaraEditorParametersAdapterBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EditorParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EditorParameters_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_FixedBounds_MetaData[] = {
		{ "Category", "System" },
		{ "Comment", "/** The fixed bounding box value. bFixedBounds is the condition whether the fixed bounds can be edited. */" },
		{ "EditCondition", "bFixedBounds" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "SkipSystemResetOnChange", "true" },
		{ "ToolTip", "The fixed bounding box value. bFixedBounds is the condition whether the fixed bounds can be edited." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_FixedBounds = { "FixedBounds", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, FixedBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_FixedBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_FixedBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bAutoDeactivate_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Auto-deactivate system if all emitters are determined to not spawn particles again, regardless of lifetime." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bAutoDeactivate_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bAutoDeactivate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bAutoDeactivate = { "bAutoDeactivate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bAutoDeactivate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bAutoDeactivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bAutoDeactivate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDeterminism_MetaData[] = {
		{ "Category", "Random" },
		{ "Comment", "/**\n\x09When disabled we will generate a RandomSeed per instance on reset which is not deterministic.\n\x09When enabled we will always use the RandomSeed from the system plus the components RandomSeedOffset, this allows for determinism but variance between components.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "When disabled we will generate a RandomSeed per instance on reset which is not deterministic.\nWhen enabled we will always use the RandomSeed from the system plus the components RandomSeedOffset, this allows for determinism but variance between components." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDeterminism_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bDeterminism = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDeterminism = { "bDeterminism", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDeterminism_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDeterminism_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDeterminism_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Random" },
		{ "Comment", "/** Seed used for system script random number generator. */" },
		{ "EditCondition", "bDeterminism" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Seed used for system script random number generator." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, RandomSeed), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_RandomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_RandomSeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTime_MetaData[] = {
		{ "Category", "Warmup" },
		{ "Comment", "/** Warm up time in seconds. Used to calculate WarmupTickCount. Rounds down to the nearest multiple of WarmupTickDelta. */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Warm up time in seconds. Used to calculate WarmupTickCount. Rounds down to the nearest multiple of WarmupTickDelta." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTime = { "WarmupTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, WarmupTime), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTickCount_MetaData[] = {
		{ "Category", "Warmup" },
		{ "Comment", "/** Number of ticks to process for warmup. You can set by this or by time via WarmupTime. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Number of ticks to process for warmup. You can set by this or by time via WarmupTime." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTickCount = { "WarmupTickCount", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, WarmupTickCount), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTickCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTickCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTickDelta_MetaData[] = {
		{ "Category", "Warmup" },
		{ "Comment", "/** Delta time to use for warmup ticks. */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Delta time to use for warmup ticks." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTickDelta = { "WarmupTickDelta", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, WarmupTickDelta), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTickDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTickDelta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bFixedTickDelta_MetaData[] = {
		{ "Category", "System" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bFixedTickDelta_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bFixedTickDelta = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bFixedTickDelta = { "bFixedTickDelta", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bFixedTickDelta_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bFixedTickDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bFixedTickDelta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_FixedTickDeltaTime_MetaData[] = {
		{ "Category", "System" },
		{ "Comment", "/**\n\x09If activated, the system ticks with a fixed delta time instead of the varying game thread delta time. This leads to much more stable simulations.\n\x09When the fixed tick delta is smaller than the game thread tick time the simulation is substepping by executing multiple ticks per frame.\n\x09Note that activating this feature forces the system to tick on the game thread instead of an async task in parallel.\n\n\x09The max number of substeps per frame can be set via fx.Niagara.SystemSimulation.MaxTickSubsteps\n\x09*/" },
		{ "EditCondition", "bFixedTickDelta" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "If activated, the system ticks with a fixed delta time instead of the varying game thread delta time. This leads to much more stable simulations.\nWhen the fixed tick delta is smaller than the game thread tick time the simulation is substepping by executing multiple ticks per frame.\nNote that activating this feature forces the system to tick on the game thread instead of an async task in parallel.\n\nThe max number of substeps per frame can be set via fx.Niagara.SystemSimulation.MaxTickSubsteps" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_FixedTickDeltaTime = { "FixedTickDeltaTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, FixedTickDeltaTime), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_FixedTickDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_FixedTickDeltaTime_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_BakerSettings_MetaData[] = {
		{ "Comment", "/** Settings used inside the baker */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Settings used inside the baker" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_BakerSettings = { "BakerSettings", nullptr, (EPropertyFlags)0x0024080800000008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, BakerSettings), Z_Construct_UClass_UNiagaraBakerSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_BakerSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_BakerSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_BakerGeneratedSettings_MetaData[] = {
		{ "Comment", "/** Generated data baker settings, will be null until we have generated at least once. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Generated data baker settings, will be null until we have generated at least once." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_BakerGeneratedSettings = { "BakerGeneratedSettings", nullptr, (EPropertyFlags)0x0024080800000008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, BakerGeneratedSettings), Z_Construct_UClass_UNiagaraBakerSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_BakerGeneratedSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_BakerGeneratedSettings_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bHasSystemScriptDIsWithPerInstanceData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bHasSystemScriptDIsWithPerInstanceData_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bHasSystemScriptDIsWithPerInstanceData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bHasSystemScriptDIsWithPerInstanceData = { "bHasSystemScriptDIsWithPerInstanceData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bHasSystemScriptDIsWithPerInstanceData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bHasSystemScriptDIsWithPerInstanceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bHasSystemScriptDIsWithPerInstanceData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bNeedsGPUContextInitForDataInterfaces_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bNeedsGPUContextInitForDataInterfaces_SetBit(void* Obj)
	{
		((UNiagaraSystem*)Obj)->bNeedsGPUContextInitForDataInterfaces = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bNeedsGPUContextInitForDataInterfaces = { "bNeedsGPUContextInitForDataInterfaces", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraSystem), &Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bNeedsGPUContextInitForDataInterfaces_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bNeedsGPUContextInitForDataInterfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bNeedsGPUContextInitForDataInterfaces_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_UserDINamesReadInSystemScripts_Inner = { "UserDINamesReadInSystemScripts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_UserDINamesReadInSystemScripts_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_UserDINamesReadInSystemScripts = { "UserDINamesReadInSystemScripts", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, UserDINamesReadInSystemScripts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_UserDINamesReadInSystemScripts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_UserDINamesReadInSystemScripts_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ReferencedDataChannelDefinitions_Inner = { "ReferencedDataChannelDefinitions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraDataChannelDefinitions_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ReferencedDataChannelDefinitions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ReferencedDataChannelDefinitions = { "ReferencedDataChannelDefinitions", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, ReferencedDataChannelDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ReferencedDataChannelDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ReferencedDataChannelDefinitions_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_MessageKeyToMessageMap_ValueProp = { "MessageKeyToMessageMap", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UNiagaraMessageDataBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_MessageKeyToMessageMap_Key_KeyProp = { "MessageKeyToMessageMap_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_MessageKeyToMessageMap_MetaData[] = {
		{ "Comment", "/** Messages associated with the System asset. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSystem.h" },
		{ "ToolTip", "Messages associated with the System asset." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_MessageKeyToMessageMap = { "MessageKeyToMessageMap", nullptr, (EPropertyFlags)0x0024080800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystem, MessageKeyToMessageMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_MessageKeyToMessageMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_MessageKeyToMessageMap_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraSystem_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ThumbnailImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bExposeToLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_LibraryVisibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_LibraryVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bIsTemplateAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TemplateSpecification_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TemplateSpecification,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TemplateAssetDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScratchPadScripts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScratchPadScripts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EditorOnlyAddedParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_UpdateContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bCompileForEdit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bBakeOutRapidIteration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bBakeOutRapidIterationOnCook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bCompressAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bTrimAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bTrimAttributesOnCook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bIgnoreParticleReadsForAttributeTrim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDisableDebugSwitches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDisableDebugSwitchesOnCook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ParameterDefinitionsSubscriptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ParameterDefinitionsSubscriptions,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bSupportLargeWorldCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCastShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideReceivesDecals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideRenderCustomDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCustomDepthStencilValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCustomDepthStencilWriteMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideTranslucencySortPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideTranslucencySortDistanceOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bCastShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bReceivesDecals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bRenderCustomDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDisableExperimentalVM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_CustomDepthStencilWriteMask_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_CustomDepthStencilWriteMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_CustomDepthStencilValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TranslucencySortPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_TranslucencySortDistanceOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugSystemInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugEmitterInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bRequireCurrentFrameData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bFixedBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EffectType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideScalabilitySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideAllowCullingForLocalPlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bAllowCullingForLocalPlayersOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScalabilityOverrides_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ScalabilityOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemScalabilityOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EmitterHandles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EmitterHandles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ParameterCollectionOverrides_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ParameterCollectionOverrides,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ActiveCompilations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ActiveCompilations,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemSpawnScript,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemUpdateScript,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_SystemCompiledData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ExposedParameters,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EditorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_EditorParameters,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_FixedBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bAutoDeactivate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDeterminism,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_RandomSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTickCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_WarmupTickDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bFixedTickDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_FixedTickDeltaTime,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_BakerSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_BakerGeneratedSettings,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bHasSystemScriptDIsWithPerInstanceData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bNeedsGPUContextInitForDataInterfaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_UserDINamesReadInSystemScripts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_UserDINamesReadInSystemScripts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ReferencedDataChannelDefinitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_ReferencedDataChannelDefinitions,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_MessageKeyToMessageMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_MessageKeyToMessageMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_MessageKeyToMessageMap,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSystem_Statics::ClassParams = {
		&UNiagaraSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraSystem()
	{
		if (!Z_Registration_Info_UClass_UNiagaraSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraSystem.OuterSingleton, Z_Construct_UClass_UNiagaraSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraSystem.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraSystem>()
	{
		return UNiagaraSystem::StaticClass();
	}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraSystem)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraEmitterCompiledData::StaticStruct, Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewStructOps, TEXT("NiagaraEmitterCompiledData"), &Z_Registration_Info_UScriptStruct_NiagaraEmitterCompiledData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraEmitterCompiledData), 3063082132U) },
		{ FNiagaraParameterDataSetBinding::StaticStruct, Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::NewStructOps, TEXT("NiagaraParameterDataSetBinding"), &Z_Registration_Info_UScriptStruct_NiagaraParameterDataSetBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraParameterDataSetBinding), 2640602045U) },
		{ FNiagaraParameterDataSetBindingCollection::StaticStruct, Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewStructOps, TEXT("NiagaraParameterDataSetBindingCollection"), &Z_Registration_Info_UScriptStruct_NiagaraParameterDataSetBindingCollection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraParameterDataSetBindingCollection), 2313891423U) },
		{ FNiagaraSystemCompiledData::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewStructOps, TEXT("NiagaraSystemCompiledData"), &Z_Registration_Info_UScriptStruct_NiagaraSystemCompiledData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSystemCompiledData), 4106127070U) },
		{ FNiagaraSystemCompileRequest::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics::NewStructOps, TEXT("NiagaraSystemCompileRequest"), &Z_Registration_Info_UScriptStruct_NiagaraSystemCompileRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSystemCompileRequest), 3468348968U) },
		{ FNiagaraSystemScalabilityOverrides::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::NewStructOps, TEXT("NiagaraSystemScalabilityOverrides"), &Z_Registration_Info_UScriptStruct_NiagaraSystemScalabilityOverrides, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSystemScalabilityOverrides), 2778345621U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraSystem, UNiagaraSystem::StaticClass, TEXT("UNiagaraSystem"), &Z_Registration_Info_UClass_UNiagaraSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraSystem), 3100730640U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_4104818460(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
