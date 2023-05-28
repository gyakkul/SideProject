// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraSimulationStageBase.h"
#include "../Public/NiagaraCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraSimulationStageBase() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScript_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimulationStageBase();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimulationStageBase_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimulationStageGeneric();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimulationStageGeneric_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding();
	NIAGARACORE_API UClass* Z_Construct_UClass_UNiagaraMergeable();
	NIAGARACORE_API UEnum* Z_Construct_UEnum_NiagaraCore_ENiagaraIterationSource();
	NIAGARASHADER_API UEnum* Z_Construct_UEnum_NiagaraShader_ENiagaraDirectDispatchElementType();
	NIAGARASHADER_API UEnum* Z_Construct_UEnum_NiagaraShader_ENiagaraGpuDispatchType();
	NIAGARASHADER_API UEnum* Z_Construct_UEnum_NiagaraShader_ENiagaraSimStageExecuteBehavior();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraSimulationStageBase::StaticRegisterNativesUNiagaraSimulationStageBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraSimulationStageBase);
	UClass* Z_Construct_UClass_UNiagaraSimulationStageBase_NoRegister()
	{
		return UNiagaraSimulationStageBase::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraSimulationStageBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Script_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Script;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationStageName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SimulationStageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OuterEmitterVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OuterEmitterVersion;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraMergeable,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A base class for niagara simulation stages.  This class should be derived to add stage specific information.\n*/" },
		{ "IncludePath", "NiagaraSimulationStageBase.h" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "ToolTip", "A base class for niagara simulation stages.  This class should be derived to add stage specific information." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_Script_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_Script = { "Script", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSimulationStageBase, Script), Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_Script_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_Script_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_SimulationStageName_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_SimulationStageName = { "SimulationStageName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSimulationStageBase, SimulationStageName), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_SimulationStageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_SimulationStageName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_bEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UNiagaraSimulationStageBase*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSimulationStageBase), &Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_OuterEmitterVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_OuterEmitterVersion = { "OuterEmitterVersion", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSimulationStageBase, OuterEmitterVersion), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_OuterEmitterVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_OuterEmitterVersion_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_Script,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_SimulationStageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_bEnabled,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_OuterEmitterVersion,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraSimulationStageBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::ClassParams = {
		&UNiagaraSimulationStageBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraSimulationStageBase()
	{
		if (!Z_Registration_Info_UClass_UNiagaraSimulationStageBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraSimulationStageBase.OuterSingleton, Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraSimulationStageBase.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraSimulationStageBase>()
	{
		return UNiagaraSimulationStageBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraSimulationStageBase);
	UNiagaraSimulationStageBase::~UNiagaraSimulationStageBase() {}
	void UNiagaraSimulationStageGeneric::StaticRegisterNativesUNiagaraSimulationStageGeneric()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraSimulationStageGeneric);
	UClass* Z_Construct_UClass_UNiagaraSimulationStageGeneric_NoRegister()
	{
		return UNiagaraSimulationStageGeneric::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnabledBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnabledBinding;
		static const UECodeGen_Private::FBytePropertyParams NewProp_IterationSource_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IterationSource_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_IterationSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Iterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Iterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumIterationsBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NumIterationsBinding;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExecuteBehavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecuteBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisablePartialParticleUpdate_MetaData[];
#endif
		static void NewProp_bDisablePartialParticleUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisablePartialParticleUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataInterface_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataInterface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bParticleIterationStateEnabled_MetaData[];
#endif
		static void NewProp_bParticleIterationStateEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bParticleIterationStateEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleIterationStateBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleIterationStateBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleIterationStateRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleIterationStateRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGpuDispatchForceLinear_MetaData[];
#endif
		static void NewProp_bGpuDispatchForceLinear_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGpuDispatchForceLinear;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideGpuDispatchNumThreads_MetaData[];
#endif
		static void NewProp_bOverrideGpuDispatchNumThreads_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideGpuDispatchNumThreads;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideGpuDispatchNumThreads_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideGpuDispatchNumThreads;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DirectDispatchType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectDispatchType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DirectDispatchType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DirectDispatchElementType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectDispatchElementType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DirectDispatchElementType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementCountXBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementCountXBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementCountYBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementCountYBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementCountZBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementCountZBinding;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementCountBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementCountBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnOnly_MetaData[];
#endif
		static void NewProp_bSpawnOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideGpuDispatchType_MetaData[];
#endif
		static void NewProp_bOverrideGpuDispatchType_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideGpuDispatchType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OverrideGpuDispatchType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideGpuDispatchType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OverrideGpuDispatchType;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraSimulationStageBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Generic Simulation Stage" },
		{ "IncludePath", "NiagaraSimulationStageBase.h" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_EnabledBinding_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "Comment", "/** Optional bool binding allowing scripts to control if the simulation stage is enabled or not. */" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "ToolTip", "Optional bool binding allowing scripts to control if the simulation stage is enabled or not." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_EnabledBinding = { "EnabledBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSimulationStageGeneric, EnabledBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_EnabledBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_EnabledBinding_MetaData)) }; // 2514448469
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_IterationSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_IterationSource_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "Comment", "/**\n\x09Select what we should be iterating over, particles or data interfaces.\n\x09The source provides things such as element count (when not overriden) and stack context variables (i.e. attributes on grids)\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "ToolTip", "Select what we should be iterating over, particles or data interfaces.\nThe source provides things such as element count (when not overriden) and stack context variables (i.e. attributes on grids)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_IterationSource = { "IterationSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSimulationStageGeneric, IterationSource), Z_Construct_UEnum_NiagaraCore_ENiagaraIterationSource, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_IterationSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_IterationSource_MetaData)) }; // 229667017
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_Iterations_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09Number of times (or iterations) the simulation stage will execute in a row.\n\x09""For example, setting this to 10 will mean this simulation stage runs 10 times in a row before the next stage.\n\x09*/" },
		{ "DisplayName", "Num Iterations" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "NoSpinbox", "true" },
		{ "ToolTip", "Number of times (or iterations) the simulation stage will execute in a row.\nFor example, setting this to 10 will mean this simulation stage runs 10 times in a row before the next stage." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_Iterations = { "Iterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSimulationStageGeneric, Iterations), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_Iterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_Iterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_NumIterationsBinding_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "Comment", "/**\n\x09Optional integer binding allowing scripts to control the number of iterations.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "ToolTip", "Optional integer binding allowing scripts to control the number of iterations." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_NumIterationsBinding = { "NumIterationsBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSimulationStageGeneric, NumIterationsBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_NumIterationsBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_NumIterationsBinding_MetaData)) }; // 2514448469
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ExecuteBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ExecuteBehavior_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "Comment", "/**\n\x09""Controls when the simulation stage should execute, only valid for data interface iteration stages\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "ToolTip", "Controls when the simulation stage should execute, only valid for data interface iteration stages" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ExecuteBehavior = { "ExecuteBehavior", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSimulationStageGeneric, ExecuteBehavior), Z_Construct_UEnum_NiagaraShader_ENiagaraSimStageExecuteBehavior, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ExecuteBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ExecuteBehavior_MetaData)) }; // 3580780632
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bDisablePartialParticleUpdate_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "Comment", "/**\n\x09""Disables the ability to read / write from the same particle buffer, i.e. only update position and no other attributes.\n\x09""By default this should not be changed, but can be used to debug issues.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "ToolTip", "Disables the ability to read / write from the same particle buffer, i.e. only update position and no other attributes.\nBy default this should not be changed, but can be used to debug issues." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bDisablePartialParticleUpdate_SetBit(void* Obj)
	{
		((UNiagaraSimulationStageGeneric*)Obj)->bDisablePartialParticleUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bDisablePartialParticleUpdate = { "bDisablePartialParticleUpdate", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSimulationStageGeneric), &Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bDisablePartialParticleUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bDisablePartialParticleUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bDisablePartialParticleUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_DataInterface_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "Comment", "/** Source data interface to use for the simulation stage. The data interface needs to be a subclass of UNiagaraDataInterfaceRWBase, for example the Grid2D and Grid3D data interfaces. */" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "ToolTip", "Source data interface to use for the simulation stage. The data interface needs to be a subclass of UNiagaraDataInterfaceRWBase, for example the Grid2D and Grid3D data interfaces." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_DataInterface = { "DataInterface", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSimulationStageGeneric, DataInterface), Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_DataInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_DataInterface_MetaData)) }; // 3612780882
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bParticleIterationStateEnabled_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "Comment", "/**\n\x09When enabled we iterate over the subset of particles that satisfy the binding & range selected.\n\x09""For example, if the binding was set to Particles.MyStateIndex and the range was 1-3 only the particles\n\x09with values of 1, 2 or 3 for Particles.MyStateIndex would run the script, all others would be ignored.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "ToolTip", "When enabled we iterate over the subset of particles that satisfy the binding & range selected.\nFor example, if the binding was set to Particles.MyStateIndex and the range was 1-3 only the particles\nwith values of 1, 2 or 3 for Particles.MyStateIndex would run the script, all others would be ignored." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bParticleIterationStateEnabled_SetBit(void* Obj)
	{
		((UNiagaraSimulationStageGeneric*)Obj)->bParticleIterationStateEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bParticleIterationStateEnabled = { "bParticleIterationStateEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSimulationStageGeneric), &Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bParticleIterationStateEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bParticleIterationStateEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bParticleIterationStateEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ParticleIterationStateBinding_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "Comment", "/** Particle state attribute binding, when enabled we will only allow particles who pass the state range check to be processed. */" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "ToolTip", "Particle state attribute binding, when enabled we will only allow particles who pass the state range check to be processed." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ParticleIterationStateBinding = { "ParticleIterationStateBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSimulationStageGeneric, ParticleIterationStateBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ParticleIterationStateBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ParticleIterationStateBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ParticleIterationStateRange_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "Comment", "/** The inclusive range used to check particle state binding against when enabled. */" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "ToolTip", "The inclusive range used to check particle state binding against when enabled." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ParticleIterationStateRange = { "ParticleIterationStateRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSimulationStageGeneric, ParticleIterationStateRange), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ParticleIterationStateRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ParticleIterationStateRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bGpuDispatchForceLinear_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "Comment", "/**\n\x09When enabled we force the dispatch to be linear (i.e. one dimension is used).\n\x09NOTE: Cannot be used with OverrideGpuDispatchType.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "ToolTip", "When enabled we force the dispatch to be linear (i.e. one dimension is used).\nNOTE: Cannot be used with OverrideGpuDispatchType." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bGpuDispatchForceLinear_SetBit(void* Obj)
	{
		((UNiagaraSimulationStageGeneric*)Obj)->bGpuDispatchForceLinear = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bGpuDispatchForceLinear = { "bGpuDispatchForceLinear", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSimulationStageGeneric), &Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bGpuDispatchForceLinear_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bGpuDispatchForceLinear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bGpuDispatchForceLinear_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bOverrideGpuDispatchNumThreads_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "Comment", "/** When enabled we use a custom number of threads for the dispatch. */" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "ToolTip", "When enabled we use a custom number of threads for the dispatch." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bOverrideGpuDispatchNumThreads_SetBit(void* Obj)
	{
		((UNiagaraSimulationStageGeneric*)Obj)->bOverrideGpuDispatchNumThreads = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bOverrideGpuDispatchNumThreads = { "bOverrideGpuDispatchNumThreads", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSimulationStageGeneric), &Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bOverrideGpuDispatchNumThreads_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bOverrideGpuDispatchNumThreads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bOverrideGpuDispatchNumThreads_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_OverrideGpuDispatchNumThreads_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_OverrideGpuDispatchNumThreads = { "OverrideGpuDispatchNumThreads", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSimulationStageGeneric, OverrideGpuDispatchNumThreads), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_OverrideGpuDispatchNumThreads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_OverrideGpuDispatchNumThreads_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_DirectDispatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_DirectDispatchType_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "Comment", "/** Dimensions to use for dispatch. */" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "ToolTip", "Dimensions to use for dispatch." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_DirectDispatchType = { "DirectDispatchType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSimulationStageGeneric, DirectDispatchType), Z_Construct_UEnum_NiagaraShader_ENiagaraGpuDispatchType, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_DirectDispatchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_DirectDispatchType_MetaData)) }; // 159617944
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_DirectDispatchElementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_DirectDispatchElementType_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "Comment", "/** Customizes what the element count means for a direct dispatch. */" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "ToolTip", "Customizes what the element count means for a direct dispatch." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_DirectDispatchElementType = { "DirectDispatchElementType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSimulationStageGeneric, DirectDispatchElementType), Z_Construct_UEnum_NiagaraShader_ENiagaraDirectDispatchElementType, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_DirectDispatchElementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_DirectDispatchElementType_MetaData)) }; // 3700041285
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ElementCountXBinding_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "Comment", "/**\n\x09Integer binding to override the number of elements the stage will execute along X.\n\x09""For example, if you want to iterate over a custom source such as triangles on a mesh you can\n\x09set an int to the triangle count in an emitter script and bind that as the element count.\n\x09*/" },
		{ "DisplayName", "ElementCount X" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "ToolTip", "Integer binding to override the number of elements the stage will execute along X.\nFor example, if you want to iterate over a custom source such as triangles on a mesh you can\nset an int to the triangle count in an emitter script and bind that as the element count." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ElementCountXBinding = { "ElementCountXBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSimulationStageGeneric, ElementCountXBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ElementCountXBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ElementCountXBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ElementCountYBinding_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "Comment", "/**\n\x09Integer binding to override the number of elements the stage will execute along Y.\n\x09""For example, if you want to iterate over a 2D texture you can set an int to the texture height\n\x09in an emitter script and bind that as the element count.\n\x09*/" },
		{ "DisplayName", "ElementCount Y" },
		{ "EditCondition", "DirectDispatchType == ENiagaraGpuDispatchType::TwoD || DirectDispatchType == ENiagaraGpuDispatchType::ThreeD" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "ToolTip", "Integer binding to override the number of elements the stage will execute along Y.\nFor example, if you want to iterate over a 2D texture you can set an int to the texture height\nin an emitter script and bind that as the element count." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ElementCountYBinding = { "ElementCountYBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSimulationStageGeneric, ElementCountYBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ElementCountYBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ElementCountYBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ElementCountZBinding_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "Comment", "/**\n\x09Integer binding to override the number of elements the stage will execute along Z.\n\x09""For example, if you want to iterate over a 3D texture you can set an int to the texture depth\n\x09in an emitter script and bind that as the element count.\n\x09*/" },
		{ "DisplayName", "ElementCount Z" },
		{ "EditCondition", "DirectDispatchType == ENiagaraGpuDispatchType::ThreeD" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "ToolTip", "Integer binding to override the number of elements the stage will execute along Z.\nFor example, if you want to iterate over a 3D texture you can set an int to the texture depth\nin an emitter script and bind that as the element count." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ElementCountZBinding = { "ElementCountZBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSimulationStageGeneric, ElementCountZBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ElementCountZBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ElementCountZBinding_MetaData)) }; // 2514448469
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ElementCountBinding_MetaData[] = {
		{ "Comment", "// Deprecated Properties\n" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "ToolTip", "Deprecated Properties" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ElementCountBinding = { "ElementCountBinding", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSimulationStageGeneric, ElementCountBinding_DEPRECATED), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ElementCountBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ElementCountBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bSpawnOnly_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bSpawnOnly_SetBit(void* Obj)
	{
		((UNiagaraSimulationStageGeneric*)Obj)->bSpawnOnly_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bSpawnOnly = { "bSpawnOnly", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSimulationStageGeneric), &Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bSpawnOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bSpawnOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bSpawnOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bOverrideGpuDispatchType_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bOverrideGpuDispatchType_SetBit(void* Obj)
	{
		((UNiagaraSimulationStageGeneric*)Obj)->bOverrideGpuDispatchType_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bOverrideGpuDispatchType = { "bOverrideGpuDispatchType", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraSimulationStageGeneric), &Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bOverrideGpuDispatchType_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bOverrideGpuDispatchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bOverrideGpuDispatchType_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_OverrideGpuDispatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_OverrideGpuDispatchType_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_OverrideGpuDispatchType = { "OverrideGpuDispatchType", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSimulationStageGeneric, OverrideGpuDispatchType_DEPRECATED), Z_Construct_UEnum_NiagaraShader_ENiagaraGpuDispatchType, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_OverrideGpuDispatchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_OverrideGpuDispatchType_MetaData)) }; // 159617944
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_EnabledBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_IterationSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_IterationSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_Iterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_NumIterationsBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ExecuteBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ExecuteBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bDisablePartialParticleUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_DataInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bParticleIterationStateEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ParticleIterationStateBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ParticleIterationStateRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bGpuDispatchForceLinear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bOverrideGpuDispatchNumThreads,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_OverrideGpuDispatchNumThreads,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_DirectDispatchType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_DirectDispatchType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_DirectDispatchElementType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_DirectDispatchElementType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ElementCountXBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ElementCountYBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ElementCountZBinding,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ElementCountBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bSpawnOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bOverrideGpuDispatchType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_OverrideGpuDispatchType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_OverrideGpuDispatchType,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraSimulationStageGeneric>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::ClassParams = {
		&UNiagaraSimulationStageGeneric::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraSimulationStageGeneric()
	{
		if (!Z_Registration_Info_UClass_UNiagaraSimulationStageGeneric.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraSimulationStageGeneric.OuterSingleton, Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraSimulationStageGeneric.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraSimulationStageGeneric>()
	{
		return UNiagaraSimulationStageGeneric::StaticClass();
	}
	UNiagaraSimulationStageGeneric::UNiagaraSimulationStageGeneric() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraSimulationStageGeneric);
	UNiagaraSimulationStageGeneric::~UNiagaraSimulationStageGeneric() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraSimulationStageBase, UNiagaraSimulationStageBase::StaticClass, TEXT("UNiagaraSimulationStageBase"), &Z_Registration_Info_UClass_UNiagaraSimulationStageBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraSimulationStageBase), 4098542372U) },
		{ Z_Construct_UClass_UNiagaraSimulationStageGeneric, UNiagaraSimulationStageGeneric::StaticClass, TEXT("UNiagaraSimulationStageGeneric"), &Z_Registration_Info_UClass_UNiagaraSimulationStageGeneric, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraSimulationStageGeneric), 999628782U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_843866414(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
