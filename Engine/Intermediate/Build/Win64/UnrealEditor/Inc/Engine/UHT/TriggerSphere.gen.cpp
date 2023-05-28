// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TriggerSphere.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerSphere() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBase();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerSphere();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerSphere_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ATriggerSphere::StaticRegisterNativesATriggerSphere()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATriggerSphere);
	UClass* Z_Construct_UClass_ATriggerSphere_NoRegister()
	{
		return ATriggerSphere::StaticClass();
	}
	struct Z_Construct_UClass_ATriggerSphere_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATriggerSphere_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerSphere_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A sphere shaped trigger, used to generate overlap events in the level */" },
		{ "IncludePath", "Engine/TriggerSphere.h" },
		{ "ModuleRelativePath", "Classes/Engine/TriggerSphere.h" },
		{ "ToolTip", "A sphere shaped trigger, used to generate overlap events in the level" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATriggerSphere_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerSphere>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATriggerSphere_Statics::ClassParams = {
		&ATriggerSphere::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATriggerSphere_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerSphere_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATriggerSphere()
	{
		if (!Z_Registration_Info_UClass_ATriggerSphere.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATriggerSphere.OuterSingleton, Z_Construct_UClass_ATriggerSphere_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATriggerSphere.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ATriggerSphere>()
	{
		return ATriggerSphere::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerSphere);
	ATriggerSphere::~ATriggerSphere() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATriggerSphere, ATriggerSphere::StaticClass, TEXT("ATriggerSphere"), &Z_Registration_Info_UClass_ATriggerSphere, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATriggerSphere), 3705376052U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_2436979125(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
