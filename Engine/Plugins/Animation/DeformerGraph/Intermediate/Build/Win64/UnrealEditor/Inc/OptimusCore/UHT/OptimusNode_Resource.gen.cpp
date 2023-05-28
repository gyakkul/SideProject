// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Nodes/OptimusNode_Resource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNode_Resource() {}
// Cross Module References
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_Resource();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_Resource_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_ResourceAccessorBase();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	void UOptimusNode_Resource::StaticRegisterNativesUOptimusNode_Resource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNode_Resource);
	UClass* Z_Construct_UClass_UOptimusNode_Resource_NoRegister()
	{
		return UOptimusNode_Resource::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusNode_Resource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusNode_Resource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusNode_ResourceAccessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_Resource_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/OptimusNode_Resource.h" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_Resource.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusNode_Resource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNode_Resource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNode_Resource_Statics::ClassParams = {
		&UOptimusNode_Resource::StaticClass,
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
		0x010000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_Resource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_Resource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusNode_Resource()
	{
		if (!Z_Registration_Info_UClass_UOptimusNode_Resource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNode_Resource.OuterSingleton, Z_Construct_UClass_UOptimusNode_Resource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusNode_Resource.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNode_Resource>()
	{
		return UOptimusNode_Resource::StaticClass();
	}
	UOptimusNode_Resource::UOptimusNode_Resource() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNode_Resource);
	UOptimusNode_Resource::~UOptimusNode_Resource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_Resource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_Resource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNode_Resource, UOptimusNode_Resource::StaticClass, TEXT("UOptimusNode_Resource"), &Z_Registration_Info_UClass_UOptimusNode_Resource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNode_Resource), 979817575U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_Resource_h_2449614056(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_Resource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_Resource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
