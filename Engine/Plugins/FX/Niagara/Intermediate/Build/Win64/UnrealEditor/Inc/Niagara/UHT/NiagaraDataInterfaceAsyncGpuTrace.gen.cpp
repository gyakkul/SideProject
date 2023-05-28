// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraDataInterfaceAsyncGpuTrace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceAsyncGpuTrace() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace_NoRegister();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDICollisionQuery_AsyncGpuTraceProvider();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceAsyncGpuTrace::StaticRegisterNativesUNiagaraDataInterfaceAsyncGpuTrace()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceAsyncGpuTrace);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace_NoRegister()
	{
		return UNiagaraDataInterfaceAsyncGpuTrace::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTracesPerParticle_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTracesPerParticle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRetraces_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxRetraces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceProvider_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceProvider;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace_Statics::Class_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Data interface for handling latent (delayed 1 frame) traces against the scene for GPU simulations. */" },
		{ "DisplayName", "Async Gpu Trace" },
		{ "IncludePath", "NiagaraDataInterfaceAsyncGpuTrace.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAsyncGpuTrace.h" },
		{ "ToolTip", "Data interface for handling latent (delayed 1 frame) traces against the scene for GPU simulations." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace_Statics::NewProp_MaxTracesPerParticle_MetaData[] = {
		{ "Category", "Async GPU Trace" },
		{ "Comment", "/** The maximum number of traces (per particle) that can be created per frame.  Defines the size of the preallocated \n\x09\x09""buffer that is used to contain the traces. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAsyncGpuTrace.h" },
		{ "ToolTip", "The maximum number of traces (per particle) that can be created per frame.  Defines the size of the preallocated\n              buffer that is used to contain the traces." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace_Statics::NewProp_MaxTracesPerParticle = { "MaxTracesPerParticle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceAsyncGpuTrace, MaxTracesPerParticle), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace_Statics::NewProp_MaxTracesPerParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace_Statics::NewProp_MaxTracesPerParticle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace_Statics::NewProp_MaxRetraces_MetaData[] = {
		{ "Category", "Async GPU Trace" },
		{ "Comment", "/** If a collision is rejected, how many times do we attempt to retrace from that collision point forward to find a new, valid collision.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAsyncGpuTrace.h" },
		{ "ToolTip", "If a collision is rejected, how many times do we attempt to retrace from that collision point forward to find a new, valid collision." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace_Statics::NewProp_MaxRetraces = { "MaxRetraces", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceAsyncGpuTrace, MaxRetraces), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace_Statics::NewProp_MaxRetraces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace_Statics::NewProp_MaxRetraces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace_Statics::NewProp_TraceProvider_MetaData[] = {
		{ "Category", "Async GPU Trace" },
		{ "Comment", "/** Defines which technique is used to resolve the trace - see 'AsyncGpuTraceDI/Provider Priority' in the Niagara project settings. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAsyncGpuTrace.h" },
		{ "ToolTip", "Defines which technique is used to resolve the trace - see 'AsyncGpuTraceDI/Provider Priority' in the Niagara project settings." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace_Statics::NewProp_TraceProvider = { "TraceProvider", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceAsyncGpuTrace, TraceProvider), Z_Construct_UEnum_Niagara_ENDICollisionQuery_AsyncGpuTraceProvider, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace_Statics::NewProp_TraceProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace_Statics::NewProp_TraceProvider_MetaData)) }; // 2583400824
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace_Statics::NewProp_MaxTracesPerParticle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace_Statics::NewProp_MaxRetraces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace_Statics::NewProp_TraceProvider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceAsyncGpuTrace>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace_Statics::ClassParams = {
		&UNiagaraDataInterfaceAsyncGpuTrace::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceAsyncGpuTrace.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceAsyncGpuTrace.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceAsyncGpuTrace.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceAsyncGpuTrace>()
	{
		return UNiagaraDataInterfaceAsyncGpuTrace::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceAsyncGpuTrace);
	UNiagaraDataInterfaceAsyncGpuTrace::~UNiagaraDataInterfaceAsyncGpuTrace() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceAsyncGpuTrace_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceAsyncGpuTrace_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceAsyncGpuTrace, UNiagaraDataInterfaceAsyncGpuTrace::StaticClass, TEXT("UNiagaraDataInterfaceAsyncGpuTrace"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceAsyncGpuTrace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceAsyncGpuTrace), 3889380756U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceAsyncGpuTrace_h_996797797(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceAsyncGpuTrace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceAsyncGpuTrace_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
