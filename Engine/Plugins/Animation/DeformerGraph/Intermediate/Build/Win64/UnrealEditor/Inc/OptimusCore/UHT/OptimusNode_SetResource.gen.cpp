// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Nodes/OptimusNode_SetResource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNode_SetResource() {}
// Cross Module References
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_ResourceAccessorBase();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_SetResource();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_SetResource_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	void UOptimusNode_SetResource::StaticRegisterNativesUOptimusNode_SetResource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNode_SetResource);
	UClass* Z_Construct_UClass_UOptimusNode_SetResource_NoRegister()
	{
		return UOptimusNode_SetResource::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusNode_SetResource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusNode_SetResource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusNode_ResourceAccessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_SetResource_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/OptimusNode_SetResource.h" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_SetResource.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusNode_SetResource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNode_SetResource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNode_SetResource_Statics::ClassParams = {
		&UOptimusNode_SetResource::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_SetResource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_SetResource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusNode_SetResource()
	{
		if (!Z_Registration_Info_UClass_UOptimusNode_SetResource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNode_SetResource.OuterSingleton, Z_Construct_UClass_UOptimusNode_SetResource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusNode_SetResource.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNode_SetResource>()
	{
		return UOptimusNode_SetResource::StaticClass();
	}
	UOptimusNode_SetResource::UOptimusNode_SetResource() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNode_SetResource);
	UOptimusNode_SetResource::~UOptimusNode_SetResource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_SetResource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_SetResource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNode_SetResource, UOptimusNode_SetResource::StaticClass, TEXT("UOptimusNode_SetResource"), &Z_Registration_Info_UClass_UOptimusNode_SetResource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNode_SetResource), 1590647366U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_SetResource_h_4212861824(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_SetResource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_SetResource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
