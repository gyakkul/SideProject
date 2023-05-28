// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Nodes/OptimusNode_AnimAttributeDataInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNode_AnimAttributeDataInterface() {}
// Cross Module References
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_AnimAttributeDataInterface();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_AnimAttributeDataInterface_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_DataInterface();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	void UOptimusNode_AnimAttributeDataInterface::StaticRegisterNativesUOptimusNode_AnimAttributeDataInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNode_AnimAttributeDataInterface);
	UClass* Z_Construct_UClass_UOptimusNode_AnimAttributeDataInterface_NoRegister()
	{
		return UOptimusNode_AnimAttributeDataInterface::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusNode_AnimAttributeDataInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusNode_AnimAttributeDataInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusNode_DataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_AnimAttributeDataInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/OptimusNode_AnimAttributeDataInterface.h" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_AnimAttributeDataInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusNode_AnimAttributeDataInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNode_AnimAttributeDataInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNode_AnimAttributeDataInterface_Statics::ClassParams = {
		&UOptimusNode_AnimAttributeDataInterface::StaticClass,
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
		0x018000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_AnimAttributeDataInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_AnimAttributeDataInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusNode_AnimAttributeDataInterface()
	{
		if (!Z_Registration_Info_UClass_UOptimusNode_AnimAttributeDataInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNode_AnimAttributeDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusNode_AnimAttributeDataInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusNode_AnimAttributeDataInterface.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNode_AnimAttributeDataInterface>()
	{
		return UOptimusNode_AnimAttributeDataInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNode_AnimAttributeDataInterface);
	UOptimusNode_AnimAttributeDataInterface::~UOptimusNode_AnimAttributeDataInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_AnimAttributeDataInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_AnimAttributeDataInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNode_AnimAttributeDataInterface, UOptimusNode_AnimAttributeDataInterface::StaticClass, TEXT("UOptimusNode_AnimAttributeDataInterface"), &Z_Registration_Info_UClass_UOptimusNode_AnimAttributeDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNode_AnimAttributeDataInterface), 251248873U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_AnimAttributeDataInterface_h_1562585825(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_AnimAttributeDataInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_AnimAttributeDataInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
