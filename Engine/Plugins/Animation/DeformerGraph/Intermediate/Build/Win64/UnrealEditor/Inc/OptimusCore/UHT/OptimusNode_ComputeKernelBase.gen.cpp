// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Nodes/OptimusNode_ComputeKernelBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNode_ComputeKernelBase() {}
// Cross Module References
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeKernelProvider_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_ComputeKernelBase();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_ComputeKernelBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	void UOptimusNode_ComputeKernelBase::StaticRegisterNativesUOptimusNode_ComputeKernelBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNode_ComputeKernelBase);
	UClass* Z_Construct_UClass_UOptimusNode_ComputeKernelBase_NoRegister()
	{
		return UOptimusNode_ComputeKernelBase::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusNode_ComputeKernelBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusNode_ComputeKernelBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusNode,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_ComputeKernelBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/OptimusNode_ComputeKernelBase.h" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ComputeKernelBase.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusNode_ComputeKernelBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UOptimusComputeKernelProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_ComputeKernelBase, IOptimusComputeKernelProvider), false },  // 3415069625
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusNode_ComputeKernelBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNode_ComputeKernelBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNode_ComputeKernelBase_Statics::ClassParams = {
		&UOptimusNode_ComputeKernelBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_ComputeKernelBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_ComputeKernelBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusNode_ComputeKernelBase()
	{
		if (!Z_Registration_Info_UClass_UOptimusNode_ComputeKernelBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNode_ComputeKernelBase.OuterSingleton, Z_Construct_UClass_UOptimusNode_ComputeKernelBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusNode_ComputeKernelBase.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNode_ComputeKernelBase>()
	{
		return UOptimusNode_ComputeKernelBase::StaticClass();
	}
	UOptimusNode_ComputeKernelBase::UOptimusNode_ComputeKernelBase() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNode_ComputeKernelBase);
	UOptimusNode_ComputeKernelBase::~UOptimusNode_ComputeKernelBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComputeKernelBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComputeKernelBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNode_ComputeKernelBase, UOptimusNode_ComputeKernelBase::StaticClass, TEXT("UOptimusNode_ComputeKernelBase"), &Z_Registration_Info_UClass_UOptimusNode_ComputeKernelBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNode_ComputeKernelBase), 1245365260U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComputeKernelBase_h_3342674085(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComputeKernelBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComputeKernelBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
