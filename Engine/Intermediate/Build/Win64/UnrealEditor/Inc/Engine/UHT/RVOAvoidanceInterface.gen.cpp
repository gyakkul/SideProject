// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRVOAvoidanceInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_URVOAvoidanceInterface();
	ENGINE_API UClass* Z_Construct_UClass_URVOAvoidanceInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void URVOAvoidanceInterface::StaticRegisterNativesURVOAvoidanceInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URVOAvoidanceInterface);
	UClass* Z_Construct_UClass_URVOAvoidanceInterface_NoRegister()
	{
		return URVOAvoidanceInterface::StaticClass();
	}
	struct Z_Construct_UClass_URVOAvoidanceInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URVOAvoidanceInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URVOAvoidanceInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/AI/RVOAvoidanceInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URVOAvoidanceInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IRVOAvoidanceInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URVOAvoidanceInterface_Statics::ClassParams = {
		&URVOAvoidanceInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_URVOAvoidanceInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URVOAvoidanceInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URVOAvoidanceInterface()
	{
		if (!Z_Registration_Info_UClass_URVOAvoidanceInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URVOAvoidanceInterface.OuterSingleton, Z_Construct_UClass_URVOAvoidanceInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URVOAvoidanceInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<URVOAvoidanceInterface>()
	{
		return URVOAvoidanceInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URVOAvoidanceInterface);
	URVOAvoidanceInterface::~URVOAvoidanceInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URVOAvoidanceInterface, URVOAvoidanceInterface::StaticClass, TEXT("URVOAvoidanceInterface"), &Z_Registration_Info_UClass_URVOAvoidanceInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URVOAvoidanceInterface), 1924832143U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_4217972040(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
